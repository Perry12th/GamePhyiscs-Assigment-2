#pragma once

#include "DisplayObject.h"
#include "TextureManager.h"

class Ball :
	public DisplayObject
{
public:
	Ball();
	~Ball();

	// Inherited via GameObject
	void draw() override;

	void update() override {};

	void clean() override {};
};

