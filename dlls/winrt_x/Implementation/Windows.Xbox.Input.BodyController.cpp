#include "pch.h"
#include "Windows.Xbox.Input.BodyController.h"
#include "Windows.Xbox.Input.BodyController.g.cpp"

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
//////////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IBodyController> BodyController::BodyControllers()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BodyControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerAddedEventArgs> const& handler)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void BodyController::BodyControllerAdded(winrt::event_token const& token) noexcept
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BodyControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerRemovedEventArgs> const& handler)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void BodyController::BodyControllerRemoved(winrt::event_token const& token) noexcept
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    uint64_t BodyController::Id()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    hstring BodyController::Type()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User BodyController::User()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    uint32_t BodyController::BiometricUserId()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::BiometricUserChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBiometricUserChangedEventArgs> const& handler)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void BodyController::BiometricUserChanged(winrt::event_token const& token) noexcept
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::IBodyControllerReading BodyController::GetCurrentReading()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBodyControllerReadingChangedEventArgs> const& handler)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void BodyController::ReadingChanged(winrt::event_token const& token) noexcept
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint64_t> BodyController::AssociatedControllerIds()
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::AssociatedControllerAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerAddedEventArgs> const& handler)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void BodyController::AssociatedControllerAdded(winrt::event_token const& token) noexcept
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token BodyController::AssociatedControllerRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerRemovedEventArgs> const& handler)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void BodyController::AssociatedControllerRemoved(winrt::event_token const& token) noexcept
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
}
