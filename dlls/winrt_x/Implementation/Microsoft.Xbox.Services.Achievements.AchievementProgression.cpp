#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementProgression.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementProgression.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    Windows::Foundation::Collections::IVectorView<AchievementRequirement> AchievementProgression::Requirements()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_requirements.GetView();
    }

    Windows::Foundation::DateTime AchievementProgression::TimeUnlocked()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_timeUnlocked;
    }
}
