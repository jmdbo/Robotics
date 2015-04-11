#include "stdafx.h"
#include "serial32.h"

namespace Robotics_T1{

	class Robot{
		private:
		public:
			int InitializeRobot(TCommPort *Cp);
			void move_one_axis(TCommPort *Cp, int axis, int steps);
			void move_one_axis_speed(TCommPort* Cp, int axis, int steps, int speed);
			void move_multiple_axis(TCommPort *Cp, int* steps);
			void move_multiple_axis_speed(TCommPort *Cp, int* steps, int* speed);
			void all_motor_status(TCommPort *Cp, char* steps);
			int degrees_to_steps(double degrees, int axis);
			int mm_to_steps(double distance);
			double steps_to_degrees(int steps, int axis);
			double stpes_to_mm(int steps);
			int direct_kinematic(float* theta, double* posAtt);
			void robot_control_routine(TCommPort *port);
			void digital_outputs(TCommPort *Cp, int* data);
			TCommPort* initialize_robot(void);
	};
}