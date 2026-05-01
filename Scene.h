#pragma once

class Scene
{
public:
    virtual ~Scene() {}

    virtual bool Update() = 0;
    virtual void Draw() = 0;
};