#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    ChatPerformanceTime ChatPerformanceCounters::CaptureExecutionTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_captureExecutionTime;
    }

    ChatPerformanceTime ChatPerformanceCounters::SendExecutionTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sendExecutionTime;
    }

    ChatPerformanceTime ChatPerformanceCounters::RenderExecutionTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_renderExecutionTime;
    }

    ChatPerformanceTime ChatPerformanceCounters::AudioThreadExecutionTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_audioThreadExecutionTime;
    }

    ChatPerformanceTime ChatPerformanceCounters::AudioThreadPeriodTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_audioThreadPeriodTime;
    }

    ChatPerformanceTime ChatPerformanceCounters::IncomingPacketTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_incomingPacketTime;
    }

    double ChatPerformanceCounters::IncomingPacketBandwidthBitsPerSecond()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_incomingPacketBandwidthBitsPerSecond;
    }

    double ChatPerformanceCounters::OutgoingPacketBandwidthBitsPerSecond()
    {
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_outgoingPacketBandwidthBitsPerSecond;
    }
}
