#pragma once
#include "Spotlight.h"
#include "ArticulatedPlane.h"
#include "LightBall.h"
#include <vector>
#include "Toggle.h"

class Prop
{
public:
	Prop();
	~Prop();


	void newLightBall(int _light);
	void newSpotlight(int _light, Toggle* _toggle);
	void newPlane(int segments = 1, int width = 1, int length = 1, float texStartX = 0, float texStartY = 0, float texEndX = 1, float texEndY = 1);
	void newPlane(vector<float> holeyCoordinates, int segments = 1, int width = 1, int length = 1, float texStartX = 0, float texStartY = 0, float texEndX = 1, float texEndY = 1);
	Spotlight* getSpotlight(int index);
	LightBall* getLightBall(int index);
	ArticulatedPlane* getPlane(int index);

private:
	std::vector<Spotlight*> spotlights;
	std::vector<LightBall*> lightBalls;
	std::vector<ArticulatedPlane*> articulatedPlanes;
};

