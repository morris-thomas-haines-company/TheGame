/********************************************************************
 *	RectF.cpp														*
 *	Copyright 2020 MTH Company <http://www.morristhomashaines.com>	*
 ********************************************************************/

#include "RectF.h"

RectF::RectF(float left_in, float top_in, float right_in, float bottom_in)
{
	left = left_in;
	top = top_in;
	right = right_in;
	bottom = bottom_in;
}

RectF::RectF(const Vec2& topLeft, const Vec2& bottomRight)
	:
	RectF(topLeft.x, topLeft.y, bottomRight.x, bottomRight.y)
{
}

RectF::RectF(const Vec2& topLeft, float width, float height)
	:
	RectF(topLeft, Vec2(topLeft.x + width, topLeft.y + height))
{
}

// check overlap with other RectF
bool RectF::IsCollidingWith(const RectF& other)
{
	return top < other.bottom && left < other.right &&
		bottom > other.top && right > other.left;
}

RectF RectF::FromCenter(const Vec2& center, float halfWidth, float halfHeight)
{
	return RectF(Vec2(center.x - halfWidth, center.y - halfHeight),
		Vec2(center.x + halfWidth, center.y + halfHeight));
}
