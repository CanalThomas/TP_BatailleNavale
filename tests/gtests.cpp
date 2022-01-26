#include <gtest/gtest.h>
#include "tir_util.h"
#include "Bateau.h"




void test_coordBateau(Bateau b)
{
    ASSERT_EQ(b.getM_etatGeneral(), false)
        << "Error: " << "L'état général est " << false << " and not " << b.getM_etatGeneral() << "\n";
}

TEST(testcoordBateau, Test1)
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
	// test dans tir_util de la fonction convertir
	EXPECT_EQ(0, convertir('a'));
	EXPECT_EQ(9, convertir('j'));
}

//test de la classe tirUtil
class TirUtilTest:public::testing::Test
{
protected:
	virtual void SetUp()
	{
		//il faut rentrer 'a' et 0 en valeurs
		cout << "rentrer 'a' puis 0 pour le bon déroulement du test" <<endl;
		tir.coorddecase();
	}

	virtual void TearDown()
	{//
	}

	TirUtil tir = TirUtil();
};

//test de la methode cooddecase de la classe tir_util
TEST_F(TirUtilTest, utilisateurTir) 
{
	ASSERT_EQ((tir.getCoord_tir())[0], 0);
	ASSERT_EQ((tir.getCoord_tir())[1], 0);
}


/////////////////////	FLOTTE TESTS	//////////////////////////
class FlotteTest:public::testing::Test
{
protected:
	virtual void SetUp()
	{
		
	}

	virtual void TearDown()
	{//
	}

	Flotte flottePc = Flotte();
	Flotte flotteUser = Flotte("../grille.txt");
	
};


TEST_F(FlotteTest, flottePc) 
{
	std::vector<Bateau> f = flottePc.getflotte();
	int testCoords = 0;
	for(int i = 0; i<f.size();i++)
	{
		for(int j = 0; j<f[i].getM_etats().size();j++)
		{
			testCoords = f[i].getM_etats()[j].position[0] > 0 &&
				f[i].getM_etats()[j].position[1] > 0 &&
				f[i].getM_etats()[j].position[0] < 10 &&
				f[i].getM_etats()[j].position[1] < 10;
			EXPECT_EQ(1, testCoords);
		}
	}
}







int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
