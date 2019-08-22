#pragma once
#include "WBScene.h"
#include "Ext/SimplexNoise.h"

class RingsScene : public WBScene
{
private:
	sf::Clock clock;
	double time;
	double last_bass = 0.0;
public:	
	void draw();
	void update();
	void setParamsToDefault();
	RingsScene();
	~RingsScene();
};

