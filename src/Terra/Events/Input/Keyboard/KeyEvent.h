#ifndef TERRA_EVENTS_INPUT_KEYBOARD_KEYEVENT_H_
#define TERRA_EVENTS_INPUT_KEYBOARD_KEYEVENT_H_

#include "Common.h"
#include "Events/Event.h"

namespace Terra {
namespace Events {
namespace Input {
namespace Keyboard {
class KeyEvent : public Event {
   private:
    int _keyCode;

   protected:
    explicit KeyEvent(int keyCode)
        : _keyCode(keyCode) {}

   public:
    static EventType GetStaticType() { return EventType::Undefined; }
    EventCategory GetCategory() const override { return EventCategory::Input | EventCategory::Keyboard; }
    
    inline const int GetKeyCode() const { return _keyCode; }
};
}  // namespace Keyboard
}  // namespace Input
}  // namespace Events
}  // namespace Terra

#endif