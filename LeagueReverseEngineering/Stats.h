#pragma once

class Stats
{
private:
    int health;
    int mana; // There are champions that dont have mana :: create a possible nulable property
    float lifeSteal;
    int physicalDamage;
    int magicDamage;
    int physicalShield;
    int magicResistance;
    float attackSpeed;
    float cdr; // cooldown reduction
    float critical;
    int movementSpeed;

public:
    // Get and Setters
    int GetHealth() const;
    void SetHealth(int health);

    int GetMana() const;
    void SetMana(int mana);

    float GetLifeSteal() const;
    void SetLifeSteal(float lifeSteal);

    int GetPhysicalDamage() const;
    void SetPhysicalDamage(int physicalDamage);

    int GetMagicDamage() const;
    void SetMagicDamage(int magicDamage);

    int GetPhysicalShield() const;
    void SetPhysicalShield(int physicalShield);

    int GetMagicResistance() const;
    void SetMagicResistance(int magicResistance);

    float GetAttackSpeed() const;
    void SetAttackSpeed(float attackSpeed);

    float GetCDR() const;
    void SetCDR(float cdr);

    float GetCritical() const;
    void SetCritical(float critical);

    int GetMovementSpeed() const;
    void SetMovementSpeed(int movementSpeed);
};