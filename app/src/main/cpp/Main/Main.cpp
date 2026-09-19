#include "Main.hpp"

#include <raygui.h>

#include "../Other/Other.hpp"

namespace Scenes
{
    extern std::unique_ptr<Other> other_scene;
}

void Main::Init()
{

}

float MainRotation = 0;
void Main::Update()
{
    MainRotation++;
}

void Main::Draw()
{
    DrawText("You are currently in the main scene!", 20, 20, 20, BLACK);

    if (GuiButton({20, 50, 150, 80}, "Go to Other Scene"))
    {
        game.SetScene(Scenes::other_scene.get());
    }

    DrawRectanglePro({200, 200, 100, 100}, {50, 50}, MainRotation, RED);
}


void Main::DrawUI()
{

}