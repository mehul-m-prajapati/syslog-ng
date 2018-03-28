#ifndef HOOK_COMMANDS_H_INLCUDED
#define HOOK_COMMANDS_H_INLCUDED 1

#include "driver.h"

typedef struct _HookCommandsPlugin
{
  LogDriverPlugin super;
  gchar *setup;
  gchar *teardown;
  gboolean (*saved_init)(LogPipe *s);
  gboolean (*saved_deinit)(LogPipe *s);
} HookCommandsPlugin;

void hook_commands_plugin_set_setup(HookCommandsPlugin *s, const gchar *command);
void hook_commands_plugin_set_teardown(HookCommandsPlugin *s, const gchar *command);
HookCommandsPlugin *hook_commands_plugin_new(void);

#endif
