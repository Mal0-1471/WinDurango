#pragma once
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	struct ChatManagerSettings : ChatManagerSettingsT<ChatManagerSettings>
	{
		ChatManagerSettings() = default;

		uint32_t AudioThreadPeriodInMilliseconds();
		void AudioThreadPeriodInMilliseconds(uint32_t value);
		uint32_t AudioThreadAffinityMask();
		void AudioThreadAffinityMask(uint32_t value);
		int32_t AudioThreadPriority();
		void AudioThreadPriority(int32_t value);
		Windows::Xbox::Chat::EncodingQuality AudioEncodingQuality();
		void AudioEncodingQuality(Windows::Xbox::Chat::EncodingQuality const& value);
		uint32_t JitterBufferMaxPackets();
		void JitterBufferMaxPackets(uint32_t value);
		uint32_t JitterBufferLowestNeededPacketCount();
		void JitterBufferLowestNeededPacketCount(uint32_t value);
		uint32_t JitterBufferPacketsBeforeRelaxingNeeded();
		void JitterBufferPacketsBeforeRelaxingNeeded(uint32_t value);
		bool PerformanceCountersEnabled();
		void PerformanceCountersEnabled(bool value);
		bool CombineCaptureBuffersIntoSinglePacket();
		void CombineCaptureBuffersIntoSinglePacket(bool value);
		bool UseKinectAsCaptureSource();
		void UseKinectAsCaptureSource(bool value);
		bool PreEncodeCallbackEnabled();
		void PreEncodeCallbackEnabled(bool value);
		bool PostDecodeCallbackEnabled();
		void PostDecodeCallbackEnabled(bool value);
		GameChatDiagnosticsTraceLevel DiagnosticsTraceLevel();
		void DiagnosticsTraceLevel(GameChatDiagnosticsTraceLevel const& value);
		bool AutoMuteBadReputationUsers();
		void AutoMuteBadReputationUsers(bool value);
		uint32_t SessionStateUpdateRequestCoalesceDuration();
		void SessionStateUpdateRequestCoalesceDuration(uint32_t value);
		uint32_t MuteUserIfReputationIsBadCoalesceDuration();
		void MuteUserIfReputationIsBadCoalesceDuration(uint32_t value);

	private:
		uint32_t m_AudioThreadPeriodInMilliseconds{ 0 };
		uint32_t m_AudioThreadAffinityMask{ 0 };
		int32_t m_AudioThreadPriority{ 0 };
		Windows::Xbox::Chat::EncodingQuality m_AudioEncodingQuality{ Windows::Xbox::Chat::EncodingQuality::Normal };
		uint32_t m_JitterBufferMaxPackets{ 0 };
		uint32_t m_JitterBufferLowestNeededPacketCount{ 0 };
		uint32_t m_JitterBufferPacketsBeforeRelaxingNeeded{ 0 };
		bool m_PerformanceCountersEnabled{ false };
		bool m_CombineCaptureBuffersIntoSinglePacket{ false };
		bool m_UseKinectAsCaptureSource{ false };
		bool m_PreEncodeCallbackEnabled{ false };
		bool m_PostDecodeCallbackEnabled{ false };
		GameChatDiagnosticsTraceLevel m_DiagnosticsTraceLevel{ GameChatDiagnosticsTraceLevel::Off };
		bool m_AutoMuteBadReputationUsers{ false };
		uint32_t m_SessionStateUpdateRequestCoalesceDuration{ 0 };
		uint32_t m_MuteUserIfReputationIsBadCoalesceDuration{ 0 };
	};
}
