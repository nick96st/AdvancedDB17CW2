#include "Implementation.hpp"
#include <iostream>

using namespace std;
//////////////////// Nested Loop Joins ////////////////////

std::vector<std::string> getQualifyingBusinessesIDsVector(Businesses const& b, float latMin,
																													float latMax, float longMin,
																													float longMax) {
	std::cout << "function getQualifyingBusinessesIDsVector not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}

std::vector<unsigned long> performNestedLoopJoinAndAggregation(Reviews const& r,
																												std::vector<std::string> const& qualies) {
	std::cout << "function performNestedLoopJoinAndAggregation not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}

//////////////////// Hash Join ////////////////////

std::unordered_set<std::string> getQualifyingBusinessesIDs(Businesses const& b, float latMin,
																													 float latMax, float longMin,
																													 float longMax) {
	std::cout << "function getQualifyingBusinessesIDs not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}

std::vector<unsigned long>
aggregateStarsOfQualifyingBusinesses(Reviews const& r,
																		 std::unordered_set<std::string> const& qualifyingBusinesses) {
		std::cout << "function aggregateStarsOfQualifyingBusinesses not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}
