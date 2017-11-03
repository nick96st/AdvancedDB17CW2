#include "Implementation.hpp"

//////////////////// Nested Loop Joins ////////////////////

std::vector<std::string> getQualifyingBusinessesIDsVector(Businesses const& b, float latMin,
																													float latMax, float longMin,
																													float longMax) {
	throw "unimplemented";
}

std::vector<unsigned long> performNestedLoopJoinAndAggregation(Reviews const& r,
																												std::vector<std::string> const& qualies) {
	throw "unimplemented";
}

//////////////////// Hash Join ////////////////////

std::unordered_set<std::string> getQualifyingBusinessesIDs(Businesses const& b, float latMin,
																													 float latMax, float longMin,
																													 float longMax) {
	throw "unimplemented";
}

std::vector<unsigned long>
aggregateStarsOfQualifyingBusinesses(Reviews const& r,
																		 std::unordered_set<std::string> const& qualifyingBusinesses) {
	throw "unimplemented";
}
