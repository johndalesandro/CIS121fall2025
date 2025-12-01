#include "Manager.h"

// 50% extra long-term bonus
float Manager::Long_Term_Bonus()
{
    return m_salary * 0.50f;
}

// Overrides base class Bonus()
float Manager::Bonus()
{
    m_bonus = m_salary * 0.50f;
    return m_bonus;
}