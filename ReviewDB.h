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
    ReviewDB(const ReviewDB *copyDB);
    ~ReviewDB();

    void insertReview(ReviewNode *newReview_);

    // Print methods
    void printRestaurantReviews(const string &restaurant) const;
    void printCategoryReviews(const string &category) const;
    void printRecentReview(const int &numToPrint) const;

    // Test
    static void test();

private:
    int numOfReviews;
    ReviewNode *Head;
    ReviewNode *Temp;
};

#endif //PF2_PROGRAMMING_PROJECT_2_REVIEWDB_H
