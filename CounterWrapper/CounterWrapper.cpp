#include "CounterWrapper.h"

CounterNet::CounterWrapper::CounterWrapper()
{
	m_nativeCounterObject = new Counter();
}

CounterNet::CounterWrapper::CounterWrapper(Double initialValue)
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

Double CounterNet::CounterWrapper::Add(Double value) 
{
	return m_nativeCounterObject->Add(value);
}

Double CounterNet::CounterWrapper::Sub(Double value) 
{
	return m_nativeCounterObject->Sub(value);
}

Double CounterNet::CounterWrapper::Value::get()
{
	return m_nativeCounterObject->GetValue();
}

void CounterNet::CounterWrapper::Value::set(Double value)
{
	m_nativeCounterObject->SetValue(value);
}