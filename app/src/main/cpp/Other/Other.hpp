#ifndef OTHER_H
#define OTHER_H

#include "../Scene/Scene.hpp"
#include "../Game/Game.hpp"

#include <iostream>

extern Game game;

class Other : public Scene
{
public:
    void Init() override;
    void Update() override;
    void Draw() override;
    void DrawUI() override;
};

#endif