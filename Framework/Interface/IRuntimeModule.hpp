#pragma once

#include "Interface.hpp"

namespace My {
	Interface IRuntimeModule {
	public:
		virtual ~IRuntimeModule() {};

		virtual int Initialize() = 0;  //初始化模块
		virtual void Finalize() = 0;  // 模块结束后清理

		virtual void Tick() = 0;
	};
}