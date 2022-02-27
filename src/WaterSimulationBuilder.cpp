#include "WaterSimulationBuilder.h"

#include "Simulation.h"

WaterSimulationBuilder::WaterSimulationBuilder()
	:AbstractSimulationBuilder()
{
}

void WaterSimulationBuilder::applyDefaults()
{
	std::cout << "Apply water specific simulation defaults" << std::endl;

	m_simulation->setApplication("Water");
	m_simulation->setProcess(1);
	m_simulation->setSubprocess(1);

	// Do more logic specific to water....
}

void WaterSimulationBuilder::convert()
{
	std::cout << "Applying conversions from previous versions specific to water simulations" << std::endl;
}