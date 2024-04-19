#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp> // Include necessary dependencies

class Bullet {
private:
    sf::Vector2f position;
    float speed;
    int damage;

public:
    Bullet(const sf::Vector2f& startPos, float bulletSpeed, int bulletDamage);

    // Methods to update and render the bullet
    void update();
    void render(sf::RenderWindow& window);

    // Getter methods
    sf::Vector2f getPosition() const;
    int getDamage() const;
};

#endif // BULLET_H
