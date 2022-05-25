#include <Dialogs.h>
#include <Fonts.h>
#include <MacWindows.h>
#include <Menus.h>
#include <QuickDraw.h>
#include <TextEdit.h>

QDGlobals qd;

static void Initialize(void) {
	InitGraf(&qd.thePort);
	InitFonts();
	InitWindows();
	InitMenus();
	TEInit();
	InitDialogs(nil);
	InitCursor();
}

void main(void) {
    GDHandle          mainDeviceH;
    PixMapHandle      pixMapH;
    OSErr             error;
    
    short       bitDepth;
    
    Initialize();
    mainDeviceH = GetMainDevice();
    pixMapH = (**mainDeviceH).gdPMap;
    bitDepth = (**pixMapH).pixelSize;
    
    switch (bitDepth) {
        case 1:
            error = SetDepth(mainDeviceH, 8, nil , nil);
            error = SetDepth(mainDeviceH, 16, nil , nil); 
            error = SetDepth(mainDeviceH, 1, nil , nil);
            break;
        case 2:
            error = SetDepth(mainDeviceH, 1, nil , nil);
            error = SetDepth(mainDeviceH, 8, nil , nil); 
            error = SetDepth(mainDeviceH, 2, nil , nil);
            break;
        case 8:
            error = SetDepth(mainDeviceH, 1, nil , nil);
            error = SetDepth(mainDeviceH, 16, nil , nil);     
            error = SetDepth(mainDeviceH, 8, nil , nil);
            break;
        case 16:            
            error = SetDepth(mainDeviceH, 1, nil , nil);     
            error = SetDepth(mainDeviceH, 8, nil , nil);
            error = SetDepth(mainDeviceH, 16, nil , nil);
            break;
        case 32:
            error = SetDepth(mainDeviceH, 8, nil , nil);     
            error = SetDepth(mainDeviceH, 16, nil , nil);
            error = SetDepth(mainDeviceH, 32, nil , nil);
            break;
        default:
            error = SetDepth(mainDeviceH, 1, nil , nil);
            error = SetDepth(mainDeviceH, 16, nil , nil);     
            error = SetDepth(mainDeviceH, 8, nil , nil);
            break;
    }       
}
