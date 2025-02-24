#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.h"
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	ChatUser ChannelUpdatedEventArgs::ChatUser()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chatUser;
	}

	uint8_t ChannelUpdatedEventArgs::Channel()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_channel;
	}
}