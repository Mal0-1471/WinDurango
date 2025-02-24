#pragma once
#include "Microsoft.Xbox.Services.Achievements.Achievement.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct Achievement : AchievementT<Achievement>
    {
        Achievement() = default;

        hstring Id();
        hstring ServiceConfigurationId();
        hstring Name();
        Windows::Foundation::Collections::IVectorView<AchievementTitleAssociation> TitleAssociations();
        AchievementProgressState ProgressState();
        AchievementProgression Progression();
        Windows::Foundation::Collections::IVectorView<AchievementMediaAsset> MediaAssets();
        Windows::Foundation::Collections::IVectorView<hstring> PlatformsAvailableOn();
        bool IsSecret();
        hstring UnlockedDescription();
        hstring LockedDescription();
        hstring ProductId();
        AchievementType AchievementType();
        AchievementParticipationType ParticipationType();
        AchievementTimeWindow Available();
        Windows::Foundation::Collections::IVectorView<AchievementReward> Rewards();
        Windows::Foundation::TimeSpan EstimatedUnlockTime();
        hstring DeepLink();
        bool IsRevoked();

    private:
		hstring m_id = MAKE_HSTRING("Id");
		hstring m_serviceConfigurationId = MAKE_HSTRING("ServiceConfigurationId");
		hstring m_name = MAKE_HSTRING("Achievement Name");
		Windows::Foundation::Collections::IVector<AchievementTitleAssociation> m_titleAssociations = single_threaded_vector<AchievementTitleAssociation>();
		AchievementProgressState m_progressState = AchievementProgressState::Unknown;
		AchievementProgression m_progression = nullptr;
		Windows::Foundation::Collections::IVector<AchievementMediaAsset> m_mediaAssets = single_threaded_vector<AchievementMediaAsset>();
		Windows::Foundation::Collections::IVector<hstring> m_platformsAvailableOn = single_threaded_vector<hstring>();
		bool m_isSecret = false;
		hstring m_unlockedDescription = MAKE_HSTRING("Unlocked Description");
		hstring m_lockedDescription = MAKE_HSTRING("Locked Description");
		hstring m_productId = MAKE_HSTRING("Product Id");
        Achievements::AchievementType m_achievementType = AchievementType::Unknown;
		AchievementParticipationType m_participationType = AchievementParticipationType::Unknown;
        AchievementTimeWindow m_available = nullptr;
		Windows::Foundation::Collections::IVector<AchievementReward> m_rewards = single_threaded_vector<AchievementReward>();
		Windows::Foundation::TimeSpan m_estimatedUnlockTime = Windows::Foundation::TimeSpan{};
		hstring m_deepLink = MAKE_HSTRING("Deep Link");
		bool m_isRevoked = false;
    };
}