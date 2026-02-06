#pragma once

#include <SFML/Graphics.hpp>

class Game{
    public:
        Game();
        void run();

    private:
        void processEvents();
        void update(float dt);
        void render();

    private:
        sf::RenderWindow window;
        sf::Clock clock;
};