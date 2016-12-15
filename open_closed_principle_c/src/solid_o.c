/*
 ============================================================================
 Name        : solid_o.c
 Author      : ayulit
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "DrawAllShapes.h"

int main(void) {

	struct Circle circle = {0,15};
	struct Square square = {1,20};

	struct Shape circleShape = {0};
	struct Shape squareShape = {1};

	struct Shape* shapePtr1 = &circleShape;
	struct Shape* shapePtr2 = &squareShape;


	ShapePtr list[] = {shapePtr1,shapePtr2};


	puts("Hello World"); /* prints Hello World */

	DrawAllShapes(list,2);



	return EXIT_SUCCESS;

}
