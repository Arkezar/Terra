#ifndef TERRA_CORE_ENTRYPOINT_H_
#define TERRA_CORE_ENTRYPOINT_H_

#include "Core/Application.h"

extern std::unique_ptr<Terra::Core::Application> CreateApplication();

int main(int argc, char** argv) {
    CreateApplication()->Run();
}

#endif  // TERRA_CORE_ENTRYPOINT_H_