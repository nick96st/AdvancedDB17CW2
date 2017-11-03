#include "Implementation.hpp"
#include <iostream>

//////////////////// Nested Loop Joins ////////////////////

std::vector<std::string> getQualifyingBusinessesIDsVector(Businesses const& b, float latMin,
																													float latMax, float longMin,
																													float longMax) {
	std::cout << "function getQualifyingBusinessesIDsVector not implemented" << endl;
	throw std::logic_error("unimplemented");
}

std::vector<unsigned long> performNestedLoopJoinAndAggregation(Reviews const& r,
																												std::vector<std::string> const& qualies) {
	std::cout << "function performNestedLoopJoinAndAggregation not implemented" << endl;
	throw std::logic_error("unimplemented");
}

//////////////////// Hash Join ////////////////////

std::unordered_set<std::string> getQualifyingBusinessesIDs(Businesses const& b, float latMin,
																													 float latMax, float longMin,
																													 float longMax) {
	std::cout << "function getQualifyingBusinessesIDs not implemented" << endl;
	throw std::logic_error("unimplemented");
}

std::vector<unsigned long>
aggregateStarsOfQualifyingBusinesses(Reviews const& r,
																		 std::unordered_set<std::string> const& qualifyingBusinesses) {
		std::cout << "function aggregateStarsOfQualifyingBusinesses not implemented" << endl;
	throw std::logic_error("unimplemented");
}
