#pragma once
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	struct ChannelUpdatedEventArgs : ChannelUpdatedEventArgsT<ChannelUpdatedEventArgs>
	{
		ChannelUpdatedEventArgs() = default;

		ChatUser ChatUser();
		uint8_t Channel();

	private:
		GameChat::ChatUser m_chatUser{ nullptr };
		uint8_t m_channel{ 0 };
	};
}