#pragma once

#include "Interface.hpp"

namespace My {
	Interface IRuntimeModule {
	public:
		virtual ~IRuntimeModule() {};

		virtual int Initialize() = 0;  //��ʼ��ģ��
		virtual void Finalize() = 0;  // ģ�����������

		virtual void Tick() = 0;
	};
}