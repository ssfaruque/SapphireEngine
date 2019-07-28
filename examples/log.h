#ifndef LOG_H
#define LOG_H

#include <memory>

#include "spdlog/spdlog.h"

namespace sapphire
{
    class Log
    {
        private:
            static std::shared_ptr<spdlog::logger> s_coreLogger;
            static std::shared_ptr<spdlog::logger> s_appLogger;

        public:
            static void init();
            inline static std::shared_ptr<spdlog::logger>& getCoreLogger()
            {return s_coreLogger;}
            inline static std::shared_ptr<spdlog::logger>& getAppLogger()
            {return s_appLogger;}

    };
}


#define LOG_CORE_INFO(...)  sapphire::Log::getCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_WARN(...)  sapphire::Log::getCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_ERROR(...) sapphire::Log::getCoreLogger()->error(__VA_ARGS__)

#define LOG_APP_INFO(...)   sapphire::Log::getAppLogger()->info(__VA_ARGS__)
#define LOG_APP_WARN(...)   sapphire::Log::getAppLogger()->warn(__VA_ARGS__)
#define LOG_APP_ERROR(...)  sapphire::Log::getAppLogger()->error(__VA_ARGS__)

#endif  // LOG_H
