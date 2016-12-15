/*
 * DrawAllShapes.h
 *
 *  Created on: Dec 15, 2016
 *      Author: alitvin
 */

#ifndef DRAWALLSHAPES_H_
#define DRAWALLSHAPES_H_


#include "Circle.h"
#include "Square.h"

typedef struct Shape* ShapePtr;

void DrawAllShapes(ShapePtr list[], int n);

#endif /* DRAWALLSHAPES_H_ */
