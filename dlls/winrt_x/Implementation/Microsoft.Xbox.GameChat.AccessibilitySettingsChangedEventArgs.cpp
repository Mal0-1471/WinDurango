#include "pch.h"
#include "Microsoft.Xbox.GameChat.AccessibilitySettingsChangedEventArgs.h"
#include "Microsoft.Xbox.GameChat.AccessibilitySettingsChangedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	ChatUser AccessibilitySettingsChangedEventArgs::ChatUser()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chatUser;
	}
}