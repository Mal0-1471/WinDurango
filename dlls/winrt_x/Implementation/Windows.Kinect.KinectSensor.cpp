// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppClangTidyHicppExceptionBaseclass
// ReSharper disable CppMemberFunctionMayBeConst
#include "pch.h"
#include "Windows.Kinect.KinectSensor.h"
#include "Windows.Kinect.KinectSensor.g.cpp"

#include <Kinect.h>

namespace winrt::Windows::Kinect::implementation
{
	Kinect::KinectSensor KinectSensor::GetDefault()
	{
		return make<KinectSensor>();
	}

	Foundation::Collections::IObservableMap<hstring, Kinect::KinectSensor> KinectSensor::Sensors()
	{
		throw hresult_not_implemented();
	}

	event_token KinectSensor::IsPausedChanged(Foundation::TypedEventHandler<Kinect::KinectSensor, IsPausedChangedEventArgs> const& value)
	{
		throw hresult_not_implemented();
	}

	void KinectSensor::IsPausedChanged(event_token const& token) noexcept
	{
		throw hresult_not_implemented();
	}

	void KinectSensor::Open()
	{
		m_kinectSensor->Open();
	}

	void KinectSensor::Close()
	{
		m_kinectSensor->Close();
	}

	bool KinectSensor::IsOpen()
	{
		BOOLEAN* isOpen = false;

		m_kinectSensor->get_IsOpen(isOpen);

		return isOpen;
	}

	bool KinectSensor::IsPaused()
	{
		return FALSE;
	}

	ColorFrameSource KinectSensor::ColorFrameSource()
	{
		return *m_colorFrameSource;
	}

	DepthFrameSource KinectSensor::DepthFrameSource()
	{
		return *m_depthFrameSource;
	}

	BodyFrameSource KinectSensor::BodyFrameSource()
	{
		return *m_bodyFrameSource;
	}

	BodyIndexFrameSource KinectSensor::BodyIndexFrameSource()
	{
		return *m_bodyIndexFrameSource;
	}

	InfraredFrameSource KinectSensor::InfraredFrameSource()
	{
		return *m_infraredFrameSource;
	}

	AudioSource KinectSensor::AudioSource()
	{
		return *m_audioSource;
	}

	MultiSourceFrameReader KinectSensor::OpenMultiSourceFrameReader(FrameSourceTypes const& enabledFrameSourceTypes)
	{
		throw hresult_not_implemented();
	}

	CoordinateMapper KinectSensor::CoordinateMapper()
	{
		return *m_coordinateMapper;
	}

	hstring KinectSensor::UniqueKinectId()
	{
		return m_uniqueKinectId;
	}
}
