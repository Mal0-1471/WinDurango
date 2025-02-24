#pragma once
#include "Microsoft.Xbox.GameChat.ChatUser.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatUser : ChatUserT<ChatUser>
    {
        ChatUser() = default;

        hstring XboxUserId();
        Windows::Foundation::IInspectable UniqueConsoleIdentifier();
        ChatUserTalkingMode TalkingMode();
        uint32_t NumberOfPendingAudioPacketsToPlay();
        uint32_t DynamicNeededPacketCount();
        Windows::Xbox::Chat::ChatRestriction RestrictionMode();
        Windows::Xbox::System::IUser User();
        bool IsLocal();
        bool IsLocalUserMuted();
        bool IsMuted();
        Windows::Foundation::Collections::IVectorView<uint8_t> GetAllChannels();
        void GenerateTextMessage(hstring const& message, bool allowTextToSpeechConversion);
        Windows::Xbox::Chat::ChatParticipantTypes ParticipantType();
        void ParticipantType(Windows::Xbox::Chat::ChatParticipantTypes const& val);
        float Volume();
        void Volume(float val);
        float LocalRenderTargetVolume();
        void LocalRenderTargetVolume(float val);
        bool HasRequestedTranscription();
        bool HasRequestedSynthesizedAudio();

    private:
        hstring m_xboxUserId = MAKE_HSTRING("XXXTYLERXXX");

		Windows::Foundation::IInspectable m_uniqueConsoleIdentifier = nullptr;

		ChatUserTalkingMode m_talkingMode = ChatUserTalkingMode::NotTalking;

		uint32_t m_numberOfPendingAudioPacketsToPlay = 0;
		uint32_t m_dynamicNeededPacketCount = 0;

		Windows::Xbox::Chat::ChatRestriction m_restrictionMode = Windows::Xbox::Chat::ChatRestriction::None;

		Windows::Xbox::System::IUser m_user = nullptr;

        bool m_isLocal = true;
		bool m_isLocalUserMuted = false;
		bool m_isMuted = false;

    	Windows::Foundation::Collections::IVectorView<uint8_t> m_allChannels = nullptr;

		Windows::Xbox::Chat::ChatParticipantTypes m_participantType = Windows::Xbox::Chat::ChatParticipantTypes::None;

		float m_volume = 0.0f;
		float m_localRenderTargetVolume = 0.0f;

		bool m_hasRequestedTranscription = false;
		bool m_hasRequestedSynthesizedAudio = false;
    };
}
