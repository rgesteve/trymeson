include_dir = include_directories('.')
lib_src = ['foo.c']
lib = library('my_lib', lib_src)

lib_dep = declare_dependency(
    include_directories : include_dir,
    link_with: lib
)
