#include "Implementation.hpp"
#include <iostream>

using namespace std;
//////////////////// Nested Loop Joins ////////////////////

std::vector<std::string> getQualifyingBusinessesIDsVector(Businesses const& b, float latMin,
                                                        float latMax, float longMin,
                                                        float longMax) {
	// This function needs to find all businesses that have within the
	// specified latitude/longitude range and store their ids in the result vector
    vector<std::string>* filtered_ids = new std::vector<string>();
    std::vector<double>::const_iterator iter_lat = b.latitudes.begin(), iter_long = b.longitudes.begin();
    for (auto& business : b.ids) {
        if(*iter_lat >= latMin && *iter_lat <= latMax && *iter_long >= longMin && *iter_long <= longMax) {
            filtered_ids->push_back(business);
            std::cout<<"on business id:"<<business<<endl;
        }
        // iterators.next()
        iter_lat = std::next(iter_lat);
        iter_long = std::next(iter_long);
    }
//
//	std::cout << "function getQualifyingBusinessesIDsVector not implemented" << std::endl;
//	throw std::logic_error("unimplemented");
    return *filtered_ids;
}

std::vector<unsigned long>
performNestedLoopJoinAndAggregation(Reviews const& r, std::vector<std::string> const& qualifyingBusinessesIDs) {
	// The second parameter of this function is the vector of qualifying
	// business ids you have created in the first function

    std::vector<unsigned long>* counted_stars = new std::vector<unsigned long>();
    // nullify initial count
    for(int i=0;i<=5;i++) { counted_stars->[i] = 0;}
    const unsigned long N = r.business_ids.size();
    const unsigned long M = qualifyingBusinessesIDs.size();
    std::cout<<"works until loops"<<endl;

    for (int i = 0; i < N; i++) {
        std::string curr_id = r.business_ids[i];
        for(int j; j< M;j++) {
            if(curr_id == qualifyingBusinessesIDs[j]) {
                counted_stars->[r.stars[i]]++;
            }
        }
    }

    return *counted_stars;
	// This function needs to find all reviews that have business_ids in
	// the qualifyingBusinessesIDs vector and build a histogram over their stars
	// The return value is that histogram

//	std::cout << "function performNestedLoopJoinAndAggregation not implemented" << std::endl;
//	throw std::logic_error("unimplemented");
}

//////////////////// Hash Join ////////////////////

std::unordered_set<std::string> getQualifyingBusinessesIDs(Businesses const& b, float latMin,
                                                         float latMax, float longMin,
                                                         float longMax) {
	// This function needs to find all businesses that have within the
	// specified latitude/longitude range and store their ids in the result set
	std::cout << "function getQualifyingBusinessesIDs not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}

std::vector<unsigned long>
aggregateStarsOfQualifyingBusinesses(Reviews const& r,
                                     std::unordered_set<std::string> const& qualifyingBusinesses) {
	// The second parameter of this function is the set of qualifying
	// business ids you have created in the first function

	// This function needs to find all reviews that have business_ids in
	// the qualifyingBusinessesIDs vector and build a histogram over their stars
	// The return value is that histogram
	std::cout << "function aggregateStarsOfQualifyingBusinesses not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}
