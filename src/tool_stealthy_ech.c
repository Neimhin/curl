#include "tool_stealthy_ech.h"
sech_version_t sech_version(const char *arg) {
  if(arg[0] == '1' && arg[1] == '\0') {
    return SECH_VERSION_1;
  }
  return SECH_VERSION_INVALID;
}

