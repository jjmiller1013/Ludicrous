
#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Ludicrous
{
	std::shared_ptr<spdlog::logger> Log::S_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::S_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		S_CoreLogger = spdlog::stdout_color_mt("Ludicrous");
		S_CoreLogger->set_level(spdlog::level::trace);

		S_ClientLogger = spdlog::stdout_color_mt("App");
		S_ClientLogger->set_level(spdlog::level::trace);
	}
}