// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppClangTidyHicppExceptionBaseclass
// ReSharper disable CppMemberFunctionMayBeConst
// ReSharper disable CppClangTidyModernizeUseEqualsDefault
#include "pch.h"
#include "Windows.Kinect.ColorFrameSource.h"
#include "Windows.Kinect.ColorFrameSource.g.cpp"

namespace winrt::Windows::Kinect::implementation
{
	ColorFrameSource::ColorFrameSource()
	{
		m_colorFrameReader = make<ColorFrameReader>();
		m_frameDescription = make<Kinect::FrameDescription>();
		m_kinectSensor = make<Kinect::KinectSensor>();
	}

	event_token ColorFrameSource::FrameCaptured(Foundation::TypedEventHandler<Kinect::ColorFrameSource, FrameCapturedEventArgs> const& value)
	{
		throw hresult_not_implemented();
	}

	void ColorFrameSource::FrameCaptured(event_token const& token) noexcept
	{
		throw hresult_not_implemented();
	}

	bool ColorFrameSource::IsActive()
	{
		BOOLEAN* isActive = false;

		m_colorFrameSource->get_IsActive(isActive);

		return isActive;
	}

	ColorFrameReader ColorFrameSource::OpenReader()
	{
		return m_colorFrameReader;
	}

	// TODO: There is probably more that needs to be done here!
	FrameDescription ColorFrameSource::CreateFrameDescription(ColorImageFormat const& format)
	{
		return m_frameDescription;
	}

	FrameDescription ColorFrameSource::FrameDescription()
	{
		return m_frameDescription;
	}

	KinectSensor ColorFrameSource::KinectSensor()
	{
		return m_kinectSensor;
	}
}
