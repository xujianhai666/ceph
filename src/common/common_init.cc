
#include "config.h"
#include "tls.h"

void common_init(std::vector<const char*>& args, bool open)
{
  tls_init();
  tls_get_val()->disable_assert = 0;
  parse_config_options(args, open);
}

