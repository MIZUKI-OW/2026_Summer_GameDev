#include "DxLib.h"
#include "SceneManager.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    ChangeWindowMode(TRUE);
    SetGraphMode(1280, 720, 32);

    if (DxLib_Init() == -1) return -1;

    SetDrawScreen(DX_SCREEN_BACK);

    SceneManager sceneManager;

    while (ProcessMessage() == 0)
    {
        ClearDrawScreen();

        if (!sceneManager.Update())
            break;

        sceneManager.Draw();

        ScreenFlip();
    }

    DxLib_End();
    return 0;
}