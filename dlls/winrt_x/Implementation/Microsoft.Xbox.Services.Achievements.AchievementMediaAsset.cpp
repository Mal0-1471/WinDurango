#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementMediaAsset.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementMediaAsset.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring AchievementMediaAsset::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    AchievementMediaAssetType AchievementMediaAsset::MediaAssetType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_mediaAssetType;
    }

    hstring AchievementMediaAsset::Url()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_url;
    }
}
