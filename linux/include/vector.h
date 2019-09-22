#pragma once

class vector {
private:
	float x, y;
public:
	vector(){};
	vector(float, float);
	float getx();
	float gety();
	~vector() {};
};
