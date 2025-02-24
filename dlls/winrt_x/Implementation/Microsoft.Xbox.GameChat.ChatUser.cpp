#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatUser.h"
#include "Microsoft.Xbox.GameChat.ChatUser.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring ChatUser::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    Windows::Foundation::IInspectable ChatUser::UniqueConsoleIdentifier()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_uniqueConsoleIdentifier;
    }

    ChatUserTalkingMode ChatUser::TalkingMode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_talkingMode;
    }

    uint32_t ChatUser::NumberOfPendingAudioPacketsToPlay()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_numberOfPendingAudioPacketsToPlay;
    }

    uint32_t ChatUser::DynamicNeededPacketCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_dynamicNeededPacketCount;
    }

    Windows::Xbox::Chat::ChatRestriction ChatUser::RestrictionMode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_restrictionMode;
    }

    Windows::Xbox::System::IUser ChatUser::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return nullptr;
    }

    bool ChatUser::IsLocal()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isLocal;
    }

    bool ChatUser::IsLocalUserMuted()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isLocalUserMuted;
    }

    bool ChatUser::IsMuted()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isMuted;
    }

    Windows::Foundation::Collections::IVectorView<uint8_t> ChatUser::GetAllChannels()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_allChannels;
    }

    void ChatUser::GenerateTextMessage(hstring const& message, bool allowTextToSpeechConversion)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        // TODO: I don't know what to do here probably something for sure.

        throw hresult_not_implemented();
    }

    Windows::Xbox::Chat::ChatParticipantTypes ChatUser::ParticipantType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_participantType;
    }

    void ChatUser::ParticipantType(Windows::Xbox::Chat::ChatParticipantTypes const& val)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_participantType = val;
    }

    float ChatUser::Volume()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_volume;
    }

    void ChatUser::Volume(float val)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_volume = val;
    }

    float ChatUser::LocalRenderTargetVolume()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_localRenderTargetVolume;
    }

    void ChatUser::LocalRenderTargetVolume(float val)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_localRenderTargetVolume = val;
    }

    bool ChatUser::HasRequestedTranscription()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hasRequestedTranscription;
    }

    bool ChatUser::HasRequestedSynthesizedAudio()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hasRequestedSynthesizedAudio;
    }
}
