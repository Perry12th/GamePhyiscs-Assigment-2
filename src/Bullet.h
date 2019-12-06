#pragma once
#include "DisplayObject.h"
#include "TextureManager.h"

class Bullet :
	public DisplayObject
{
public:
	Bullet();
	~Bullet();

	// Inherited via GameObject
	void draw() override;

	void update() override;

	void clean() override {};

	void reset();

private:
	void m_move();

	void m_checkBounds();
};
