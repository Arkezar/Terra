spdlog = dependency('spdlog')
vulkan = dependency('vulkan')

dependencies = [ spdlog, vulkan ]
if(host_machine.system() == 'linux')
    dependencies += dependency('x11')
    dependencies += dependency('xcb')
    dependencies += dependency('x11-xcb')
endif

engine_sources = [
    'Core/Application.cpp',
    'Core/Logging/Logger.cpp'
    ]
engine_includes = include_directories('.')
enginelib = shared_library('engine', engine_sources, dependencies: dependencies, install: true, cpp_args: '-DEXPORT_API')