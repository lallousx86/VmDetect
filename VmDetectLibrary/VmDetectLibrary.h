// VmDetectLibrary.h

#pragma once

#include "DetectVM.h"

using namespace System;

namespace COM
{
	namespace Tools
	{
		namespace VMDetect
		{
			[Microsoft::VisualBasic::CompilerServices::StandardModuleAttribute]
			public __gc __sealed class VMDetect
			{
			private:
				VMDetect()
				{
					//Do not let you to use it!!!
				}
			public:
				__property static System::Boolean get_IsInsideVPC()
				{
					if (::IsInsideVPC())
					{
						return true;
					}
					else
					{
						return false;
					}
				}

				__property static System::Boolean get_IsInsideVMWare()
				{
					if (::IsInsideVMWare())
					{
						return true;
					}
					else
					{
						return false;
					}
				}
			};
		}
	}
}
