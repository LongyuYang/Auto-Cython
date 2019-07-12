#pragma once
#ifdef VECTOR_EXPORTS
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif


class VECTOR_API vector {
private:
	float x, y;
public:
	vector(){};
	vector(float, float);
	float getx();
	float gety();
	~vector() {};
};
