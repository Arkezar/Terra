#ifndef TERRA_EVENTS_EVENT_H_
#define TERRA_EVENTS_EVENT_H_

#include <string>
#include <typeinfo>
#include <fmt/core.h>
#include "Common.h"
#include "Events/EventType.h"
#include "Events/EventCategory.h"

namespace Terra {
namespace Events {
class API Event {
   private:
    bool _handled;

   protected:
    Event()
        : _handled(false) {}

   public:
    virtual ~Event(){};

    static EventType GetStaticType() { return EventType::Undefined; }
    virtual EventType GetType() const = 0;
    virtual EventCategory GetCategory() const = 0;

    virtual const std::string ToString() const { return fmt::format("{}", GetName()); }

    const char* GetName() const { return typeid(*this).name(); };

    inline bool InCategory(EventCategory category) { return (GetCategory() & category) == category; }
    inline bool IsHandled() { return _handled; };
    inline void SetHandled(bool handled) { _handled |= handled; }
};
}  // namespace Events
}  // namespace Terra

#endif  // TERRA_EVENTS_EVENT_H_