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

TEST(convertir_test, ASCII_Vers_Int) {
	EXPECT_EQ(0, convertir('a'));
	EXPECT_EQ(9, convertir('j'));
}

TEST(coordonnées, utilisateurTir) {
	SetUp() {
	TirUtil tir = TirUtil();
	}
	//il faut rentrer 'a' et 0 en valeurs
	cout << "rentrer 'a' puis 0 pour le bon déroulement du test"<<endl;
	coorddecase();
	ASSERT_EQ((tir.Tir*)[1], 0);
	ASSERT_EQ((tir.Tir*)[2], 0);

}


int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
