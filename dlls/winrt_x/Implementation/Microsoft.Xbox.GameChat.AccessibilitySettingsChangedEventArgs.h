#pragma once
#include "Microsoft.Xbox.GameChat.AccessibilitySettingsChangedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
	struct AccessibilitySettingsChangedEventArgs : AccessibilitySettingsChangedEventArgsT<AccessibilitySettingsChangedEventArgs>
	{
		AccessibilitySettingsChangedEventArgs() = default;

		ChatUser ChatUser();

	private:
		GameChat::ChatUser m_chatUser{ nullptr };
	};
}