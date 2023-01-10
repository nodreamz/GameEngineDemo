#pragma once

#include "IApplication.hpp"

namespace My {
	class BaseApplication: implements IApplication {
	public:
		virtual int Initialize() = 0;
		virtual void Finalize() = 0;
		virtual void Tick() = 0;

		virtual bool IsQuit() = 0;

	protected:
		bool m_bQuit;
	};
}