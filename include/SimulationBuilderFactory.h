#ifndef SimulationBuilderFactory_h
#define SimulationBuilderFactory_h

#include <memory>

#include "AbstractSimulationBuilder.h"

class SimulationBuilderFactory
{
public:
	SimulationBuilderFactory() = delete;
	~SimulationBuilderFactory() = default;

	static std::unique_ptr<AbstractSimulationBuilder> getSimulationBuilder();
};

#endif
