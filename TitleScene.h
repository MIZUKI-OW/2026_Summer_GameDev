#pragma once
#include "Scene.h"

class SceneManager;

class TitleScene : public Scene
{
private:
    SceneManager* manager;

public:
    TitleScene(SceneManager* manager);

    bool Update() override;
    void Draw() override;
};