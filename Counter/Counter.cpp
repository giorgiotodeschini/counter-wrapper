#include "pch.h"
#include "Counter.h"

Counter::Counter(double initialValue) 
{
	m_value = initialValue;
}

double Counter::Add(double value)
{
	m_value += value;
	return m_value;
}

double Counter::Sub(double value)
{
	m_value -= value;
	return m_value;
}

double Counter::GetValue()
{
	return m_value;
}

void Counter::SetValue(double value)
{
	m_value = value;
}