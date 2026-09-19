#include "Other.hpp"

#include <raygui.h>

#include "../Main/Main.hpp"

namespace Scenes
{
    extern std::unique_ptr<Main> main_scene;
}

void Other::Init()
{

}

float OtherRotation = 0;
void Other::Update()
{
    OtherRotation++;
}

void Other::Draw()
{
    DrawText("You are currently in the other scene!", 20, 20, 20, BLACK);

    if (GuiButton({20, 50, 150, 80}, "Go to Main Scene"))
    {
        game.SetScene(Scenes::main_scene.get());
    }

    DrawRectanglePro({200, 200, 50, 50}, {25, 25}, OtherRotation, BLUE);
}

void Other::DrawUI()
{

}