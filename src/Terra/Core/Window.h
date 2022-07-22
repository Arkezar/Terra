#ifndef TERRA_CORE_WINDOW_H_
#define TERRA_CORE_WINDOW_H_

#include <functional>
#include "Events/Event.h"
#include "Core/WindowProperties.h"

namespace Terra {
namespace Core {
class Window {
   public:
    virtual ~Window() = default;

    virtual void Update() = 0;

    virtual int GetWidth() const = 0;
    virtual int GetHeight() const = 0;

    virtual void SetEventCallback(std::function<void(Terra::Events::Event&)> callback) = 0;

    static std::unique_ptr<Window> Create(const WindowProperties& properties = WindowProperties());
};
}  // namespace Core
}  // namespace Terra

#endif  // TERRA_PLATFORM_WINDOW_H_