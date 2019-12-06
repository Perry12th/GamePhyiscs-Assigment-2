#include "Brick.h"
#include "Game.h"

Brick::Brick()
{
	TheTextureManager::Instance()->load("../Assets/textures/brick.png",
		"brick", TheGame::Instance()->getRenderer());
}
Brick::~Brick()
{
}

void Brick::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("brick", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}
