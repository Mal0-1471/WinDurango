// ReSharper disable CppClangTidyHicppExceptionBaseclass
#pragma once
#include <Kinect.h>

#include "Windows.Kinect.KinectSensor.g.h"

namespace winrt::Windows::Kinect::implementation
{
	struct KinectSensor : KinectSensorT<KinectSensor>
	{
		KinectSensor()
		{
			if (const HRESULT hr = GetDefaultKinectSensor(&m_kinectSensor); FAILED(hr))
				throw hresult_error(hr);

			m_colorFrameSource = make<Kinect::ColorFrameSource>();
			m_depthFrameSource = make<Kinect::DepthFrameSource>();
			m_bodyFrameSource = make<Kinect::BodyFrameSource>();
			m_bodyIndexFrameSource = make<Kinect::BodyIndexFrameSource>();
			m_infraredFrameSource = make<Kinect::InfraredFrameSource>();
			m_audioSource = make<Kinect::AudioSource>();
			m_coordinateMapper = make<Kinect::CoordinateMapper>();
		}

		static Kinect::KinectSensor GetDefault();
		static Foundation::Collections::IObservableMap<hstring, Kinect::KinectSensor> Sensors();
		event_token IsPausedChanged(Foundation::TypedEventHandler<Kinect::KinectSensor, IsPausedChangedEventArgs> const& value);
		void IsPausedChanged(event_token const& token) noexcept;
		void Open();
		void Close();
		bool IsOpen();
		bool IsPaused();
		ColorFrameSource ColorFrameSource();
		DepthFrameSource DepthFrameSource();
		BodyFrameSource BodyFrameSource();
		BodyIndexFrameSource BodyIndexFrameSource();
		InfraredFrameSource InfraredFrameSource();
		AudioSource AudioSource();
		MultiSourceFrameReader OpenMultiSourceFrameReader(FrameSourceTypes const& enabledFrameSourceTypes);
		CoordinateMapper CoordinateMapper();
		hstring UniqueKinectId();

		::IKinectSensor* m_kinectSensor;

		Kinect::ColorFrameSource* m_colorFrameSource{ nullptr };
		Kinect::DepthFrameSource* m_depthFrameSource{ nullptr };
		Kinect::BodyFrameSource* m_bodyFrameSource{ nullptr };
		Kinect::BodyIndexFrameSource* m_bodyIndexFrameSource{ nullptr };
		Kinect::InfraredFrameSource* m_infraredFrameSource{ nullptr };
		Kinect::AudioSource* m_audioSource{ nullptr };
		MultiSourceFrameReader* m_multiSourceFrameReader{ nullptr };
		Kinect::CoordinateMapper* m_coordinateMapper{ nullptr };

		hstring m_uniqueKinectId = L"HELLO-WORLD";
	};
}
namespace winrt::Windows::Kinect::factory_implementation
{
	struct KinectSensor : KinectSensorT<KinectSensor, implementation::KinectSensor>
	{
	};
}
