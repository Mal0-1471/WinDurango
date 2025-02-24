#pragma once
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	struct ChatPacketEventArgs : ChatPacketEventArgsT<ChatPacketEventArgs>
	{
		ChatPacketEventArgs() = default;

		Windows::Storage::Streams::IBuffer PacketBuffer();
		bool SendReliable();
		bool SendInOrder();
		bool SendPacketToAllConnectedConsoles();
		Windows::Foundation::IInspectable UniqueTargetConsoleIdentifier();
		ChatMessageType ChatMessageType();
		ChatUser ChatUser();

	private:
		bool m_sendReliable{ false };
		bool m_sendInOrder{ false };
		bool m_sendPacketToAllConnectedConsoles{ false };

		Windows::Foundation::IInspectable m_uniqueTargetConsoleIdentifier{ nullptr };

		GameChat::ChatMessageType m_chatMessageType{ ChatMessageType::ChatTextMessage };
		GameChat::ChatUser m_chatUser{ nullptr };
	};
}