#include "Stats.h"

int Stats::GetHealth() const { return health; }

void Stats::SetHealth(int health) { this->health = health; }

int Stats::GetMana() const { return mana; };
void Stats::SetMana(int mana) { this->mana = mana; }

float Stats::GetLifeSteal() const { return lifeSteal; };
void Stats::SetLifeSteal(float lifeSteal) { this->lifeSteal = lifeSteal; };

int Stats::GetPhysicalDamage() const { return physicalDamage; };
void Stats::SetPhysicalDamage(int physicalDamage) { this->physicalDamage = physicalDamage; };

int Stats::GetMagicDamage() const { return magicDamage; };
void Stats::SetMagicDamage(int magicDamage) { this->magicDamage = magicDamage; };

int Stats::GetPhysicalShield() const { return physicalShield; };
void Stats::SetPhysicalShield(int physicalShield) { this->physicalShield = physicalShield; };

int Stats::GetMagicResistance() const { return magicResistance; };
void Stats::SetMagicResistance(int magicResistance) { this->magicResistance = magicResistance; };

float Stats::GetAttackSpeed() const { return attackSpeed; };
void Stats::SetAttackSpeed(float attackSpeed) { this->attackSpeed = attackSpeed; };

float Stats::GetCDR() const { return cdr; };
void Stats::SetCDR(float cdr) { this->cdr = cdr; };

float Stats::GetCritical() const { return critical; };
void Stats::SetCritical(float critical) { this->critical = critical; };

int Stats::GetMovementSpeed() const { return movementSpeed; };
void Stats::SetMovementSpeed(int movementSpeed) { this->movementSpeed = movementSpeed; };