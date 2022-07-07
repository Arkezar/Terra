project(
    'OpenEarth 2150',
    'cpp',
    version: '0.0.1',
    license: 'MIT',
    default_options: [
        'cpp_std=c++20',
        'prefix=' + meson.source_root()
    ])

subdir('tests')
subdir('src/Terra')
subdir('src/Testbed')

run_target('format', command: [ 'ninja', 'clang-format' ])
run_target('main', command: [ 'meson', 'install' ])