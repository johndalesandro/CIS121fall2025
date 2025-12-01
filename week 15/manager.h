#pragma once
#include "Employee.h"

class Manager : public Employee
{
public:
    float Long_Term_Bonus();  // 50% extra
    float Bonus() override;   // override base class bonus
};