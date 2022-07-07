#include <Terra.h>

class Testbed : public Terra::Core::Application {
   public:
    Testbed() {
    }

    ~Testbed() override {
    }
};

std::unique_ptr<Terra::Core::Application> CreateApplication() {
    return std::make_unique<Testbed>();
}