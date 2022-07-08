#include "Core/Logging/Logger.h"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace Terra {
namespace Core {
namespace Logging {
Logger::Logger()
    : _logger(spdlog::stdout_color_mt("Terra")) {
    _logger->set_pattern("[%H:%M:%S %z] [%^%=8l%$] [thread %t] %v");
    _logger->set_level(spdlog::level::trace);
    _logger->trace("Logger created");
}

Logger::~Logger() {
    _logger->trace("Logger destroyed");
}

std::shared_ptr<spdlog::logger> Logger::Get() const {
    return _logger;
}
}  // namespace Logging
}  // namespace Core
}  // namespace Terra
