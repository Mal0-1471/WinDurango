// ReSharper disable CppMemberFunctionMayBeConst
#include "pch.h"
#include "Windows.Kinect.AudioBeam.h"
#include "Windows.Kinect.AudioBeam.g.cpp"

namespace winrt::Windows::Kinect::implementation
{
	AudioSource AudioBeam::AudioSource()
	{
		return m_AudioSource;
	}

	AudioBeamMode AudioBeam::AudioBeamMode()
	{
		return m_AudioBeamMode;
	}

	void AudioBeam::AudioBeamMode(Kinect::AudioBeamMode const& audioBeamMode)
	{
		m_AudioBeamMode = audioBeamMode;
	}

	float AudioBeam::BeamAngle()
	{
		return m_BeamAngle;
	}

	void AudioBeam::BeamAngle(float beamAngle)
	{
		m_BeamAngle = beamAngle;
	}

	float AudioBeam::BeamAngleConfidence()
	{
		return m_BeamAngleConfidence;
	}

	Foundation::TimeSpan AudioBeam::RelativeTime()
	{
		return m_RelativeTime;
	}

	Storage::Streams::IInputStream AudioBeam::OpenInputStream()
	{
		return m_InputStream;
	}
}
