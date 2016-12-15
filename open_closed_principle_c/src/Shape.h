/*
 * Shape.h
 *
 *  Created on: Dec 15, 2016
 *      Author: alitvin
 */

#ifndef SHAPE_H_
#define SHAPE_H_

enum ShapeType {
	circle, /* 1 */
	square  /* 2 */
};

struct Shape {
	enum ShapeType type;
};

#endif /* SHAPE_H_ */
