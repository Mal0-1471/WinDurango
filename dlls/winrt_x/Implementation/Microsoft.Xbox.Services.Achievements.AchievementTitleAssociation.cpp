#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTitleAssociation.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTitleAssociation.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring AchievementTitleAssociation::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    uint32_t AchievementTitleAssociation::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }
}
