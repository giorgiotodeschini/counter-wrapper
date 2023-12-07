#pragma once

#include "../Counter/Counter.h"

using namespace System;

namespace CounterNet {
	public ref class CounterWrapper
	{
	private:
		Counter* m_nativeCounterObject;

	public:		
		CounterWrapper();
		CounterWrapper(double initialValue);
		!CounterWrapper();
		~CounterWrapper();

		double Add();
		double Add(double value);
		double Sub();
		double Sub(double value);

		property double Value
		{
			double get();
			void set(double value);
		}
	};
}