#include "CounterWrapper.h"

CounterNet::CounterWrapper::CounterWrapper()
{
	m_nativeCounterObject = new Counter();
}

CounterNet::CounterWrapper::CounterWrapper(double initialValue)
{	
	m_nativeCounterObject = new Counter(initialValue);
}

CounterNet::CounterWrapper::!CounterWrapper()
{
	delete m_nativeCounterObject;
	m_nativeCounterObject = 0;
}

CounterNet::CounterWrapper::~CounterWrapper()
{
	delete m_nativeCounterObject;
	m_nativeCounterObject = 0;
}

double CounterNet::CounterWrapper::Add()
{
	return m_nativeCounterObject->Add();
}

double CounterNet::CounterWrapper::Add(double value) 
{
	return m_nativeCounterObject->Add(value);
}

double CounterNet::CounterWrapper::Sub()
{
	return m_nativeCounterObject->Sub();
}

double CounterNet::CounterWrapper::Sub(double value) 
{
	return m_nativeCounterObject->Sub(value);
}

double CounterNet::CounterWrapper::Value::get()
{
	return m_nativeCounterObject->GetValue();
}

void CounterNet::CounterWrapper::Value::set(double value)
{
	m_nativeCounterObject->SetValue(value);
}