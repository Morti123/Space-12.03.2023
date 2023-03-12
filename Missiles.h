#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Player.h"

class Missiles {
private:sf::Texture texture;
	   sf::Sprite sprite;
	   float speed;
	   float angle;
	   Player player;
public:
	Missiles(sf::Vector2f pos) {
		texture.loadFromFile(Missiles_File_Name);
		sprite.setTexture(texture);
		sprite.setPosition(pos);
		speed = 0.f;
	}
	void update() {
		speed = 10.f;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			sprite.move(speed);
		}
	}
	sf::Sprite getSprite() { return sprite; }
};
