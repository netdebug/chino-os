//
// Chino Thread
//
#pragma once
#include "../../libchino/chino.h"
#include <list.hpp>

namespace Chino
{
	namespace Thread
	{
		class ProcessManager
		{
			class Process
			{
			public:
			};
		public:
			void Initialize();

			HANDLE CreateProcess();
		private:
			//Chino::list<Process> _processes;
		};
	}
}