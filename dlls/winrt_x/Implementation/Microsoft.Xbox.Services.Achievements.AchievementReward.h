#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementReward.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementReward : AchievementRewardT<AchievementReward>
    {
        AchievementReward() = default;

        hstring Name();
        hstring Description();
        hstring Data();
        AchievementRewardType RewardType();
        Windows::Foundation::PropertyType ValuePropertyType();
        AchievementMediaAsset MediaAsset();

    private:
		hstring m_name = MAKE_HSTRING("Name");
        hstring m_description = MAKE_HSTRING("Description");
        hstring m_data = MAKE_HSTRING("Data");
		AchievementRewardType m_rewardType = AchievementRewardType::Art;
		Windows::Foundation::PropertyType m_valuePropertyType = Windows::Foundation::PropertyType::Boolean;
        AchievementMediaAsset m_mediaAsset{ nullptr };
    };
}
