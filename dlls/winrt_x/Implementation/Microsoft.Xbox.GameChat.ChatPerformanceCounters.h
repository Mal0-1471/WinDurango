// ReSharper disable CppInconsistentNaming
#pragma once
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatPerformanceCounters : ChatPerformanceCountersT<ChatPerformanceCounters>
    {
        ChatPerformanceCounters() = default;

        ChatPerformanceTime CaptureExecutionTime();
        ChatPerformanceTime SendExecutionTime();
        ChatPerformanceTime RenderExecutionTime();
        ChatPerformanceTime AudioThreadExecutionTime();
        ChatPerformanceTime AudioThreadPeriodTime();
        ChatPerformanceTime IncomingPacketTime();
        double IncomingPacketBandwidthBitsPerSecond();
        double OutgoingPacketBandwidthBitsPerSecond();

	private:
        ChatPerformanceTime m_captureExecutionTime{ 0 };
        ChatPerformanceTime m_sendExecutionTime{ 0 };
        ChatPerformanceTime m_renderExecutionTime{ 0 };
        ChatPerformanceTime m_audioThreadExecutionTime{ 0 };
        ChatPerformanceTime m_audioThreadPeriodTime{ 0 };
        ChatPerformanceTime m_incomingPacketTime{ 0 };

		double m_incomingPacketBandwidthBitsPerSecond{ 0 };
		double m_outgoingPacketBandwidthBitsPerSecond{ 0 };
    };
}