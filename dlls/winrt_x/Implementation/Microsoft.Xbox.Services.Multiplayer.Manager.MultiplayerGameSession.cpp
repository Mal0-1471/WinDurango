#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
////////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring MultiplayerGameSession::CorrelationId()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerGameSession::SessionReference()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> MultiplayerGameSession::Members()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember MultiplayerGameSession::Host()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    hstring MultiplayerGameSession::Properties()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants MultiplayerGameSession::SessionConstants()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference> MultiplayerGameSession::TournamentTeams()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> MultiplayerGameSession::TournamentTeamResults()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    bool MultiplayerGameSession::IsHost(hstring const& xboxUserId)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void MultiplayerGameSession::SetProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void MultiplayerGameSession::SetSynchronizedProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void MultiplayerGameSession::SetSynchronizedHost(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember const& gameHost, winrt::Windows::Foundation::IInspectable const& context)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
}
