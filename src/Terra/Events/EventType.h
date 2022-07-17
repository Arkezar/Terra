#ifndef TERRA_EVENTS_EVENTTYPE_H_
#define TERRA_EVENTS_EVENTTYPE_H_

namespace Terra {
namespace Events {
enum class EventType : int {
    Undefined,

    WindowClose,
    WindowResize,
    WindowFocus,
    WindowLostFocus,
    WindowMove,

    Render,
    Update,
    Tick,

    KeyPressed,
    KeyReleased,

    MouseButtonPressed,
    MouseButtonReleased,
    MouseMoved,
    MouseScrolled
};
}  // namespace Events
}  // namespace Terra

#endif  // TERRA_EVENTS_EVENTTYPE_H_