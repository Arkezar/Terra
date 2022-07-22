fmt = dependency('fmt', include_type: 'non-system')
spdlog = dependency('spdlog')
vulkan = dependency('vulkan')

terra_dependencies = [ fmt, spdlog, vulkan ]
if(host_machine.system() == 'linux')
    terra_dependencies += dependency('x11')
    terra_dependencies += dependency('xcb')
    terra_dependencies += dependency('x11-xcb')
endif

engine_sources = [
    'Core/Logging/Logger.cpp',
    'Core/Application.cpp',
    'Core/Window.cpp',
    'Events/EventHub.cpp',
    'Platform/Windows/Window.cpp'
    ]
engine_includes = include_directories('.')
enginelib = shared_library('engine', engine_sources, dependencies: terra_dependencies, install: true, cpp_args: '-DEXPORT_API')