/*
 * Circle.h
 *
 *  Created on: Dec 15, 2016
 *      Author: alitvin
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Point.h"
#include "Shape.h"

struct Circle {
	enum ShapeType type;
	double radius;
	/*Point center;*/
};

void DrawCircle(struct Circle*);

#endif /* CIRCLE_H_ */
