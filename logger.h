#ifndef SIMPLE_LOGGER_H
#define SIMPLE_LOGGER_H

#include <string.h>

// to make shorter names in debug log, (for Windows - \\, for linux/mac - /)
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)

// dont forget to include <iostream>
// you can use it like this "debuglog("Hello " << user->name)"
#define debuglog(message) std::cout << __FILENAME__ << "::" << __LINE__ \
<< "::" << __FUNCTION__ << ":: " << message << std::endl

#endif  // SIMPLE_LOGGER_H
