#include "RoboticForm.h"


using namespace System::Windows::Forms;

namespace Robotics_T1
{
	
	void main(void) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew Robotics_T1::RoboticForm);
	}
}
//[MTAThread]

