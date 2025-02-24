#pragma once
#include "Microsoft.Xbox.GameChat.ChatPerformanceTime.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatPerformanceTime : ChatPerformanceTimeT<ChatPerformanceTime>
    {
        ChatPerformanceTime() = default;

        double MinTimeInMilliseconds();
        double MaxTimeInMilliseconds();
        double AverageTimeInMilliseconds();

    private:
		double m_minTimeInMilliseconds{ 0.0 };
		double m_maxTimeInMilliseconds{ 0.0 };
		double m_averageTimeInMilliseconds{ 0.0 };
    };
}
