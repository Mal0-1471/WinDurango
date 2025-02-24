#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementsResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementsResult : AchievementsResultT<AchievementsResult>
    {
        AchievementsResult() = default;

        Windows::Foundation::Collections::IVectorView<Achievement> Items();
        Windows::Foundation::IAsyncOperation<Achievements::AchievementsResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();

    private:
		Windows::Foundation::Collections::IVector<Achievement> m_items = winrt::single_threaded_vector<Achievement>();
    };
}
