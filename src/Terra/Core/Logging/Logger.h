#ifndef TERRA_CORE_LOGGING_LOGGER_H_
#define TERRA_CORE_LOGGING_LOGGER_H_

#include <spdlog/spdlog.h>

#include "Common.h"

namespace Terra {
namespace Core {
namespace Logging {
class API Logger {
   private:
    const std::shared_ptr<spdlog::logger> _logger;

   public:
    Logger();
    ~Logger();

    std::shared_ptr<spdlog::logger> Get() const;
};
}  // namespace Logging
}  // namespace Core
}  // namespace Terra

#endif  // TERRA_CORE_LOGGING_LOGGER_H_
