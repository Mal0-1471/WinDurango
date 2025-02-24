#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceTime.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceTime.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    double ChatPerformanceTime::MinTimeInMilliseconds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_minTimeInMilliseconds;
    }

    double ChatPerformanceTime::MaxTimeInMilliseconds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_maxTimeInMilliseconds;
    }

    double ChatPerformanceTime::AverageTimeInMilliseconds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_averageTimeInMilliseconds;
    }
}