#pragma once
#include "Kinect.h"

#include "Windows.Kinect.AudioBeam.g.h"

namespace winrt::Windows::Kinect::implementation
{
	struct AudioBeam : AudioBeamT<AudioBeam>
	{
		AudioBeam( ) = default;

		AudioSource AudioSource();
		AudioBeamMode AudioBeamMode();
		void AudioBeamMode(Kinect::AudioBeamMode const& audioBeamMode);
		float BeamAngle();
		void BeamAngle(float beamAngle);
		float BeamAngleConfidence();
		Foundation::TimeSpan RelativeTime();
		Storage::Streams::IInputStream OpenInputStream();

		::IAudioBeam* m_pAudioBeam{ nullptr };

		Kinect::AudioSource m_AudioSource{ nullptr };
		Kinect::AudioBeamMode m_AudioBeamMode{ AudioBeamMode::Automatic };

		float m_BeamAngle{ 0.0f };
		float m_BeamAngleConfidence{ 0.0f };

		Foundation::TimeSpan m_RelativeTime{ 0 };
		Storage::Streams::IInputStream m_InputStream{ nullptr };
	};
}
