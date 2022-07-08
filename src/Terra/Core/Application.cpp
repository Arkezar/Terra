#include "Core/Application.h"

namespace Terra {
namespace Core {
Application::Application()
    : _logger(std::make_shared<Terra::Core::Logging::Logger>()) {
    Logger()->Get()->trace("Created Application");
}

Application::~Application() {
    Logger()->Get()->trace("Destroyed Application");
}

void Application::Run() {
    Logger()->Get()->trace("Started Application");
}

std::shared_ptr<Terra::Core::Logging::Logger> Application::Logger() const {
    return _logger;
}
}  // namespace Core
}  // namespace Terra