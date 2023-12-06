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
		CounterWrapper(Double initialValue);
		!CounterWrapper();
		~CounterWrapper();

		Double Add(Double value);
		Double Sub(Double value);

		property Double Value
		{
			Double get();
			void set(Double value);
		}
	};
}