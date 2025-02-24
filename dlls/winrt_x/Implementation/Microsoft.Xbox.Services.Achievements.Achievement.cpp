#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring Achievement::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_id;
    }

    hstring Achievement::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    hstring Achievement::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    Windows::Foundation::Collections::IVectorView<AchievementTitleAssociation> Achievement::TitleAssociations()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleAssociations.GetView();
    }

    AchievementProgressState Achievement::ProgressState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_progressState;
    }

    AchievementProgression Achievement::Progression()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_progression;
    }

    Windows::Foundation::Collections::IVectorView<AchievementMediaAsset> Achievement::MediaAssets()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_mediaAssets.GetView();
    }

    Windows::Foundation::Collections::IVectorView<hstring> Achievement::PlatformsAvailableOn()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_platformsAvailableOn.GetView();
    }

    bool Achievement::IsSecret()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isSecret;
    }

    hstring Achievement::UnlockedDescription()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_unlockedDescription;
    }

    hstring Achievement::LockedDescription()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_lockedDescription;
    }

    hstring Achievement::ProductId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_productId;
    }

    AchievementType Achievement::AchievementType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_achievementType;
    }

    AchievementParticipationType Achievement::ParticipationType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_participationType;
    }

    AchievementTimeWindow Achievement::Available()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_available;
    }

    Windows::Foundation::Collections::IVectorView<AchievementReward> Achievement::Rewards()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_rewards.GetView();
    }

    Windows::Foundation::TimeSpan Achievement::EstimatedUnlockTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_estimatedUnlockTime;
    }

    hstring Achievement::DeepLink()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_deepLink;
    }

    bool Achievement::IsRevoked()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isRevoked;
    }
}
