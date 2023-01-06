#pragma once

#include "Interface.hpp"

namespace My {
	class IRuntimeModule {
	public:
		virtual ~IRuntimeModule() {};

		virtual int Initialize() = 0;  //��ʼ��ģ��
		virtual void Finalize() = 0;
		virtual void Tick() = 0;

	};
}