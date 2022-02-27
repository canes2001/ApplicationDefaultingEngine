#include "SimulationFileReader.h"

#include "AbstractSimulationBuilder.h"
#include "Simulation.h"

SimulationFileReader::SimulationFileReader(const std::string& filePath, std::unique_ptr<AbstractSimulationBuilder> builder)
	:m_builder(std::move(builder))
{
}

SimulationFileReader::~SimulationFileReader() = default;

std::unique_ptr<Simulation> SimulationFileReader::buildAndGetSimulation()
{
	std::cout << "Reading and constructing..." << std::endl;
	m_builder->buildSimulation();

	return std::move(m_builder->getSimulation());
}