#ifndef TERRA_PLATFORM_WINDOWS_WINDOW_H_
#define TERRA_PLATFORM_WINDOWS_WINDOW_H_

#include "Core/Window.h"

namespace Terra {
namespace Platform {
namespace Windows {
class Window : public Terra::Core::Window {
   public:
    explicit Window(const Terra::Core::WindowProperties& properties);
    ~Window() override;

    void Update() override;

    int GetWidth() const override;
    int GetHeight() const override;

    void SetEventCallback(std::function<void(Terra::Events::Event&)> callback) override;

   private:
    void Initialize(const Terra::Core::WindowProperties& properties);
    void Shutdown();
};
}  // namespace Windows
}  // namespace Platform
}  // namespace Terra

#endif  // TERRA_PLATFORM_WINDOWS_WINDOW_H_