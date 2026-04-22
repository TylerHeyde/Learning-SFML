#include <SFML/Graphics.hpp>

int main() {
    // Create a window with specific dimensions and a title
    sf::RenderWindow window(sf::VideoMode(100, 100), "SFML Test Window");

    // Create a green circle
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(0.f, 0.f);

    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        // Check for window events (like clicking the 'X')
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the previous frame
        window.clear();

        // Draw the shape
        window.draw(shape);

        // Display the new frame
        window.display();
    }

    return 0;
}