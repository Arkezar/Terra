#ifndef TERRA_EVENTS_EVENTDISPATCHER_H_H
#define TERRA_EVENTS_EVENTDISPATCHER_H_H

#include <functional>

#include "Common.h"
#include "Events/Event.h"

namespace Terra {
namespace Events {

template <class T>
concept DerivesEvent = std::is_base_of<Event, T>::value;

class EventDispatcher {
   private:
    Event& _event;

   public:
    explicit EventDispatcher(Event& event)
        : _event(event) {}

    template <DerivesEvent T>
    bool Dispatch(std::function<bool(T&)> func) {
        if (_event.GetType() == T::GetStaticType()) {
            _event.SetHandled(func(static_cast<T&>(_event)));
            return true;
        }
        return false;
    }
};
}  // namespace Events
}  // namespace Terra

#endif  // TERRA_EVENTS_EVENTDISPATCHER_H_H