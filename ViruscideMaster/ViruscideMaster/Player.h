#include "MoveableEntity.h"
#include <iostream>
using namespace std;


#pragma once
class Player : public MoveableEntity
{

public:
	float xPos;
	float yPos;
	Player(const sf::Vector2f& position, const sf::Vector2f& size, const float speed, const sf::Vector2i& movementDirection);
	Player();
	~Player();
	void drawPlayer();
	void movePlayer();
	void moveNorth();
	void moveEast();
	void moveWest();
	void moveSouth();
private:
	sf::Color m_startingColor;
	bool m_OverlappingTower = false;
	Entity m_player1;

	
public:
	bool OverlapTower() const;
	void setOverlapTower(const bool isOverlapping);
	sf::RectangleShape getMainHitbox() const;
};

