
#include "DrawAllShapes.h"



void
DrawAllShapes(ShapePtr list[], int n) {

	int i;
	for (i = 0; i < n; i++) {
		ShapePtr s = list[i];

		switch (s->type) {
			case square:
				DrawSquare((struct Square*)s);
				break;
			case circle:
				DrawCircle((struct Circle*)s);
				break;
			default:
				break;
		}

	}
}



