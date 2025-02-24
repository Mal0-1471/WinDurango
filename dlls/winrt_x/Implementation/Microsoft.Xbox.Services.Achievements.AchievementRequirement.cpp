#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring AchievementRequirement::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_id;
    }

    hstring AchievementRequirement::CurrentProgressValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_currentProgressValue;
    }

    hstring AchievementRequirement::TargetProgressValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_currentProgressValue;
    }
}
