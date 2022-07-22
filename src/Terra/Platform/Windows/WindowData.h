#ifndef TERRA_PLATFORM_WINDOWS_WINDOWDATA_H_
#define TERRA_PLATFORM_WINDOWS_WINDOWDATA_H_

#include <functional>
#include <string>

#include "Events/Event.h"

namespace Terra {
namespace Platform {
namespace Windows {
struct WindowData {
    std::string Title;
    int Width;
    int Height;

    std::function<void(Terra::Events::Event&)> EventCallback;
};
}  // namespace Windows
}  // namespace Platform
}  // namespace Terra

#endif
