#include "AgirlikGüncelle.h"

float* newWeight( double * agýrlýklar,  double * noktalar, float d, float sgnNet)
{
	static float actual[3];

	/*float w1 = agýrlýklar[(i-1) * 3 ] + 0.5*(d - sgnNet)*(float)noktalar[(j-1) * 4 ];
	float w2 = agýrlýklar[(i-1) * 3 + 1] + 0.5*(d - sgnNet)*(float)noktalar[(j-1) * 4 + 1];
	float w3 = agýrlýklar[(i-1) * 3 + 2] + 0.5*(d - sgnNet)*(float)noktalar[(j-1) * 4 + 2];*/

	float w1 = agýrlýklar[0] + 0.5*(d - sgnNet)*(float)noktalar[0];
	float w2 = agýrlýklar[1] + 0.5*(d - sgnNet)*(float)noktalar[1];
	float w3 = agýrlýklar[2] + 0.5*(d - sgnNet)*(float)noktalar[2];

	actual[0] = w1;
	actual[1] = w2;
	actual[2] = w3;

	return actual;
}
