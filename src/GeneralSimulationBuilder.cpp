#include "GeneralSimulationBuilder.h"

#include "Simulation.h"

GeneralSimulationBuilder::GeneralSimulationBuilder()
	:AbstractSimulationBuilder()
{
}

void GeneralSimulationBuilder::applyDefaults()
{
	std::cout << "Apply defaults for general simulations" << std::endl;

	m_simulation->setApplication("General");
	m_simulation->setProcess(0);
	m_simulation->setSubprocess(0);
}

void GeneralSimulationBuilder::convert()
{
	std::cout << "Applying conversions for general simulations" << std::endl;
}