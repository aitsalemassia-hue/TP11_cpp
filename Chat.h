/*
 * Chat.h
 *
 *  Created on: 5 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE3_CHAT_H_
#define EXERCICE3_CHAT_H_
#include"Animal.h"
class Chat :public Animal{
public:
	void crier() const override;
	Chat();
	virtual ~Chat();
};

#endif /* EXERCICE3_CHAT_H_ */
