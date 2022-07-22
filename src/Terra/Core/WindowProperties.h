#ifndef TERRA_CORE_WINDOWPROPERTIES_H_
#define TERRA_CORE_WINDOWPROPERTIES_H_

#include <string>

namespace Terra {
namespace Core {
struct WindowProperties {
    std::string Title;
    int Width;
    int Height;

    explicit WindowProperties(std::string title = "Terra Engine", int width = 1600, int height = 900)
        : Title(title), Width(width), Height(height) {
    }
};
}  // namespace Core
}  // namespace Terra

#endif  // TERRA_PLATFORM_WINDOWPROPERTIES_H_