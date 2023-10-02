#include <QuickDraw.h>

QDGlobals qd;

void main(void) {
    GDHandle            mainDeviceH;
    PixMapHandle        pixMapH;
    short               bitDepth;   
    
    InitGraf(&qd.thePort);
    mainDeviceH = GetMainDevice();
    pixMapH = (*mainDeviceH)->gdPMap;
    bitDepth = (*pixMapH)->pixelSize;
    
    switch (bitDepth) {
        case 1:
            if (HasDepth(mainDeviceH, 8, NULL, NULL)) {
                SetDepth(mainDeviceH, 8, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 16, NULL, NULL)) {
                SetDepth(mainDeviceH, 16, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 1, NULL, NULL)) {
                SetDepth(mainDeviceH, 1, NULL , NULL);
            }
        case 2:
            if (HasDepth(mainDeviceH, 1, NULL, NULL)) {
                SetDepth(mainDeviceH, 1, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 8, NULL, NULL)) {
                SetDepth(mainDeviceH, 8, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 2, NULL, NULL)) {
                SetDepth(mainDeviceH, 2, NULL , NULL);
            }
            break;
        case 8:
            if (HasDepth(mainDeviceH, 1, NULL, NULL)) {
                SetDepth(mainDeviceH, 1, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 16, NULL, NULL)) {
                SetDepth(mainDeviceH, 16, NULL , NULL);
            }     
            if (HasDepth(mainDeviceH, 8, NULL, NULL)) {
                SetDepth(mainDeviceH, 8, NULL , NULL);
            }
            break;
        case 16:            
            if (HasDepth(mainDeviceH, 1, NULL, NULL)) {
                SetDepth(mainDeviceH, 1, NULL , NULL);
            }    
            if (HasDepth(mainDeviceH, 8, NULL, NULL)) {
                SetDepth(mainDeviceH, 8, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 16, NULL, NULL)) {
                SetDepth(mainDeviceH, 16, NULL , NULL);
            }
            break;
        case 32:
            if (HasDepth(mainDeviceH, 8, NULL, NULL)) {
                SetDepth(mainDeviceH, 8, NULL , NULL);
            }     
            if (HasDepth(mainDeviceH, 16, NULL, NULL)) {
                SetDepth(mainDeviceH, 16, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 32, NULL, NULL)) {
                SetDepth(mainDeviceH, 32, NULL , NULL);
            }
            break;
        default:
            if (HasDepth(mainDeviceH, 1, NULL, NULL)) {
                SetDepth(mainDeviceH, 1, NULL , NULL);
            }
            if (HasDepth(mainDeviceH, 16, NULL, NULL)) {
                SetDepth(mainDeviceH, 16, NULL , NULL);
            }     
            if (HasDepth(mainDeviceH, 8, NULL, NULL)) {
                SetDepth(mainDeviceH, 8, NULL , NULL);
            }
            break;
    }       
}
