#pragma once
#include "Scene.h"

class SceneManager;

class GameScene : public Scene
{
private:
    SceneManager* manager;

public:
    GameScene(SceneManager* manager);

    bool Update() override;
    void Draw() override;
};