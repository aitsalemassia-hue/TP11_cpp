

#ifndef EXERCICE3_CHIEN_H_
#define EXERCICE3_CHIEN_H_
#include"Animal.h"
class Chien :public Animal{

public:
	void crier() const override;
	Chien();
	virtual ~Chien();
};

#endif /* EXERCICE3_CHIEN_H_ */
