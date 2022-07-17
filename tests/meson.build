catch2 = dependency('catch2')

test_sources = [
    'Terra/Tests.cpp',
    'Terra/EventTests.cpp'
]

executable('Tests', test_sources, link_with : [enginelib], include_directories: engine_includes, dependencies: terra_dependencies + catch2)