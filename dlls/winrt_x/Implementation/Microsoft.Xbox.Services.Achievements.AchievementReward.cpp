#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementReward.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementReward.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring AchievementReward::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    hstring AchievementReward::Description()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_description;
    }

    hstring AchievementReward::Data()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_data;
    }

    AchievementRewardType AchievementReward::RewardType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_rewardType;
    }

    Windows::Foundation::PropertyType AchievementReward::ValuePropertyType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_valuePropertyType;
    }

    AchievementMediaAsset AchievementReward::MediaAsset()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_mediaAsset;
    }
}
