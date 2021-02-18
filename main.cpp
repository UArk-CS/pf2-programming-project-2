//
// Created by Ben Worthington on 2/9/21.
// Project 1 used as base code
//

#include <iostream>
#include <algorithm>
#include "ReviewDB.h"
using namespace std;

// Function declarations
void commandMenu(int &menuChoice);
void createNewReview(ReviewDB &foodieReviews);
void getSearchParameter(string &searchParam);

int main() {

    // Initialize ReviewDB object
    ReviewDB foodieReviews;

    // Initialize variables
    bool stop = false;
    int menuChoice = 0;
    string searchParam;

    cout << "Ben's Foodie Reviews" << endl;
    cout << endl;

    // While loop to control continuous program
    while (!stop) {

        // Get users menu choice
        commandMenu(menuChoice);

        // Switch statement to control users menu choice
        switch (menuChoice) {

            case 1:
                // New review
                createNewReview(foodieReviews);
                break;
            case 2:
                // Print specified restaurant reviews
                cout << "Print specified Restaurant Reviews" << endl;
                getSearchParameter(searchParam);
                cout << endl;
                cout << "Results:" << endl;
                cout << endl;
                foodieReviews.printRestaurantReviews(searchParam);
                break;
            case 3:
                // Print specified food category reviews
                cout << "Print specified Food Reviews" << endl;
                getSearchParameter(searchParam);
                cout << endl;
                cout << "Results:" << endl;
                cout << endl;
                foodieReviews.printCategoryReviews(searchParam);
                break;
            case 4:
                // Print recent reviews
                int nReviews;
                cout << "How many recent reviews would you like to print? > ";
                cin >> nReviews;
                cout << nReviews << " Most Recent Reviews" << endl;
                foodieReviews.printRecentReview(nReviews);
                break;
            case 5:
                // Test Review Class
                cout << "Testing Review Class..." << endl;
                cout << endl;
                ReviewNode::test();
                break;
            case 6:
                // Test ReviewDB Class
                cout << "Testing ReviewDB Class..." << endl;
                cout << endl;
                ReviewDB::test();
                break;
            case 7:
                // Quit
                stop = true;
                break;
            default:
                break;

        }

    }

    return 0;

}

// Prints commands and gets users choice
void commandMenu(int &menuChoice) {

    cout << "Command Menu:" << endl;
    cout <<"\t1. Enter new review" << endl;
    cout <<"\t2. Print specified Restaurant reviews" << endl;
    cout << "\t3. Print specified food category reviews" << endl;
    cout << "\t4. Print most recent review" << endl;
    cout << "\t5. Test Review Class" << endl;
    cout << "\t6. Test ReviewDB Class" << endl;
    cout << "\t7. Quit" << endl;

    cout << "Enter a selection (1-7): > ";
    cin >> menuChoice;

    if (menuChoice < 1 || menuChoice > 7) {

        cout << "Invalid selection. Please try again." << endl;
        cout << endl;
        commandMenu(menuChoice);

    }

    cout << endl;

}

// Gets user input and creates full Review object to pass into ReviewDB object
// TODO - Redo to insert Review into linked list
void createNewReview(ReviewDB &foodieReviews) {

    string reviewerName;
    string restaurantName;
    string foodCategory;
    int deliveryTimeRating = 0;
    int foodQualityRating = 0;
    int overallSatisfactionRating = 0;
    float deliveryCost = 0.0;

    ReviewNode *newReview = new ReviewNode();

    cout << "New Review:" << endl;

    // Flush cin buffer
    cin.ignore();

    cout << "\tYour name: > ";
    getline(cin, reviewerName);
    transform(reviewerName.begin(), reviewerName.end(), reviewerName.begin(), ::toupper);
    newReview->setReviewerName(reviewerName);

    cout << "\tRestaurant Name: > ";
    getline(cin, restaurantName);
    transform(restaurantName.begin(), restaurantName.end(), restaurantName.begin(), ::toupper);
    newReview->setRestaurantName(restaurantName);

    cout << "\tFood Category: > ";
    getline(cin, foodCategory);
    transform(foodCategory.begin(), foodCategory.end(), foodCategory.begin(), ::toupper);
    newReview->setFoodCategory(foodCategory);

    cout << "\tDelivery Cost: > $";
    cin >> deliveryCost;
    while (deliveryCost < 0.0) {

        cout << "Invalid input. Please enter a real number." << endl;
        cout << "\tDelivery Cost: > $";
        cin >> deliveryCost;

    }
    newReview->setDeliveryCost(deliveryCost);

    cout << "\tDelivery Time Rating (1-10): > ";
    cin >> deliveryTimeRating;
    while (deliveryTimeRating < 1 || deliveryTimeRating > 10) {

        cout << "Invalid input. Please enter a number 1 - 10." << endl;
        cout << "\tDelivery Time Rating (1-10): > ";
        cin >> deliveryTimeRating;

    }
    newReview->setDeliveryTimeRating(deliveryTimeRating);

    cout << "\tFood Quality Rating (1-10): > ";
    cin >> foodQualityRating;
    while (foodQualityRating < 1 || foodQualityRating > 10) {

        cout << "Invalid input. Please enter a number 1 - 10." << endl;
        cout << "\tFood Quality Rating (1-10): > ";
        cin >> foodQualityRating;

    }
    newReview->setFoodQualityRating(foodQualityRating);

    cout << "\tOverall Satisfaction (1-10): > ";
    cin >> overallSatisfactionRating;
    while (overallSatisfactionRating < 1 || overallSatisfactionRating > 10) {

        cout << "Invalid input. Please enter a number 1 - 10." << endl;
        cout << "\tOverall Satisfaction (1-10): > ";
        cin >> overallSatisfactionRating;

    }
    newReview->setOverallSatisfactionRating(overallSatisfactionRating);
    cout << endl;

    foodieReviews.insertReview(newReview);

}

// Gets search parameter for use in restaurant and food category review print methods
void getSearchParameter(string &searchParam) {

    cout << "Search Parameter: > ";
    cin.ignore();
    getline(cin, searchParam);
    transform(searchParam.begin(), searchParam.end(), searchParam.begin(), ::toupper);

}