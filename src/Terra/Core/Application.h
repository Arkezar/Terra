#ifndef TERRA_CORE_APPLICATION_H_
#define TERRA_CORE_APPLICATION_H_

#include "Common.h"

namespace Terra {
namespace Core {
class API Application {
   public:
    Application();
    virtual ~Application();

    void Run();
};
}  // namespace Core
}  // namespace Terra

#endif  // TERRA_CORE_APPLICATION_H_