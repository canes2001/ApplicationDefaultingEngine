#include "AbstractSimulationBuilder.h"

#include "Simulation.h"

#include <utility>

AbstractSimulationBuilder::AbstractSimulationBuilder()
	:m_simulation{nullptr}
{
	m_simulation = std::make_unique<Simulation>();
}

AbstractSimulationBuilder::~AbstractSimulationBuilder() = default;

std::unique_ptr<Simulation> AbstractSimulationBuilder::getSimulation()
{
	return std::move(m_simulation);
}

void AbstractSimulationBuilder::buildSimulation()
{
	this->convert();
	this->applyDefaults();
}