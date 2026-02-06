#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
  //creating the game window
  sf::RenderWindow window(sf::VideoMode(800, 600),
  "Zelda-like-Game (Phase 1)"
  );

  //control the framerate
  window.setFramerateLimit(60);

  //Main Game loop
  while (window.isOpen())
    {
      sf::Event event;

      // ----Input & Events----
      while (window.pollEvent(event)){
        if (event.type == sf::Event::Closed){
          window.close();
        }
      }

      //----Update---
      //(Game Logics)

      //-----Render----
      window.clear(sf::Color::Black);
      window.display();
    }
  return 0;
}
