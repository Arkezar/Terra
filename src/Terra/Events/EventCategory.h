#ifndef TERRA_EVENTS_EVENTCATEGORY_H_
#define TERRA_EVENTS_EVENTCATEGORY_H_

#include <type_traits>

namespace Terra {
namespace Events {
enum class EventCategory : int {
    Undefined = 0,
    Application = 1 << 0,
    Input = 1 << 1,
    Keyboard = 1 << 2,
    Mouse = 1 << 3
};

EventCategory operator|(EventCategory lhs, EventCategory rhs) {
    return static_cast<EventCategory>(
            static_cast<std::underlying_type<EventCategory>::type>(lhs) |
            static_cast<std::underlying_type<EventCategory>::type>(rhs));
}

EventCategory operator&(EventCategory lhs, EventCategory rhs) {
    return static_cast<EventCategory>(
            static_cast<std::underlying_type<EventCategory>::type>(lhs) &
            static_cast<std::underlying_type<EventCategory>::type>(rhs));
}
}  // namespace Events
}  // namespace Terra

#endif  // TERRA_EVENTS_EVENTCATEGORY_H_