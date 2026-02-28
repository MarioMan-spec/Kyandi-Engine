#include <windows.h>
#include <d3d12.h>
#include <dxgi1_6.h>
#include <iostream>

int main() {
    IDXGIFactory4* factory = nullptr;
    if (SUCCEEDED(CreateDXGIFactory1(IID_PPV_ARGS(&factory)))) {
        std::cout << "DX12 setup works!" << std::endl;
        factory->Release();
    }
    return 0;
}