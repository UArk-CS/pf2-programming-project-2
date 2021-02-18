//
// Created by Ben Worthington on 2/9/21.
// Project 1 used as base code
//

#include "ReviewDB.h"

// Constructor
ReviewDB::ReviewDB() {
    numOfReviews = 0;
    Head = NULL;
    Temp = NULL;
}

ReviewDB::ReviewDB(const ReviewDB *copyDB) {

    ReviewNode *copy = new ReviewNode();
    Head = copy;

    ReviewNode *temp = copyDB->Head;
    while (temp != NULL) {

        copy->setNext(new ReviewNode());
        copy = copy->getNext();
        copy->setReviewerName(temp->getReviewerName());
        copy->setRestaurantName(temp->getRestaurantName());
        copy->setFoodCategory(temp->getFoodCategory());
        copy->setDeliveryCost(temp->getDeliveryCost());
        copy->setDeliveryTimeRating(temp->getDeliveryTimeRating());
        copy->setFoodQualityRating(temp->getFoodQualityRating());
        copy->setOverallSatisfactionRating(temp->getOverallSatisfactionRating());
        copy->setNext(NULL);
        temp = temp->getNext();

    }

    copy = Head;
    Head = copy->getNext();
    delete copy;

}

// Destructor
ReviewDB::~ReviewDB() {}

// Inserts review into the linked list
void ReviewDB::insertReview(ReviewNode *newReview_) {

    if (Head != NULL) {
        Temp = newReview_;
        newReview_->setNext(Head);
        Head = Temp;
    } else {
        Head = newReview_;
    }

    numOfReviews++;

}

// Prints all reviews with the specified restaurant
void ReviewDB::printRestaurantReviews(const string &restaurant) const {

    ReviewNode *printer = Head;

    for (int i = 0; i < numOfReviews; i++) {

        if (printer->getRestaurantName() == restaurant) {

            printer->print();
            printer = printer->getNext();

        } else {
            printer = printer->getNext();
        }

    }

}

// Prints all reviews with the specified food category
void ReviewDB::printCategoryReviews(const string &category) const {

    ReviewNode *printer = Head;

    for (int i = 0; i < numOfReviews; i++) {

        if (printer->getFoodCategory() == category) {

            printer->print();
            printer = printer->getNext();

        } else {
            printer = printer->getNext();
        }

    }

}

// Prints the n most recent review(s)
void ReviewDB::printRecentReview(const int &numToPrint) const {

    ReviewNode *printer = Head;

    for (int i = 0; i < numToPrint; i++) {

        printer->print();
        printer = printer->getNext();

    }

}

// Test method
void ReviewDB::test() {

    ReviewDB testLinkedList;

    ReviewNode *test1 = new ReviewNode();
    test1->setReviewerName("Ben W");
    test1->setRestaurantName("Taco Bell");
    test1->setFoodCategory("Mexican");
    test1->setDeliveryCost(3.4);
    test1->setDeliveryTimeRating(7);
    test1->setFoodQualityRating(7);
    test1->setOverallSatisfactionRating(8);
    testLinkedList.insertReview(test1);

    ReviewNode *test2 = new ReviewNode();
    test2->setReviewerName("Josh G");
    test2->setRestaurantName("Tropical Smoothie");
    test2->setFoodCategory("Smoothie");
    test2->setDeliveryCost(5.0);
    test2->setDeliveryTimeRating(7);
    test2->setFoodQualityRating(9);
    test2->setOverallSatisfactionRating(10);
    testLinkedList.insertReview(test2);

    ReviewNode *test3 = new ReviewNode();
    test3->setReviewerName("Jackson D");
    test3->setRestaurantName("Tropical Smoothie");
    test3->setFoodCategory("Smoothie");
    test3->setDeliveryCost(5.0);
    test3->setDeliveryTimeRating(8);
    test3->setFoodQualityRating(7);
    test3->setOverallSatisfactionRating(8);
    testLinkedList.insertReview(test3);

    ReviewNode *test4 = new ReviewNode();
    test4->setReviewerName("Jackson P");
    test4->setRestaurantName("Taco Bell");
    test4->setFoodCategory("Mexican");
    test4->setDeliveryCost(3.4);
    test4->setDeliveryTimeRating(8);
    test4->setFoodQualityRating(6);
    test4->setOverallSatisfactionRating(7);
    testLinkedList.insertReview(test4);

    cout << "Reviews for Tropical Smoothie..." << endl;
    testLinkedList.printRestaurantReviews("Tropical Smoothie");
    cout << endl;

    cout << "Reviews for Mexican food..." << endl;
    testLinkedList.printCategoryReviews("Mexican");
    cout << endl;


}