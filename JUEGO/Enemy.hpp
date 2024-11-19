#pragma once
#include "Personaje.h"


class Enemy : public Personaje {
private:
    sf::Color color;                // Color del enemigo
    int dead;                       // Estado de vida (0 = vivo, 1 = muerto)
    unsigned short direction;       // Dirección de movimiento (0 = derecha, 1 = izquierda)
    unsigned short movementPattern; // Patrón de movimiento (0 = horizontal, 1 = zigzag, 2 = circular, 3 = descendente)
    unsigned int step;              // Contador para los patrones de movimiento basados en tiempo

public:
    // Constructores
    Enemy();
    Enemy(sf::Texture& texture, unsigned short fx, unsigned short fy, unsigned short spd);

    // Métodos
    void draw(sf::RenderWindow& window) override;
    void update() override;

    void set_dead(int i);
    unsigned short get_dead() const;

    void setColor(sf::Color color);
    sf::Color getColor() const;

    sf::Vector2u get_texture_size() const;
	void setMovementPattern(unsigned short pattern);
};