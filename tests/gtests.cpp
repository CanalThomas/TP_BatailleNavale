#include <gtest/gtest.h>

#include "Bateau.h"




void test_coordBateau(Bateau b)
{
    ASSERT_EQ(b.getM_etatGeneral(), false)
        << "Error: " << "L'état général est " << false << " and not " << b.getM_etatGeneral() << "\n";
}

TEST(test_coordBateau, Test1)
{
    coordonnees c1;
    coordonnees c2;
    c1.push_back(0);
    c1.push_back(0);
    c2.push_back(0);
    c2.push_back(1);
    vector<coordonnees> v;
    v.push_back(c1);
    v.push_back(c2);
    Bateau b(2,v);
    test_coordBateau(b);
}


int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
