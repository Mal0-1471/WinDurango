#pragma once
#include "Microsoft.Xbox.GameChat.ChatManager.g.h"
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	struct ChatManager : ChatManagerT<ChatManager>
	{
		ChatManager() = default;

		ChatManager(ChatSessionPeriod const& chatSessionPeriod);
		ChatManager(ChatSessionPeriod const& chatSessionPeriod, bool titleEnforcedPrivilegeAndPrivacy);
		ChatManager(ChatSessionPeriod const& chatSessionPeriod, PrivilegeAndPrivacyEnforcementMode const& privilegeAndPrivacyEnforcementMode, TextConversionMode const& textConversionMode);
		GameChat::ChatManagerSettings ChatSettings();
		event_token OnDebugMessage(Windows::Foundation::EventHandler<DebugMessageEventArgs> const& __param0);
		void OnDebugMessage(event_token const& __param0) noexcept;
		event_token OnOutgoingChatPacketReady(Windows::Foundation::EventHandler<ChatPacketEventArgs> const& __param0);
		void OnOutgoingChatPacketReady(event_token const& __param0) noexcept;
		event_token OnCompareUniqueConsoleIdentifiers(CompareUniqueConsoleIdentifiersHandler const& __param0);
		void OnCompareUniqueConsoleIdentifiers(event_token const& __param0) noexcept;
		event_token OnUserAddedToChannel(Windows::Foundation::EventHandler<ChannelUpdatedEventArgs> const& __param0);
		void OnUserAddedToChannel(event_token const& __param0) noexcept;
		event_token OnUserRemovedFromChannel(Windows::Foundation::EventHandler<ChannelUpdatedEventArgs> const& __param0);
		void OnUserRemovedFromChannel(event_token const& __param0) noexcept;
		event_token OnPreEncodeAudioBuffer(ProcessAudioBufferHandler const& __param0);
		void OnPreEncodeAudioBuffer(event_token const& __param0) noexcept;
		event_token OnPostDecodeAudioBuffer(ProcessAudioBufferHandler const& __param0);
		void OnPostDecodeAudioBuffer(event_token const& __param0) noexcept;
		event_token OnTextMessageReceived(Windows::Foundation::EventHandler<TextMessageReceivedEventArgs> const& __param0);
		void OnTextMessageReceived(event_token const& __param0) noexcept;
		event_token OnAccessibilitySettingsChanged(Windows::Foundation::EventHandler<AccessibilitySettingsChangedEventArgs> const& __param0);
		void OnAccessibilitySettingsChanged(event_token const& __param0) noexcept;
		ChatMessageType ProcessIncomingChatMessage(Windows::Storage::Streams::IBuffer const& chatPacket, Windows::Foundation::IInspectable const& uniqueRemoteConsoleIdentifier);
		void HandleNewRemoteConsole(Windows::Foundation::IInspectable const& uniqueRemoteConsoleIdentifier);
		Windows::Foundation::IAsyncAction AddLocalUserToChatChannelAsync(uint8_t channelIndex, Windows::Xbox::System::IUser user);
		Windows::Foundation::IAsyncAction AddLocalUsersToChatChannelAsync(uint8_t channelIndex, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> users);
		Windows::Foundation::IAsyncAction RemoveLocalUserFromChatChannelAsync(uint8_t channelIndex, Windows::Xbox::System::IUser user);
		Windows::Foundation::IAsyncAction RemoveRemoteConsoleAsync(Windows::Foundation::IInspectable uniqueRemoteConsoleIdentifier);
		Windows::Foundation::Collections::IVectorView<ChatUser> GetChatUsers();
		void MuteUserFromAllChannels(ChatUser const& user);
		void UnmuteUserFromAllChannels(ChatUser const& user);
		void MuteAllUsersFromAllChannels();
		void UnmuteAllUsersFromAllChannels();
		Windows::Foundation::IAsyncAction MuteUserIfReputationIsBadAsync(ChatUser user);
		bool HasMicFocus();
		ChatPerformanceCounters ChatPerformanceCounters();

	private:
		ChatSessionPeriod m_chatSessionPeriod = ChatSessionPeriod::ChatPeriodOf20Milliseconds;

		bool m_titleEnforcedPrivilegeAndPrivacy = false;

		PrivilegeAndPrivacyEnforcementMode m_privilegeAndPrivacyEnforcementMode = PrivilegeAndPrivacyEnforcementMode::TitleResponsible;
		TextConversionMode m_textConversionMode = TextConversionMode::TitleResponsible;

		bool m_hasMicFocus = false;
	};
}
namespace winrt::Microsoft::Xbox::GameChat::factory_implementation
{
	struct ChatManager : ChatManagerT<ChatManager, implementation::ChatManager>
	{
	};
}