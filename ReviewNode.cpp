//
// Created by Ben Worthington on 2/9/21.
// Project 1 used as base code
//

#include "ReviewNode.h"
#include <iomanip>

// Constructor
ReviewNode::ReviewNode() {

    reviewerName = "";
    restaurantName = "";
    foodCategory = "";
    deliveryCost = 0.0;
    deliveryTimeRating = 0;
    foodQualityRating = 0;
    overallSatisfactionRating = 0;
    Next = NULL;

}

// Copy Constructor
ReviewNode::ReviewNode(const ReviewNode &copy) {

    reviewerName = copy.reviewerName;
    restaurantName = copy.restaurantName;
    foodCategory = copy.foodCategory;
    deliveryCost = copy.deliveryCost;
    deliveryTimeRating = copy.deliveryTimeRating;
    foodQualityRating = copy.foodQualityRating;
    overallSatisfactionRating = copy.overallSatisfactionRating;
    Next = NULL;

}

// Destructor
ReviewNode::~ReviewNode() {}

// Getters and Setters
const string &ReviewNode::getReviewerName() const {
    return reviewerName;
}

void ReviewNode::setReviewerName(const string &reviewerName_) {
    ReviewNode::reviewerName = reviewerName_;
}

const string &ReviewNode::getRestaurantName() const {
    return restaurantName;
}

void ReviewNode::setRestaurantName(const string &restaurantName_) {
    ReviewNode::restaurantName = restaurantName_;
}

const string &ReviewNode::getFoodCategory() const {
    return foodCategory;
}

void ReviewNode::setFoodCategory(const string &foodCategory_) {
    ReviewNode::foodCategory = foodCategory_;
}

float ReviewNode::getDeliveryCost() const {
    return deliveryCost;
}

void ReviewNode::setDeliveryCost(float deliveryCost_) {
    ReviewNode::deliveryCost = deliveryCost_;
}

int ReviewNode::getDeliveryTimeRating() const {
    return deliveryTimeRating;
}

void ReviewNode::setDeliveryTimeRating(int deliveryTimeRating_) {
    ReviewNode::deliveryTimeRating = deliveryTimeRating_;
}

int ReviewNode::getFoodQualityRating() const {
    return foodQualityRating;
}

void ReviewNode::setFoodQualityRating(int foodQualityRating_) {
    ReviewNode::foodQualityRating = foodQualityRating_;
}

int ReviewNode::getOverallSatisfactionRating() const {
    return overallSatisfactionRating;
}

void ReviewNode::setOverallSatisfactionRating(int overallSatisfactionRating_) {
    ReviewNode::overallSatisfactionRating = overallSatisfactionRating_;
}

// Print method
void ReviewNode::print() const {

    cout << fixed << setprecision(2);

    cout << "Reviewer Name: " << reviewerName << endl;
    cout << "Restaurant Name: " << restaurantName << endl;
    cout << "Food Category: " << foodCategory << endl;
    cout << "Delivery Cost: $" << deliveryCost << endl;
    cout << "Delivery Time Rating: " << deliveryTimeRating << endl;
    cout << "Food Quality Rating: " << foodQualityRating << endl;
    cout << "Overall Satisfaction Rating: " << overallSatisfactionRating << endl;

}

// Test method
void ReviewNode::test() {

    ReviewNode test1;
    test1.setReviewerName("Ben W");
    test1.setRestaurantName("Taco Bell");
    test1.setFoodCategory("Mexican");
    test1.setDeliveryCost(3.4);
    test1.setDeliveryTimeRating(7);
    test1.setFoodQualityRating(7);
    test1.setOverallSatisfactionRating(8);
    test1.print();
    cout << endl;

    ReviewNode test2(test1);
    test2.setReviewerName("Josh G");
    test2.setRestaurantName("Tropical Smoothie");
    test2.setFoodCategory("Smoothie");
    test2.print();
    cout << endl;

    cout << "test1 Delivery Cost: $" << test1.getDeliveryCost() << endl;
    cout << "test2 Reviewer Name: " << test2.getReviewerName() << endl;
    cout << endl;

}