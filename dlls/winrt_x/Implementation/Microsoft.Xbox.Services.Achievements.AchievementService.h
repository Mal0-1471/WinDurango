#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementService.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementService : AchievementServiceT<AchievementService>
    {
        AchievementService() = default;

        Windows::Foundation::IAsyncAction UpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete);
        Windows::Foundation::IAsyncAction UpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete);
        Windows::Foundation::IAsyncOperation<int32_t> TryUpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete);
        Windows::Foundation::IAsyncOperation<int32_t> TryUpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete);
        Windows::Foundation::IAsyncOperation<AchievementsResult> GetAchievementsForTitleIdAsync(hstring xboxUserId, uint32_t titleId, AchievementType type, bool unlockedOnly, AchievementOrderBy orderBy, uint32_t skipItems, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<Achievement> GetAchievementAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring achievementId);
    };
}
