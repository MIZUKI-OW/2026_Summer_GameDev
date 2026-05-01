#pragma once
#include "Scene.h"

class SceneManager
{
private:
    Scene* currentScene;

public:
    SceneManager();
    ~SceneManager();

    bool Update();
    void Draw();

    void ChangeScene(Scene* nextScene);
};