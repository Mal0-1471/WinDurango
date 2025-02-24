#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    Windows::Foundation::DateTime AchievementTimeWindow::StartDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_startDate;
    }

    Windows::Foundation::DateTime AchievementTimeWindow::EndDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_endDate;
    }
}
