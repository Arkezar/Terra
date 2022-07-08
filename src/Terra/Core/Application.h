#ifndef TERRA_CORE_APPLICATION_H_
#define TERRA_CORE_APPLICATION_H_

#include <memory>

#include "Common.h"
#include "Core/Logging/Logger.h"

namespace Terra {
namespace Core {
class API Application {
   private:
    const std::shared_ptr<Terra::Core::Logging::Logger> _logger;

   public:
    Application();
    virtual ~Application();

    void Run();
    std::shared_ptr<Terra::Core::Logging::Logger> Logger() const;
};
}  // namespace Core
}  // namespace Terra

#endif  // TERRA_CORE_APPLICATION_H_