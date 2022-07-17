project(
    'Terra',
    'cpp',
    version: '0.0.1',
    license: 'MIT',
    default_options: [
        'cpp_std=c++20',
        'prefix=' + meson.source_root()
    ])
    
subdir('src/Terra')
subdir('src/Testbed')
subdir('tests')

run_target('main', command: [ 'meson', 'install' ])