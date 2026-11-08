#ifndef EXERCICE3_ANIMAL_H_
#define EXERCICE3_ANIMAL_H_

class Animal {
public:
	Animal();
	virtual void crier() const;
	virtual void info() const;
	virtual ~Animal();
};

#endif /* EXERCICE3_ANIMAL_H_ */
