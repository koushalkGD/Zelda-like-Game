#include "Game.hpp"

Game::Game()
    : window(sf::VideoMode(800, 600), "Zelda-like-Game")
    {
        window.setFramerateLimit(60);
    }

    void Game::run()
    {
        while (window.isOpen())
        {
            float dt = clock.restart().asSeconds();
            processEvents();
            update(dt);
            render();
        }
    }

    void Game::processEvents()
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    void Game::update(float dt)
    {
        // Player movements, enemy AI, etc.
    }

    void Game::render()
    {window.clear(sf::Color::Black);
        // Draw game objects here
        window.display();
    }