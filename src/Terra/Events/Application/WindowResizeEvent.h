#ifndef TERRA_EVENTS_WINDOWRESIZEEVENT_H_
#define TERRA_EVENTS_WINDOWRESIZEEVENT_H_

#include "Events/Event.h"

namespace Terra {
namespace Events {
namespace Application {
class API WindowResizeEvent : public Event {
   private:
    unsigned int _width;
    unsigned int _height;

   public:
    WindowResizeEvent(unsigned int width, unsigned int height)
        : _width(width), _height(height) {}

    static EventType GetStaticType() { return EventType::WindowResize; }
    EventType GetType() const override { return GetStaticType(); }
    EventCategory GetCategory() const override { return EventCategory::Application; }

    const std::string ToString() const override {
        return fmt::format("{0}[{1},{2}]", GetName(), GetWidth(), GetHeight());
    }

    inline unsigned int GetWidth() const { return _width; }
    inline unsigned int GetHeight() const { return _height; }
};
}  // namespace Application
}  // namespace Events
}  // namespace Terra

#endif