#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementTimeWindow : AchievementTimeWindowT<AchievementTimeWindow>
    {
        AchievementTimeWindow() = default;

        Windows::Foundation::DateTime StartDate();
        Windows::Foundation::DateTime EndDate();

    private:
        Windows::Foundation::DateTime m_startDate{};
		Windows::Foundation::DateTime m_endDate{};
    };
}
