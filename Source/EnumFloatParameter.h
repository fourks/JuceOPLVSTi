#pragma once
#include "FloatParameter.h"
class EnumFloatParameter :
	public FloatParameter
{
public:
	EnumFloatParameter(String name, StringArray values);
	~EnumFloatParameter(void);
	String getParameterText(void);
	int getParameterIndex(void);
private:
	StringArray values;
};

