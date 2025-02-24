#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementMediaAsset.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementMediaAsset : AchievementMediaAssetT<AchievementMediaAsset>
    {
        AchievementMediaAsset() = default;

        hstring Name();
        AchievementMediaAssetType MediaAssetType();
        hstring Url();

    private:
		hstring m_name = MAKE_HSTRING("Achievement Media Name");
        AchievementMediaAssetType m_mediaAssetType = AchievementMediaAssetType::Art;
		hstring m_url = MAKE_HSTRING("https://www.example.com");
    };
}
