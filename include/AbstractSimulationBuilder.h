#ifndef AbstractSimulationBuilder_h
#define AbstractSimulationBuilder_h

#include <iostream>
#include <memory>

class Simulation;

/*
* The AbstractSimulationBuilder class is an abstract class that defines the interface for building application specific
* simulations
*/
class AbstractSimulationBuilder
{
public:
	AbstractSimulationBuilder();
	virtual ~AbstractSimulationBuilder() = 0;

	void buildSimulation();

	std::unique_ptr<Simulation> getSimulation();

protected:
	virtual void applyDefaults() = 0;
	virtual void convert() = 0;

	std::unique_ptr<Simulation> m_simulation;
};

#endif
