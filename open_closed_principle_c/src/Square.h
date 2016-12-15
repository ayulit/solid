/*
 * Square.h
 *
 *  Created on: Dec 15, 2016
 *      Author: alitvin
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Point.h"
#include "Shape.h"

struct Square {
	enum ShapeType type;
	double side;
	/*Point topLeft;*/
};

void DrawSquare(struct Square*);

#endif /* SQUARE_H_ */
