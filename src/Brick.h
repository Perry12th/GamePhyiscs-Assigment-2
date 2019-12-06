#pragma once

#include "DisplayObject.h"
#include "TextureManager.h"

class Brick :
	public DisplayObject
{
public:
	Brick();
	~Brick();

	// Inherited via GameObject
	void draw() override;

	void update() override {};

	void clean() override {};
};

