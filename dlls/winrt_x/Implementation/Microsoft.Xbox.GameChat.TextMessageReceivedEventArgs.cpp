#include "pch.h"
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.h"
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring TextMessageReceivedEventArgs::Message()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_message;
    }

    ChatTextMessageType TextMessageReceivedEventArgs::ChatTextMessageType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chatTextMessageType;
    }

    ChatUser TextMessageReceivedEventArgs::ChatUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_chatUser;
    }
}
