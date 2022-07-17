#ifndef TERRA_EVENTS_INPUT_KEYBOARD_KEYRELEASEDEVENT_H_
#define TERRA_EVENTS_INPUT_KEYBOARD_KEYRELEASEDEVENT_H_

#include "Common.h"
#include "Events/Input/Keyboard/KeyEvent.h"

namespace Terra {
namespace Events {
namespace Input {
namespace Keyboard {
class KeyReleasedEvent : public KeyEvent {
   public:
    explicit KeyReleasedEvent(int keyCode)
        : KeyEvent(keyCode) {}

    static EventType GetStaticType() { return EventType::KeyReleased; }
    EventType GetType() const override { return GetStaticType(); }

    const std::string ToString() const override {
        return fmt::format("{0}[{1}]", GetName(), GetKeyCode());
    }
};
}  // namespace Keyboard
}  // namespace Input
}  // namespace Events
}  // namespace Terra

#endif  // TERRA_EVENTS_INPUT_KEYBOARD_KEYRELEASEDEVENT_H_