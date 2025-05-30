#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Ludicrous
{
	enum class ELogSeverity
	{
		Trace,
		Info,
		Warn,
		Error
	};

	class LUDICROUS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return S_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return S_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> S_CoreLogger;
		static std::shared_ptr<spdlog::logger> S_ClientLogger;
	};
}