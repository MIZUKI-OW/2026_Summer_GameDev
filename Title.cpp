#include "TitleScene.h"
#include "SceneManager.h"
#include "GameScene.h"
#include "DxLib.h"

TitleScene::TitleScene(SceneManager* manager)
    : manager(manager)
{
}

bool TitleScene::Update()
{
    if (CheckHitKey(KEY_INPUT_RETURN))
    {
        manager->ChangeScene(new GameScene(manager));
    }

    if (CheckHitKey(KEY_INPUT_ESCAPE))
    {
        int result = MessageBox(NULL, "ゲームを終了しますか？", "確認", MB_YESNO);

        if (result == IDYES)
            return false;
    }

    return true;
}

void TitleScene::Draw()
{
    DrawString(540, 300, "うおサバイバー", GetColor(255, 255, 255));
    DrawString(500, 400, "ENTERでスタート", GetColor(255, 255, 255));
}