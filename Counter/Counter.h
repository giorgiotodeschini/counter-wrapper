#pragma once

#ifdef COUNTER_EXPORTS
#define DLLIMPEXP __declspec(dllexport)
#else
#define DLLIMPEXP
#endif

class DLLIMPEXP Counter
{
protected:
	double m_value;

public:
	Counter(double initialValue = 0.0);

	double Add(double value = 1.0);
	double Sub(double value = 1.0);

	double GetValue();
	void SetValue(double value);
};

