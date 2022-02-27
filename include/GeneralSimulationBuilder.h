#ifndef GeneralSimulationBuilder_h
#define GeneralSimulationBuilder_h

#include "AbstractSimulationBuilder.h"

/*
* The GeneralSimulationBuilder class is a derived class that creates and configures simulations specific to our general physics
* simulation product (i.e. it is used in a multitude of applications (aerospace, welding, microfluidics, etc....)
*/
class GeneralSimulationBuilder : public AbstractSimulationBuilder
{
public:
	GeneralSimulationBuilder();
	~GeneralSimulationBuilder() = default;

protected:
	void applyDefaults() override;
	void convert() override;
};

#endif
