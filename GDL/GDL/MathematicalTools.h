/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */

#ifndef MATHEMATICALTOOLS_H
#define MATHEMATICALTOOLS_H

namespace GDpriv
{

/**
 * \brief Mathematical tools only used by GD events generated code.
 */
namespace MathematicalTools
{

double GD_API Minimal(double expression1, double expression2);
double GD_API Maximal(double expression1, double expression2);
double GD_API abs(double expression);
double GD_API acos(double expression);
double GD_API asin(double expression);
double GD_API acosh(double expression);
double GD_API asinh(double expression);
double GD_API atan(double expression);
double GD_API atan2(double y, double x);
double GD_API atanh(double expression);
double GD_API cbrt(double expression);
double GD_API ceil(double expression);
double GD_API floor(double expression);
double GD_API cos(double expression);
double GD_API cosh(double expression);
double GD_API cot(double expression);
double GD_API sec(double expression);
double GD_API csc(double expression);
double GD_API exp(double expression);
double GD_API Round(double expression);
double GD_API log(double expression);
double GD_API log2(double expression);
double GD_API log10(double expression);
double GD_API nthroot(double expression, double n);
double GD_API pow(double expression, double n);
double GD_API sin(double expression);
double GD_API sinh(double expression);
double GD_API sign(double expression);
double GD_API sqrt(double expression);
double GD_API tan(double expression);
double GD_API tanh(double expression);
double GD_API trunc(double expression);
double GD_API mod(double x, double y);

}
}

#endif // MATHEMATICALTOOLS_H
