

#ifndef EXERCICE3_VACHE_H_
#define EXERCICE3_VACHE_H_
#include"Animal.h"
class Vache:public Animal {
public:
	void crier() const override;
	Vache();
	virtual ~Vache();
};

#endif /* EXERCICE3_VACHE_H_ */
