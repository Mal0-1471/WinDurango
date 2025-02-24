// ReSharper disable CppClangTidyHicppExceptionBaseclass
// ReSharper disable CppClangTidyPerformanceUnnecessaryValueParam
#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatManager.h"
#include "Microsoft.Xbox.GameChat.ChatManager.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	ChatManager::ChatManager(ChatSessionPeriod const& chatSessionPeriod)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_chatSessionPeriod = chatSessionPeriod;
	}

	ChatManager::ChatManager(ChatSessionPeriod const& chatSessionPeriod, bool titleEnforcedPrivilegeAndPrivacy)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_chatSessionPeriod = chatSessionPeriod;
		m_titleEnforcedPrivilegeAndPrivacy = titleEnforcedPrivilegeAndPrivacy;
	}

	ChatManager::ChatManager(ChatSessionPeriod const& chatSessionPeriod, PrivilegeAndPrivacyEnforcementMode const& privilegeAndPrivacyEnforcementMode, TextConversionMode const& textConversionMode)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_chatSessionPeriod = chatSessionPeriod;
		m_privilegeAndPrivacyEnforcementMode = privilegeAndPrivacyEnforcementMode;
		m_textConversionMode = textConversionMode;
	}

	GameChat::ChatManagerSettings ChatManager::ChatSettings()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnDebugMessage(Windows::Foundation::EventHandler<DebugMessageEventArgs> const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnDebugMessage(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnOutgoingChatPacketReady(Windows::Foundation::EventHandler<ChatPacketEventArgs> const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnOutgoingChatPacketReady(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnCompareUniqueConsoleIdentifiers(CompareUniqueConsoleIdentifiersHandler const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnCompareUniqueConsoleIdentifiers(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnUserAddedToChannel(Windows::Foundation::EventHandler<ChannelUpdatedEventArgs> const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnUserAddedToChannel(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnUserRemovedFromChannel(Windows::Foundation::EventHandler<ChannelUpdatedEventArgs> const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnUserRemovedFromChannel(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnPreEncodeAudioBuffer(ProcessAudioBufferHandler const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnPreEncodeAudioBuffer(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnPostDecodeAudioBuffer(ProcessAudioBufferHandler const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnPostDecodeAudioBuffer(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnTextMessageReceived(Windows::Foundation::EventHandler<TextMessageReceivedEventArgs> const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnTextMessageReceived(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	event_token ChatManager::OnAccessibilitySettingsChanged(Windows::Foundation::EventHandler<AccessibilitySettingsChangedEventArgs> const& __param0)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return {};
	}

	void ChatManager::OnAccessibilitySettingsChanged(event_token const& __param0) noexcept
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	ChatMessageType ChatManager::ProcessIncomingChatMessage(Windows::Storage::Streams::IBuffer const& chatPacket, Windows::Foundation::IInspectable const& uniqueRemoteConsoleIdentifier)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	void ChatManager::HandleNewRemoteConsole(Windows::Foundation::IInspectable const& uniqueRemoteConsoleIdentifier)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Windows::Foundation::IAsyncAction ChatManager::AddLocalUserToChatChannelAsync(uint8_t channelIndex, Windows::Xbox::System::IUser user)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Windows::Foundation::IAsyncAction ChatManager::AddLocalUsersToChatChannelAsync(uint8_t channelIndex, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> users)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Windows::Foundation::IAsyncAction ChatManager::RemoveLocalUserFromChatChannelAsync(uint8_t channelIndex, Windows::Xbox::System::IUser user)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		co_return;
	}

	Windows::Foundation::IAsyncAction ChatManager::RemoveRemoteConsoleAsync(Windows::Foundation::IInspectable uniqueRemoteConsoleIdentifier)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Windows::Foundation::Collections::IVectorView<ChatUser> ChatManager::GetChatUsers()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return winrt::single_threaded_vector<ChatUser>().GetView();
	}

	void ChatManager::MuteUserFromAllChannels(ChatUser const& user)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	void ChatManager::UnmuteUserFromAllChannels(ChatUser const& user)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	void ChatManager::MuteAllUsersFromAllChannels()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	void ChatManager::UnmuteAllUsersFromAllChannels()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Windows::Foundation::IAsyncAction ChatManager::MuteUserIfReputationIsBadAsync(ChatUser user)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	bool ChatManager::HasMicFocus()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hasMicFocus;
	}

	ChatPerformanceCounters ChatManager::ChatPerformanceCounters()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

}
