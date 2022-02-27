#include "SimulationBuilderFactory.h"

#ifdef METAL
#include "MetalSimulationBuilder.h"
#elif defined WATER
#include "WaterSimulationBuilder.h"
#else
#include "GeneralSimulationBuilder.h"
#endif


std::unique_ptr<AbstractSimulationBuilder> SimulationBuilderFactory::getSimulationBuilder()
{
#ifdef METAL
	return std::move(std::make_unique<MetalSimulationBuilder>());
#elif defined WATER
	return std::move(std::make_unique<WaterSimulationBuilder>());
#else
	return std::move(std::make_unique<GeneralSimulationBuilder>());
#endif
}