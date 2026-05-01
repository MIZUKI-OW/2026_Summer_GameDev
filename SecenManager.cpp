#include "SceneManager.h"
#include "TitleScene.h"

SceneManager::SceneManager()
{
    currentScene = new TitleScene(this);
}

SceneManager::~SceneManager()
{
    delete currentScene;
}

bool SceneManager::Update()
{
    return currentScene->Update();
}

void SceneManager::Draw()
{
    currentScene->Draw();
}

void SceneManager::ChangeScene(Scene* nextScene)
{
    delete currentScene;
    currentScene = nextScene;
}