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
    for(int i=0;i<=5;i++) { (*counted_stars).push_back(0);}
    const unsigned long N = r.business_ids.size();
    const unsigned long M = qualifyingBusinessesIDs.size();

    for (int i = 0; i < N; i++) {
        std::string curr_id = r.business_ids[i];
        double stars = r.stars[i];
        for(int j = 0; j< M;j++) {
            if(curr_id == qualifyingBusinessesIDs[j]) {
                (*counted_stars)[stars]++;
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
    std::unordered_set<std::string>* qualified_ids = new std::unordered_set<std::string>();
    std::vector<double>::const_iterator iter_lat = b.latitudes.begin(), iter_long = b.longitudes.begin();
    for (auto& business : b.ids) {
        if(*iter_lat >= latMin && *iter_lat <= latMax && *iter_long >= longMin && *iter_long <= longMax) {
            qualified_ids->insert(business);
        }
        // iterators.next()
        iter_lat = std::next(iter_lat);
        iter_long = std::next(iter_long);
    }
//	std::cout << "function getQualifyingBusinessesIDs not implemented" << std::endl;
//	throw std::logic_error("unimplemented");
    return *qualified_ids;
}

std::vector<unsigned long>
aggregateStarsOfQualifyingBusinesses(Reviews const& r,
                                     std::unordered_set<std::string> const& qualifyingBusinesses) {
	// The second parameter of this function is the set of qualifying
	// business ids you have created in the first function


    std::vector<unsigned long>* counted_stars = new std::vector<unsigned long>();
    // nullify initial count
    for(int i=0;i<=5;i++) { (*counted_stars).push_back(0);}
    const unsigned long N = r.business_ids.size();
    const unsigned long M = qualifyingBusinesses.size();

    for(int i = 0; i < N; i++) {
        std::string curr_id = r.business_ids[i];
        if(qualifyingBusinesses.find(curr_id) != qualifyingBusinesses.end()){
            double stars = r.stars[i];
            (*counted_stars)[stars]++;
        }
    }

    return *counted_stars;
	// This function needs to find all reviews that have business_ids in
	// the qualifyingBusinessesIDs vector and build a histogram over their stars
	// The return value is that histogram
//	std::cout << "function aggregateStarsOfQualifyingBusinesses not implemented" << std::endl;
//	throw std::logic_error("unimplemented");
}
