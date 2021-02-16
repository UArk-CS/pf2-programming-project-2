//
// Created by Ben Worthington on 2/9/21.
// Project 1 used as base code
//

#ifndef PF2_PROGRAMMING_PROJECT_2_REVIEWDB_H
#define PF2_PROGRAMMING_PROJECT_2_REVIEWDB_H

#include <iostream>
#include "ReviewNode.h"
using namespace std;

class ReviewDB {

public:
    // Constructors and Destructor
    ReviewDB();
    ~ReviewDB();

    void insertReview(ReviewNode &review_);

    // Print methods
    void printRestaurantReviews(const string &restaurant) const;
    void printCategoryReviews(const string &category) const;
    void printRecentReview() const;

    // Test
    static void test();

private:
    int numOfReviews;
    ReviewDB *Head;
    ReviewDB *Temp;
};

#endif //PF2_PROGRAMMING_PROJECT_2_REVIEWDB_H
