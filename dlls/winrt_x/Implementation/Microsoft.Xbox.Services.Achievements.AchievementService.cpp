#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementService.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    Windows::Foundation::IAsyncAction AchievementService::UpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::IAsyncAction AchievementService::UpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::IAsyncOperation<int32_t> AchievementService::TryUpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::IAsyncOperation<int32_t> AchievementService::TryUpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::IAsyncOperation<AchievementsResult> AchievementService::GetAchievementsForTitleIdAsync(hstring xboxUserId, uint32_t titleId, AchievementType type, bool unlockedOnly, AchievementOrderBy orderBy, uint32_t skipItems, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::IAsyncOperation<Achievement> AchievementService::GetAchievementAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring achievementId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}
