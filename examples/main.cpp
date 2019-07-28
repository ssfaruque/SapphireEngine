#include <iostream>
#include "log.h"

int main(int argc, char* argv[])
{
    sapphire::Log::init();

    LOG_CORE_INFO("Test log info");

    return 0;
}
