#pragma once
#include <cinder/Vector.h>
#include "UniformGrid.hpp"

/// Mathematical routines for UniformGrids of vectors or matrices
class UniformGridMath
{
public:
	/*! \brief Compute Jacobian of a vector field

	    \param jacobian - (output) UniformGrid of 3x3 matrix values.
	                        The matrix is a vector of vectors.
	                        Each component is a partial derivative with
	                        respect to some direction:
	                            j.a.b = d v.b / d a
	                        where a and b are each one of {x,y,z}.
	                        So j.x contains the partial derivatives with respect to x, etc.

	    \param vec - UniformGrid of 3-vector values

	*/
	static void ComputeJacobian( UniformGrid< glm::mat3 > & jacobian , const UniformGrid< glm::vec3 > & vec ) ;

	/*! \brief Compute curl of a vector field, from its Jacobian

	    \param curl - (output) UniformGrid of 3-vector values.

	    \param jacobian - UniformGrid of 3x3 matrix values.

	    \see ComputeJacobian.

	*/
	static void ComputeCurlFromJacobian( UniformGrid< glm::vec3 > & curl , const UniformGrid< glm::mat3 > & jacobian ) ;

private:
	UniformGridMath(); // Non-instantiable class.
	
};