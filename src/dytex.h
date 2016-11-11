/*
 * dytex.h
 *
 *  Created on: 30-Oct-2016
 *      Author: amar
 */

#ifndef SRC_DYTEX_H_
#define SRC_DYTEX_H_

#include "std_includes.h"


class dytex_options
{
	public:
		int m;					// state-space dimension 				dim(X_t)
		int n;					// observation-space dimension 			dim(Y_t)

		//TODO - add co-variance matrix features

		dytex_options(int m,int n)
		{
			this->m = m;
			this->n = n;
		}
};

class dytex
{
	public:
		dytex_options dt_opt;

		Mat  	Y_mean,			// Observation mean 					(Y_mean)
				A,				// Transition Matrix 					(X(t+1) = A*X(t) + V(t))
				C,				// Observation Matrix					(Y(t) = C*X(t) + W(t))
				mu0;			// Initial state Matrix					(X(0) = N(mu0,S), N-->Normal)

		cov_matrix



};



#endif /* SRC_DYTEX_H_ */
