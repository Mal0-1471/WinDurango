#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.h"
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	uint32_t ChatManagerSettings::AudioThreadPeriodInMilliseconds()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_AudioThreadPeriodInMilliseconds;
	}

	void ChatManagerSettings::AudioThreadPeriodInMilliseconds(uint32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_AudioThreadPeriodInMilliseconds = value;
	}

	uint32_t ChatManagerSettings::AudioThreadAffinityMask()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_AudioThreadAffinityMask;
	}

	void ChatManagerSettings::AudioThreadAffinityMask(uint32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_AudioThreadAffinityMask = value;
	}

	int32_t ChatManagerSettings::AudioThreadPriority()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_AudioThreadPriority;
	}

	void ChatManagerSettings::AudioThreadPriority(int32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_AudioThreadPriority = value;
	}

	Windows::Xbox::Chat::EncodingQuality ChatManagerSettings::AudioEncodingQuality()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_AudioEncodingQuality;
	}

	void ChatManagerSettings::AudioEncodingQuality(Windows::Xbox::Chat::EncodingQuality const& value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_AudioEncodingQuality = value;
	}

	uint32_t ChatManagerSettings::JitterBufferMaxPackets()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_JitterBufferMaxPackets;
	}

	void ChatManagerSettings::JitterBufferMaxPackets(uint32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_JitterBufferMaxPackets = value;
	}

	uint32_t ChatManagerSettings::JitterBufferLowestNeededPacketCount()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_JitterBufferLowestNeededPacketCount;
	}

	void ChatManagerSettings::JitterBufferLowestNeededPacketCount(uint32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_JitterBufferLowestNeededPacketCount = value;
	}

	uint32_t ChatManagerSettings::JitterBufferPacketsBeforeRelaxingNeeded()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_JitterBufferPacketsBeforeRelaxingNeeded;
	}

	void ChatManagerSettings::JitterBufferPacketsBeforeRelaxingNeeded(uint32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_JitterBufferPacketsBeforeRelaxingNeeded = value;
	}

	bool ChatManagerSettings::PerformanceCountersEnabled()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_PerformanceCountersEnabled;
	}

	void ChatManagerSettings::PerformanceCountersEnabled(bool value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_PerformanceCountersEnabled = value;
	}

	bool ChatManagerSettings::CombineCaptureBuffersIntoSinglePacket()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_CombineCaptureBuffersIntoSinglePacket;
	}

	void ChatManagerSettings::CombineCaptureBuffersIntoSinglePacket(bool value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_CombineCaptureBuffersIntoSinglePacket = value;
	}

	bool ChatManagerSettings::UseKinectAsCaptureSource()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_UseKinectAsCaptureSource;
	}

	void ChatManagerSettings::UseKinectAsCaptureSource(bool value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_UseKinectAsCaptureSource = value;
	}

	bool ChatManagerSettings::PreEncodeCallbackEnabled()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_PreEncodeCallbackEnabled;
	}

	void ChatManagerSettings::PreEncodeCallbackEnabled(bool value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_PreEncodeCallbackEnabled = value;
	}

	bool ChatManagerSettings::PostDecodeCallbackEnabled()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_PostDecodeCallbackEnabled;
	}

	void ChatManagerSettings::PostDecodeCallbackEnabled(bool value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_PostDecodeCallbackEnabled = value;
	}

	GameChatDiagnosticsTraceLevel ChatManagerSettings::DiagnosticsTraceLevel()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_DiagnosticsTraceLevel;
	}

	void ChatManagerSettings::DiagnosticsTraceLevel(GameChatDiagnosticsTraceLevel const& value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_DiagnosticsTraceLevel = value;
	}

	bool ChatManagerSettings::AutoMuteBadReputationUsers()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_AutoMuteBadReputationUsers;
	}

	void ChatManagerSettings::AutoMuteBadReputationUsers(bool value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_AutoMuteBadReputationUsers = value;
	}

	uint32_t ChatManagerSettings::SessionStateUpdateRequestCoalesceDuration()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_SessionStateUpdateRequestCoalesceDuration;
	}

	void ChatManagerSettings::SessionStateUpdateRequestCoalesceDuration(uint32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_SessionStateUpdateRequestCoalesceDuration = value;
	}

	uint32_t ChatManagerSettings::MuteUserIfReputationIsBadCoalesceDuration()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_MuteUserIfReputationIsBadCoalesceDuration;
	}

	void ChatManagerSettings::MuteUserIfReputationIsBadCoalesceDuration(uint32_t value)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_MuteUserIfReputationIsBadCoalesceDuration = value;
	}
}