//
// Created by Amir on 26.09.2023.
//

#ifndef CPP_SWAG_BALLS_GAME_H
#define CPP_SWAG_BALLS_GAME_H

#endif //CPP_SWAG_BALLS_GAME_H

#include <iostream>
#include <ctime>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:
    sf::VideoMode     videoMode;
    sf::RenderWindow* window;
    bool              endGame;

    void initVariables();
    void initWindow();

public:
    // Constructor and destructor
    Game();
    ~Game();

    // Accessors

    // Modifiers

    // Functions
    void update();
    void render();
};
