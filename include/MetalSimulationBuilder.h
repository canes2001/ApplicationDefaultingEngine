#ifndef MetalSimulationBuilder_h
#define MetalSimulationBuilder_h

#include "AbstractSimulationBuilder.h"

/*
* The MetalSimulationBuilder class is a derived class that creates and configures simulations specific to our simulations in the metal casting
* industry.  This class will set physics/properties unique and specific types of metal and metal casting processes.
*/
class MetalSimulationBuilder : public AbstractSimulationBuilder
{
public:
	MetalSimulationBuilder();
	~MetalSimulationBuilder() = default;

protected:
	void applyDefaults() override;
	void convert() override;
};

#endif
