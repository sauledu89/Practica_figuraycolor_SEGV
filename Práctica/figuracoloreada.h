#pragma once
#include "prerequisites.h"
#include "Figura.h"
#include "Color.h"

class FiguraColoreada : public figura, public Color {
public:
	void dibujarYColorear() {
		 {
			Dibujar(); //accede a dibujar de figura 
			aplicarcolor(); // accede a aplicarColor() de Color
		}

	}
};
