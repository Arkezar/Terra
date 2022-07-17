#ifndef TERRA_EVENTS_INPUT_KEYBOARD_KEYPRESSEDEVENT_H_
#define TERRA_EVENTS_INPUT_KEYBOARD_KEYPRESSEDEVENT_H_

#include "Common.h"
#include "Events/Input/Keyboard/KeyEvent.h"

namespace Terra {
namespace Events {
namespace Input {
namespace Keyboard {
class KeyPressedEvent : public KeyEvent {
   private:
    int _repeatCount;

   public:
    KeyPressedEvent(int keyCode, int repeatCount)
        : KeyEvent(keyCode), _repeatCount(repeatCount) {}

    inline const int GetRepeatCount() const { return _repeatCount; }
    static EventType GetStaticType() { return EventType::KeyPressed; }
    EventType GetType() const override { return GetStaticType(); }

    const std::string ToString() const override {
        return fmt::format("{0}[{1},{2}]", GetName(), GetKeyCode(), GetRepeatCount());
    }
};
}  // namespace Keyboard
}  // namespace Input
}  // namespace Events
}  // namespace Terra

#endif  // TERRA_EVENTS_INPUT_KEYBOARD_KEYPRESSEDEVENT_H_