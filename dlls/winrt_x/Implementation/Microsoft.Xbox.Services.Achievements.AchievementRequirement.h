#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementRequirement : AchievementRequirementT<AchievementRequirement>
    {
        AchievementRequirement() = default;

        hstring Id();
        hstring CurrentProgressValue();
        hstring TargetProgressValue();

    private:
		hstring m_id = MAKE_HSTRING("0");
		hstring m_currentProgressValue = MAKE_HSTRING("1.0");
		hstring m_targetProgressValue = MAKE_HSTRING("1.0");
    };
}
