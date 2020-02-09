/********************************************************************
 *	Vec2.cpp														*
 *	Copyright 2020 MTH Company <http://www.morristhomashaines.com>	*
 ********************************************************************/

#include "Vec2.h"
#include <cmath>

Vec2::Vec2(float x_in, float y_in)
	:
	x(x_in),
	y(y_in)
{
}

// vector scaling
Vec2 Vec2::operator*(float scalar) const
{
	return Vec2(x * scalar, y * scalar);
}

// vector scaling
Vec2& Vec2::operator*=(float scalar)
{
	return *this = *this * scalar;
}

// vector addition
Vec2 Vec2::operator+(const Vec2& addend) const
{
	return Vec2(x + addend.x, y + addend.y);
}

// vector addition
Vec2& Vec2::operator+=(const Vec2& addend)
{
	return *this = *this + addend;
}

// vector subtraction
Vec2 Vec2::operator-(const Vec2& subtrahend) const
{
	return Vec2(x - subtrahend.x, y - subtrahend.y);
}

// vector subtraction
Vec2& Vec2::operator-=(const Vec2& subtrahend)
{
	return *this = *this - subtrahend;
}

// vector length
float Vec2::GetLength() const
{
	return std::sqrt(GetLengthSq());
}

// vector length squared
float Vec2::GetLengthSq() const
{
	return x * x + y * y;
}

// unit vector
Vec2& Vec2::Normalize()
{
	return *this = GetNormalized();
}

Vec2 Vec2::GetNormalized() const
{
	const float len = GetLength();
	if (len != 0.0f)
	{
		return *this * (1.0f / len);
	}
	return *this;
}