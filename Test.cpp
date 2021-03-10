#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


string nospaces(string input){
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    input.erase(remove(input.begin(), input.end(), '\t'), input.end());
    input.erase(remove(input.begin(), input.end(), '\n'), input.end());
    input.erase(remove(input.begin(), input.end(), '\r'), input.end());
    return input;
}

TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(33232124)) == nospaces("_\n/_\\n\\ (o_O)\n(] [)>\n(   )"));
    CHECK(nospaces(snowman(22222222)) == nospaces(" ___ \n\\(o.o)/\n(] [)\n(" ")"));
    CHECK(nospaces(snowman(33333333)) == nospaces("  _ /_\\nO_O\n/< >\\n___"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_\n/_\\n\\(o_O)\n(] [)>\n(   )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(546));
    CHECK_THROWS(snowman(11111118));
    CHECK_THROWS(snowman(13265));
    CHECK_THROWS(snowman(5));
    CHECK_THROWS(snowman(0000054));
    CHECK_THROWS(snowman(654));
    CHECK_THROWS(snowman(789));
    CHECK_THROWS(snowman(8979878));
    CHECK_THROWS(snowman(648795123));
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(555111111));
    CHECK_THROWS(snowman(222222222));
    CHECK_THROWS(snowman(55));
    CHECK_THROWS(snowman(54655));
    CHECK_THROWS(snowman(5553216));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(5550120));
    CHECK_THROWS(snowman(556487));
    CHECK_THROWS(snowman(87465135));

    /* Add more checks here */
}
