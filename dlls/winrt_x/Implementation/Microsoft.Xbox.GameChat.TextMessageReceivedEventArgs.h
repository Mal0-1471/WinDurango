#pragma once
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct TextMessageReceivedEventArgs : TextMessageReceivedEventArgsT<TextMessageReceivedEventArgs>
    {
        TextMessageReceivedEventArgs() = default;

        hstring Message();
        ChatTextMessageType ChatTextMessageType();
        ChatUser ChatUser();

    private:
        hstring m_message = MAKE_HSTRING("Hello, world!");
        GameChat::ChatTextMessageType m_chatTextMessageType = ChatTextMessageType::TextMessage;
        GameChat::ChatUser m_chatUser{ nullptr };
    };
}