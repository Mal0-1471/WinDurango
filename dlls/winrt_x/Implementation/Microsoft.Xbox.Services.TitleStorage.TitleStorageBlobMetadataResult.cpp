#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata> TitleStorageBlobMetadataResult::Items()
    {
        return winrt::single_threaded_vector<TitleStorageBlobMetadata>().GetView();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> TitleStorageBlobMetadataResult::GetNextAsync(uint32_t maxItems)
    {
		co_return winrt::make<TitleStorageBlobMetadataResult>( );
    }
    bool TitleStorageBlobMetadataResult::HasNext()
    {
        return false;
    }
}
