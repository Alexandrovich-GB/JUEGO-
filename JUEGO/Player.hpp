#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "Bullets.hpp"
#include "Enemy.hpp"
#include "Personaje.h"
#include <vector>

class Player : public Personaje {
	//unsigned short x;
	unsigned int reload_time;
	unsigned int score;

	std::vector<Bullet> bullets;

	sf::Texture texture;
	sf::Texture bullet_texture;

	sf::Sprite sprite;
	sf::Sprite bullet_sprite;

	std::vector<Enemy> enemies;
	
public:
	Player();

	void draw(sf::RenderWindow& window) override;
	void update() override;

	int sizeBullets();
	std::vector<Bullet> returnBullets();
	void checkCollisions(std::vector<Enemy>& enemies);

	//unsigned short get_y() const;
	unsigned int returnScore() const;

};