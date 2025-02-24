#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	Windows::Storage::Streams::IBuffer ChatPacketEventArgs::PacketBuffer()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	bool ChatPacketEventArgs::SendReliable()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sendReliable;
	}

	bool ChatPacketEventArgs::SendInOrder()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sendInOrder;
	}

	bool ChatPacketEventArgs::SendPacketToAllConnectedConsoles()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sendPacketToAllConnectedConsoles;
	}

	Windows::Foundation::IInspectable ChatPacketEventArgs::UniqueTargetConsoleIdentifier()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	ChatMessageType ChatPacketEventArgs::ChatMessageType()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chatMessageType;
	}

	ChatUser ChatPacketEventArgs::ChatUser()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chatUser;
	}
}
