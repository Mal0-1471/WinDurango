#include "pch.h"
#include "Microsoft.Xbox.GameChat.DebugMessageEventArgs.h"
#include "Microsoft.Xbox.GameChat.DebugMessageEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring DebugMessageEventArgs::Message()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_message;
    }

    int32_t DebugMessageEventArgs::ErrorCode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_errorCode;
    }
}
