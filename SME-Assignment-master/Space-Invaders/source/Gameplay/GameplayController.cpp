#include <iostream>
#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Gameplay/GameplayView.h"

namespace Gameplay
{
    GameplayController::GameplayController() : gameplay_view(new GameplayView()) {}

    GameplayController::~GameplayController()
    {
        delete gameplay_view;
        gameplay_view = nullptr; // Reset the pointer after deletion
    }

    void GameplayController::initialize()
    {
        if (gameplay_view)
            gameplay_view->initialize();
        else
            std::cerr << "Error: GameplayView not initialized properly!" << std::endl;
    }

    void GameplayController::update()
    {
        if (gameplay_view)
            gameplay_view->update();
        else
            std::cerr << "Error: GameplayView not initialized properly!" << std::endl;
    }

    void GameplayController::render()
    {
        if (gameplay_view)
            gameplay_view->render();
        else
            std::cerr << "Error: GameplayView not initialized properly!" << std::endl;
    }
}
