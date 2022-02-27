#ifndef WaterSimulationBuilder_h
#define WaterSimulationBuilder_h

#include "AbstractSimulationBuilder.h"

/*
* The WaterSimulationBuilder class is a derived class that creates and configures simulations specific to our simulations in the water and environmental
* industry.  This class will set physics/properties unique and specific to water.
*/
class WaterSimulationBuilder : public AbstractSimulationBuilder
{
public:
	WaterSimulationBuilder();
	~WaterSimulationBuilder() = default;

protected:
	void applyDefaults() override;
	void convert() override;
};

#endif
