#include <catch2/catch.hpp>

#include <Events/EventDispatcher.h>
#include <Events/Application/WindowResizeEvent.h>
#include <Events/Input/Keyboard/KeyPressedEvent.h>
#include <Events/Input/Keyboard/KeyReleasedEvent.h>

SCENARIO("Dispatcher handles only functions of underlying event's type") {
    GIVEN("a window resize event") {
        Terra::Events::Application::WindowResizeEvent windowResizeEvent(640, 480);

        REQUIRE(windowResizeEvent.GetType() == Terra::Events::EventType::WindowResize);

        AND_GIVEN("its' dispatcher") {
            Terra::Events::EventDispatcher windowResizeDispatcher(windowResizeEvent);

            WHEN("window resize handler function is dispatched") {
                std::function<bool(Terra::Events::Application::WindowResizeEvent&)> windowResizeHandler =
                        [](Terra::Events::Application::WindowResizeEvent&) { return true; };
                bool dispatchResult = windowResizeDispatcher.Dispatch(windowResizeHandler);

                THEN("the dispatched function should be invoked") {
                    REQUIRE(dispatchResult);
                }
                AND_THEN("event is set to handled state") {
                    REQUIRE(windowResizeEvent.IsHandled());
                }
            }

            WHEN("other than window resize function is dispatched") {
                std::function<bool(Terra::Events::Input::Keyboard::KeyPressedEvent&)> windowResizeHandler =
                        [](Terra::Events::Input::Keyboard::KeyPressedEvent&) { return false; };
                bool dispatchResult = windowResizeDispatcher.Dispatch(windowResizeHandler);

                THEN("the function should not be invoked") {
                    REQUIRE_FALSE(dispatchResult);
                }
            }
        }
    }
}