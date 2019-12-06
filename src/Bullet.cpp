#include "Bullet.h"
#include "Game.h"

Bullet::Bullet()
{
	TheTextureManager::Instance()->load("../Assets/textures/bullet.png",
		"bullet", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("bullet");
	setWidth(size.x);
	setHeight(size.y);
	setIsColliding(false);
	setType(BULLET);
}
Bullet::~Bullet()
{
}

void Bullet::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("bullet", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Bullet::update()
{
	m_move();
	m_checkBounds();
}

void Bullet::reset()
{
	setPosition(glm::vec2(Util::RandomRange(getWidth() * 0.5f, 800.0f - getWidth()), Util::RandomRange(-getHeight(), -400.0f - getHeight())));
	setVelocity(glm::vec2(0.0f, 1.0f));
}

void Bullet::m_move()
{
	glm::vec2 newPosition = getPosition() + getVelocity() * 5.0f;
	setPosition(newPosition);
}

void Bullet::m_checkBounds()
{
	if (getPosition().y > 600.0f + (getHeight() * 0.5f))
	{
		reset();
	}
}


