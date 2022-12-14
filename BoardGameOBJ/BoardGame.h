#pragma once
#include <string>
#include <iostream>
using namespace std;
class BoardGame
{
    private:
    // variables
    string name;
    string year;
    string min_player;
    string max_players;
    string age;
    string avg_rating;
    public:
    // Constructors
    BoardGame();
    BoardGame(string name, string year, string min_players, string max_players, string age, string avgRating);
    // Operator Overload
    BoardGame& operator=(const BoardGame& other);
    //getters
    string get_name();
    string get_year();
    int get_min_player();
    int get_max_players();
    int get_age();
    // print object
    void print_details();
};

BoardGame::BoardGame()
{
    name = "";
    year = "";
    min_player = "";
    max_players = "";
    age = "";
    avg_rating = "";
}

BoardGame::BoardGame(string name, string year, string min_players, string max_players, string age, string avg_rating)
{
    this->name = name;
    this->year = year;
    this->min_player = min_players;
    this->max_players = max_players;
    this->age = age;
    this->avg_rating = avg_rating;
}

BoardGame& BoardGame::operator=(const BoardGame& other){
    this->name = other.name;
    this->year = other.year;
    this->min_player = other.min_player;
    this->max_players = other.max_players;
    this->age = other.age;
    this->avg_rating = other.avg_rating;
    return *this;
}

string BoardGame::get_name(){
    return name;
}

string BoardGame::get_year(){
    return year;
}

int BoardGame::get_min_player(){
    return stoi(min_player);
}

int BoardGame::get_max_players(){
    return stoi(max_players);
}

int BoardGame::get_age(){
    return stoi(age);
}

void BoardGame::print_details()
{
    cout << "Board Game Name:   " << name << endl;
    cout << "Year Published:    " << year << endl;
    cout << "Min Players:       " << min_player << endl;
    cout << "Max Players:       " << max_players << endl;
    cout << "Min Age:           " << age << endl;
    cout << "Average Rating:    " << avg_rating << endl << endl;
}
