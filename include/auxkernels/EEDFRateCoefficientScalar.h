/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#pragma once

#include "AuxScalarKernel.h"
#include "SplineInterpolation.h"
#include "BoltzmannSolverScalar.h"

class EEDFRateCoefficientScalar : public AuxScalarKernel
{
public:
  EEDFRateCoefficientScalar(const InputParameters & parameters);

  static InputParameters validParams();

protected:
  virtual Real computeValue();

  const BoltzmannSolverScalar & _data;
  int _reaction_number;
  bool _sample_value;
  const VariableValue & _sampler_var;
};
