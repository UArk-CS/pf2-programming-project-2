//
// Created by Ben Worthington on 2/9/21.
// Project 1 used as base code
//

#include "ReviewDB.h"

// Constructor
ReviewDB::ReviewDB() {
    Next = NULL;
    numOfReviews = 0;
}

// Destructor
ReviewDB::~ReviewDB() {}

// Inserts review into array if it is not full
void ReviewDB::insertReview(ReviewNode &review_) {

//    if (numOfReviews < MAX_REVIEWDB_SIZE) {
//
//        reviews[numOfReviews] = review_;
//        numOfReviews++;
//
//    } else {
//
//        cout << "Sorry! Ben's Foodie ReviewNode database is full! Whoops..." << endl;
//
//    }


}

// Prints all reviews with the specified restaurant
void ReviewDB::printRestaurantReviews(const string &restaurant) const {

//    for (int i = 0; i < MAX_REVIEWDB_SIZE; i++) {
//
//        if (reviews[i].getRestaurantName() == restaurant) {
//
//            reviews[i].print();
//            cout << endl;
//
//        }
//
//    }

}

// Prints all reviews with the specified food category
void ReviewDB::printCategoryReviews(const string &category) const {

//    for (int i = 0; i < MAX_REVIEWDB_SIZE; i++) {
//
//        if (reviews[i].getFoodCategory() == category) {
//
//            reviews[i].print();
//            cout << endl;
//
//        }
//
//    }

}

// Prints the most recent review
void ReviewDB::printRecentReview() const {

//    reviews[numOfReviews - 1].print();
//    cout << endl;

}

// Test method
void ReviewDB::test() {

    ReviewDB testArray;

    ReviewNode test1;
    test1.setReviewerName("Ben W");
    test1.setRestaurantName("Taco Bell");
    test1.setFoodCategory("Mexican");
    test1.setDeliveryCost(3.4);
    test1.setDeliveryTimeRating(7);
    test1.setFoodQualityRating(7);
    test1.setOverallSatisfactionRating(8);

    ReviewNode test2(test1);
    test2.setReviewerName("Josh G");
    test2.setRestaurantName("Tropical Smoothie");
    test2.setFoodCategory("Smoothie");
    test2.setDeliveryCost(5.0);
    test2.setOverallSatisfactionRating(10);

    ReviewNode test3(test2);
    test3.setReviewerName("Jackson D");
    test3.setDeliveryTimeRating(8);

    ReviewNode test4(test1);
    test4.setReviewerName("Jackson P");
    test4.setFoodQualityRating(6);
    test4.setOverallSatisfactionRating(7);

//    testArray.reviews[0] = test1;
//    testArray.reviews[1] = test2;
//    testArray.reviews[2] = test3;
//    testArray.reviews[3] = test4;

    cout << "Reviews for Tropical Smoothie..." << endl;
    testArray.printRestaurantReviews("Tropical Smoothie");
    cout << endl;

    cout << "Reviews for Mexican food..." << endl;
    testArray.printCategoryReviews("Mexican");
    cout << endl;


}