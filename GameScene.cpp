#include "GameScene.h"
#include "SceneManager.h"
#include "TitleScene.h"
#include "DxLib.h"

GameScene::GameScene(SceneManager* manager)
    : manager(manager)
{
}

bool GameScene::Update()
{
    if (CheckHitKey(KEY_INPUT_ESCAPE))
    {
        int result = MessageBox(NULL, "ゲームを終了しますか？", "確認", MB_YESNO);

        if (result == IDYES)
            return false;
    }

    return true;
}

void GameScene::Draw()
{
    DrawString(500, 300, "ゲームプレイ中", GetColor(255, 255, 255));
    DrawString(400, 400, "ESCで終了確認", GetColor(255, 255, 255));
}