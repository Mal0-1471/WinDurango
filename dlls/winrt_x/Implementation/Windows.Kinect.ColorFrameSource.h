#pragma once
#include "Windows.Kinect.ColorFrameSource.g.h"

#include "Kinect.h"

namespace winrt::Windows::Kinect::implementation
{
	struct ColorFrameSource : ColorFrameSourceT<ColorFrameSource>
	{
		ColorFrameSource();

		event_token FrameCaptured(Foundation::TypedEventHandler<Kinect::ColorFrameSource, FrameCapturedEventArgs> const& value);
		void FrameCaptured(event_token const& token) noexcept;
		bool IsActive();
		ColorFrameReader OpenReader();
		FrameDescription CreateFrameDescription(ColorImageFormat const& format);
		FrameDescription FrameDescription();
		KinectSensor KinectSensor();

		::IColorFrameSource* m_colorFrameSource{ nullptr };

		ColorFrameReader m_colorFrameReader{ nullptr };
		Kinect::FrameDescription m_frameDescription{ nullptr };
		Kinect::KinectSensor m_kinectSensor{ nullptr };

	};
}
