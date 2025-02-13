#include "pch.h"
#include "Windows.Xbox.Networking.Development.h"
#include "Windows.Xbox.Networking.Development.g.cpp"

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

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAddress Development::CreateSecureDeviceAddressFromHostNames(winrt::Windows::Xbox::Networking::SecureDeviceId const& secureDeviceId, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Networking::HostName> const& hostNames)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription Development::CreateSecureDeviceSocketDescription(hstring const& name, winrt::Windows::Xbox::Networking::SecureIpProtocol const& secureIpProtocol, uint16_t boundPortRangeLower, uint16_t boundPortRangeUpper, winrt::Windows::Xbox::Networking::SecureDeviceSocketUsage const& allowedUsages)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate Development::CreateSecureDeviceAssociationTemplate(hstring const& name, winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription const& initiatorSecureDeviceSocketDescription, winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription const& acceptorSecureDeviceSocketDescription, winrt::Windows::Xbox::Networking::SecureDeviceAssociationUsage const& allowedUsages, hstring const& relyingParty, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::ProtocolParserDescription> const& protocolParserDescriptions, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> const& qualityOfServiceMetricPathPriorities, winrt::Windows::Xbox::Networking::MultiplayerSessionRequirement const& multiplayerSessionRequirement)
    {
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
}
