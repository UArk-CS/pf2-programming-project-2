//
// Created by Ben Worthington on 2/9/21.
// Project 1 used as base code
//

#ifndef PF2_PROGRAMMING_PROJECT_2_REVIEWNODE_H
#define PF2_PROGRAMMING_PROJECT_2_REVIEWNODE_H

#include <iostream>
using namespace std;

class ReviewNode {

public:
    // Constructors and Destructor
    ReviewNode();
    ReviewNode(const ReviewNode *copy);
    ~ReviewNode();

    // Getters and Setters
    const string &getReviewerName() const;
    void setReviewerName(const string &reviewerName_);

    const string &getRestaurantName() const;
    void setRestaurantName(const string &restaurantName_);

    const string &getFoodCategory() const;
    void setFoodCategory(const string &foodCategory_);

    float getDeliveryCost() const;
    void setDeliveryCost(float deliveryCost_);

    int getDeliveryTimeRating() const;
    void setDeliveryTimeRating(int deliveryTimeRating_);

    int getFoodQualityRating() const;
    void setFoodQualityRating(int foodQualityRating_);

    int getOverallSatisfactionRating() const;
    void setOverallSatisfactionRating(int overallSatisfactionRating_);

    ReviewNode *getNext() const;
    void setNext(ReviewNode *next_);

    // Print
    void print() const;

    // Test
    static void test();

private:
    string reviewerName;
    string restaurantName;
    string foodCategory;
    float deliveryCost;
    int deliveryTimeRating;
    int foodQualityRating;
    int overallSatisfactionRating;
    ReviewNode *Next;
};

#endif //PF2_PROGRAMMING_PROJECT_2_REVIEWNODE_H
