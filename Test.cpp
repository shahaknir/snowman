#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


nospaces(string input){
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    input.erase(remove(input.begin(), input.end(), '\t'), input.end());
    input.erase(remove(input.begin(), input.end(), '\n'), input.end());
    input.erase(remove(input.begin(), input.end(), '\r'), input.end());
    return input;
}

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(33232124) == string("_\n/_\\n\ (o_O)\n(] [)>\n(   )"));
    CHECK(snowman(22222222) == string(" ___ \n\\(o.o)/\n(] [)\n(" ")"));
    CHECK(snowman(33333333) == string("  _ /_\\nO_O\n/< >\\n___"));
    CHECK(snowman(11114411) == string("_\n/_\\n\ (o_O)\n(] [)>\n(   )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
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
    CHECK_THROWS(snowman(897987897978));
    CHECK_THROWS(snowman(648795123));
    CHECK_THROWS(snowman(11111111111111111111111));
    CHECK_THROWS(snowman(555111111111111));
    CHECK_THROWS(snowman(22222222222222));
    CHECK_THROWS(snowman(55));
    CHECK_THROWS(snowman(54655));
    CHECK_THROWS(snowman(5553216));
    CHECK_THROWS(snowman(55578964513784615));
    CHECK_THROWS(snowman(5550120));
    CHECK_THROWS(snowman(556487));
    CHECK_THROWS(snowman(87465135));

    /* Add more checks here */
}
