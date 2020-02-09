/********************************************************************
 *	Vec2.h															*
 *	Copyright 2020 MTH Company <http://www.morristhomashaines.com>	*
 ********************************************************************/

#pragma once

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x_in, float y_in);
	Vec2 operator*(float scalar) const;
	Vec2& operator*=(float scalar);
	Vec2 operator+(const Vec2& addend) const;
	Vec2& operator+=(const Vec2& addend);
	Vec2 operator-(const Vec2& subtrahend) const;
	Vec2& operator-=(const Vec2& subtrahend);
	float GetLength() const;
	float GetLengthSq() const;
	Vec2& Normalize();
	Vec2 GetNormalized() const;
public:
	float x;
	float y;
};