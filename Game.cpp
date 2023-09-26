//
// Created by Amir on 26.09.2023.
//

#include "Game.h"

void Game::initVariables() {
    this->endGame = false;
}

void Game::initWindow()
{
    this->videoMode = sf::VideoMode(800, 600);
    this->window    = new sf::RenderWindow(
            this->videoMode, "Game 2",
            sf::Style::Close | sf::Style::Titlebar);
}

// Constructor and destructor
Game::Game()
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}

// Functions
void Game::update() {

}

void Game::render() {

}

