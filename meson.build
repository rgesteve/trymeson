project('trymeson', 'c')

cc = meson.get_compiler('c')
message('***** Trying a message from meson')

config_h = configuration_data()

git = find_program('git', required : false)
if git.found()
  res = run_command(['git', 'describe', '--tags', '--always'], capture : true, check : false)
  describe = res.stdout().strip()
  config_h.set_quoted('TRYMESON_VCS_TAG', describe)
endif

config_h.set_quoted('TRYMESON_VERSION', meson.project_version())
# config_h.set_quoted('TRYMESON_LIBEXEC', get_option('prefix') / get_option('libexecdir'))

configure_file(
  output: 'trymeson-config.h',
  configuration: config_h,
)

#lib = subdir('lib')
subdir('lib')

executable('main', 'main.c', dependencies : lib_dep)
#executable('main', ['main.c'])