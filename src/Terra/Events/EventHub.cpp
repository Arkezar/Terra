#include "Events/EventHub.h"

#include "Events/EventDispatcher.h"
#include "Events/Application/WindowResizeEvent.h"
#include "Events/Input/Keyboard/KeyPressedEvent.h"
#include "Events/Input/Keyboard/KeyReleasedEvent.h"

namespace Terra {
namespace Events {
EventHub::EventHub() {
}


EventHub::~EventHub() {
}
}  // namespace Events
}  // namespace Terra