#include "Ball.h"
#include "Game.h"

Ball::Ball()
{
	TheTextureManager::Instance()->load("../Assets/textures/Circle.png",
		"ball", TheGame::Instance()->getRenderer());
}
Ball::~Ball()
{
}

void Ball::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("ball", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}
