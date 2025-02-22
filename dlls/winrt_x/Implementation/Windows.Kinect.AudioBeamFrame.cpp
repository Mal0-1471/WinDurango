#include "pch.h"
#include "Windows.Kinect.AudioBeamFrame.h"
#include "Windows.Kinect.AudioBeamFrame.g.cpp"

namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamFrame::Close()
    {
        throw hresult_not_implemented();
    }

    AudioSource AudioBeamFrame::AudioSource()
    {
        throw hresult_not_implemented();
    }

    Foundation::TimeSpan AudioBeamFrame::Duration()
    {
        throw hresult_not_implemented();
    }

    Foundation::TimeSpan AudioBeamFrame::RelativeTimeStart()
    {
        throw hresult_not_implemented();
    }

    AudioBeam AudioBeamFrame::AudioBeam()
    {
        throw hresult_not_implemented();
    }

    Foundation::Collections::IVectorView<AudioBeamSubFrame> AudioBeamFrame::SubFrames()
    {
        throw hresult_not_implemented();
    }
}
