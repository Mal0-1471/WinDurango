#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementProgression.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementProgression : AchievementProgressionT<AchievementProgression>
    {
        AchievementProgression() = default;

        Windows::Foundation::Collections::IVectorView<AchievementRequirement> Requirements();
        Windows::Foundation::DateTime TimeUnlocked();

    private:
		Windows::Foundation::Collections::IVector<AchievementRequirement> m_requirements = winrt::single_threaded_vector<AchievementRequirement>();
		Windows::Foundation::DateTime m_timeUnlocked{ Windows::Foundation::DateTime::clock::now() };
    };
}
