#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado{
	private:
		float lado;

	public:
		Quadrado();
		Quadrado(float);
		Quadrado(float,int);
		~Quadrado();
		bool validaLado();
		float perimetro();
		float area();
		float diagonal();
		float getLado();
};

#endif
