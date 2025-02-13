#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.cpp"

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

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
		printf("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package)
    {
		printf("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers)
    {
		printf("PackageTransferWatcher::CreateForChunkSpecifiers\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForContentPackage(winrt::Windows::Xbox::Management::Deployment::IContentPackage const& package)
    {
		printf("PackageTransferWatcher::CreateForContentPackage\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForDownloadableContentPackage(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage const& package)
    {
		printf("PackageTransferWatcher::CreateForDownloadableContentPackage\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> PackageTransferWatcher::ChunkIds()
    {
		printf("PackageTransferWatcher::ChunkIds\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ChunkCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ChunkCompletedEventArgs> const& handler)
    {
		printf("PackageTransferWatcher::ChunkCompleted\n"); 
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void PackageTransferWatcher::ChunkCompleted(winrt::event_token const& cookie) noexcept
    {
		printf("PackageTransferWatcher::ChunkCompleted\n"); 
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ProgressChangedEventArgs> const& handler)
    {
        return {};
    }
    void PackageTransferWatcher::ProgressChanged(winrt::event_token const& cookie) noexcept
    {
        printf("PackageTransferWatcher::ProgressChanged\n");
    }
    winrt::event_token PackageTransferWatcher::TransferCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferCompletedEventArgs> const& handler)
    {
		printf("PackageTransferWatcher::TransferCompleted\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferCompleted(winrt::event_token const& cookie) noexcept
    {
		printf("PackageTransferWatcher::TransferCompleted\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferWatcher::TransferStatus()
    {
		printf("PackageTransferWatcher::TransferStatus\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferWatcher::TransferType()
    {
		printf("PackageTransferWatcher::TransferType\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::TransferStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferStatusChangedEventArgs> const& handler)
    {
		printf("PackageTransferWatcher::TransferStatusChanged\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferStatusChanged(winrt::event_token const& cookie) noexcept
    {
		printf("PackageTransferWatcher::TransferStatusChanged\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
}
