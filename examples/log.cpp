#include <iostream>
#include "spdlog/sinks/stdout_color_sinks.h"
#include "log.h"

namespace sapphire
{
    std::shared_ptr<spdlog::logger> Log::s_coreLogger;
    std::shared_ptr<spdlog::logger> Log::s_appLogger;

    void Log::init()
    {
        std::cout << "Initializing Loggers..." << std::endl;
        spdlog::set_pattern("[%H:%M:%S] [%n] [%^%l%$] %v");
        
        s_coreLogger = spdlog::stdout_color_mt("SAPPHIRE");

        s_appLogger = spdlog::stdout_color_mt("APP");

    }
}
