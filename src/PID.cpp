#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  /*
  * Errors
  */
  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;

  /*
  * Coefficients
  */ 
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  static double prev_cte = cte;
  static double int_cte = 0;
    
  double diff_cte = cte - prev_cte;
  prev_cte = cte;
  int_cte += cte;

  p_error = -Kp * cte;
  i_error = -Ki * int_cte;
  d_error = -Kd * diff_cte;
}

double PID::TotalError() {
  return p_error + i_error + d_error;
}

