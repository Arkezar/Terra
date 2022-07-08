#include <Terra.h>

class Testbed : public Terra::Core::Application {
   public:
    Testbed() {
        Logger()->Get()->trace("Created Testbed");
    }

    ~Testbed() override {
        Logger()->Get()->trace("Destroyed Testbed");
    }
};

std::unique_ptr<Terra::Core::Application> CreateApplication() {
    return std::make_unique<Testbed>();
}