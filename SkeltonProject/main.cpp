#include<DxLib.h>

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    SetWindowText("2016009_Š`“c—½‰î");
    ChangeWindowMode(true);
    DxLib_Init();
    SetDrawScreen(DX_SCREEN_BACK);
    while (ProcessMessage() != -1)
    {
        ClearDrawScreen();
        ScreenFlip();
    }
    DxLib_End();
    return 0;
}
