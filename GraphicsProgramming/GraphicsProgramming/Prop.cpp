#include "Prop.h"



Prop::Prop()
{
	
}


Prop::~Prop()
{
	for (auto v : articulatedPlanes)
	{
		delete v;
	}
}

void Prop::newLightBall(int _light)
{
	LightBall* lightBall = new LightBall(_light);
	lightBalls.push_back(lightBall);
	return;
}

void Prop::newSpotlight(int _light, Toggle* _toggle)
{
	Spotlight* spotlight = new Spotlight(_light, _toggle);
	spotlights.push_back(spotlight);
	return;
}

void Prop::newPlane(int segments, int width, int length, float texStartX, float texStartY, float texEndX, float texEndY)
{
	ArticulatedPlane* plane = new ArticulatedPlane(segments, width, length, texStartX, texStartY, texEndX, texEndY);
	articulatedPlanes.push_back(plane);
	return;
}

void Prop::newPlane(vector<float> holeyCoordinates, int segments, int width, int length, float texStartX, float texStartY, float texEndX, float texEndY)
{
	ArticulatedPlane* plane = new ArticulatedPlane(holeyCoordinates, segments, width, length, texStartX, texStartY, texEndX, texEndY);
	articulatedPlanes.push_back(plane);
	return;
}

Spotlight * Prop::getSpotlight(int index)
{
	return spotlights.at(index);
}

ArticulatedPlane * Prop::getPlane(int index)
{
	return articulatedPlanes.at(index);
}

LightBall * Prop::getLightBall(int index)
{
	return lightBalls.at(index);
}

//ArticulatedPlane * Prop::newPlane(vector<float> holeyCoordinates, int segments, int width, int length, float texStartX, float texStartY, float texEndX, float texEndY)
//{
//	return nullptr;
//}
