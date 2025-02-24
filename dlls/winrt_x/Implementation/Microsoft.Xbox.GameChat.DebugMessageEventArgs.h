#pragma once
#include "Microsoft.Xbox.GameChat.DebugMessageEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct DebugMessageEventArgs : DebugMessageEventArgsT<DebugMessageEventArgs>
    {
        DebugMessageEventArgs() = default;

        hstring Message();
        int32_t ErrorCode();

    private:
		hstring m_message;
		int32_t m_errorCode;
    };
}
