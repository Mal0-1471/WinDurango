#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementsResult.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementsResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    Windows::Foundation::Collections::IVectorView<Achievement> AchievementsResult::Items()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_items.GetView();
    }

    Windows::Foundation::IAsyncOperation<Achievements::AchievementsResult> AchievementsResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    bool AchievementsResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}
