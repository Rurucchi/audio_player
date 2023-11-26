#include <Audioclient.h>
#include <audiopolicy.h>
#include <mmdeviceapi.h>
#include <combaseapi.h>


#define REFTIMES_PER_SEC  10000000
#define REFTIMES_PER_MILLISEC  10000

int main() {
	  HRESULT hr;

    // initialize com library on current thread
    CoInitialize(nullptr);

    // audio client stuff
    HRESULT instance;
	IAudioClient *pAudioclient;
    IMMDeviceEnumerator* pEnumerator = NULL;
	IMMDevice *pDevice;
	IAudioClient *pAudioclient;
	

    instance = CoCreateInstance(
        CLSID_MMDeviceEnumerator, NULL,
        CLSCTX_ALL, IID_IMMDeviceEnumerator,
        (void**)&pEnumerator);

    pAudioclient->Initialize(
        AUDCLNT_SHAREMODE_SHARED,
        0,
        hnsBufferDuration,
        [in] REFERENCE_TIME     hnsPeriodicity,
        [in] const WAVEFORMATEX * pFormat,
        [in] LPCGUID            AudioSessionGuid
    );


    HRESULT IMMDevice::Activate(IID_IAudioClient, CLSCTX_ALL, NULL, &client);

}