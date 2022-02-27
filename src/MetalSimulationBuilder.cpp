#include "MetalSimulationBuilder.h"

#include "Simulation.h"

MetalSimulationBuilder::MetalSimulationBuilder()
	:AbstractSimulationBuilder()
{
}

void MetalSimulationBuilder::applyDefaults()
{
	std::cout << "Apply metal specific simulation defaults" << std::endl;

	m_simulation->setApplication("Metal");
	m_simulation->setProcess(2); 
	m_simulation->setSubprocess(1);

	// Do more logic specific to metal....
}

void MetalSimulationBuilder::convert()
{
	std::cout << "Applying conversions from previous versions specific to metal simulations" << std::endl;
}