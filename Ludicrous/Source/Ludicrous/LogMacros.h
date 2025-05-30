#pragma once

#include "Log.h"

#define LE_CORE_TRACE(...) ::Ludicrous::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LE_CORE_INFO(...) ::Ludicrous::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LE_CORE_WARN(...) ::Ludicrous::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LE_CORE_ERROR(...) ::Ludicrous::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LE_CORE_CRITICAL(...) ::Ludicrous::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define LE_TRACE(...) ::Ludicrous::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LE_INFO(...) ::Ludicrous::Log::GetClientLogger()->info(__VA_ARGS__)
#define LE_WARN(...) ::Ludicrous::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LE_ERROR(...) ::Ludicrous::Log::GetClientLogger()->error(__VA_ARGS__)
#define LE_CRITICAL(...) ::Ludicrous::Log::GetClientLogger()->critical(__VA_ARGS__)