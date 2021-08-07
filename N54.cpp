// 从现在开始，拟定属于你自己的健康饮食方案吧！ 一份全新的健康饮食计划，将会使
// 你浑身充满活力。如果长时间坚持这样的饮食，那么不仅你患疾病的几率降低，而且还会比
// 预期寿命延长15 年。当然，随之而来的，还有你一直向往的好身材。假设供选择的菜单如
// 下：每份热量单位：大卡/100 克

// 假设供选择的菜单如下：每份热量单位：大卡/100 克

#include <bits/stdc++.h>
using namespace std;
struct menu{
	string name;
	int calories;
};

void calculator(int sum)
{
    struct menu dishes[15];
	dishes[0].name = "Steamed Rice 31"; 												
    dishes[0].calories = 31;
	dishes[1].name = "Scrambled Egg with Scallion 81"; 									
    dishes[1].calories = 81;
	dishes[2].name = "Boiled Fish with Pickled Cabbage and Chili 92"; 					
    dishes[2].calories = 92;
	dishes[3].name = "Soybean Milk 92";													
    dishes[3].calories = 92;
	dishes[4].name = "Steamed Jiaozi 119"; 												
    dishes[4].calories = 119;
	dishes[5].name = "Scrambled Egg with Leek 128"; 									
    dishes[5].calories = 128;
	dishes[6].name = "Steamed Bun Stuffed with Red Bean Paste 128"; 					
    dishes[6].calories = 128;
	dishes[7].name = "Yu-Shiang Shredded Pork (Sauted with Spicy Garlic Sauce) 134"; 	
    dishes[7].calories = 134;
	dishes[8].name = "Sauted Sliced Pork with Black Fungus 143"; 						
    dishes[8].calories = 143;
	dishes[9].name = "Hot and Sour Rice Noodles 144"; 									
    dishes[9].calories = 144;
	dishes[10].name = "Steamed Rice Rolls 196"; 										
    dishes[10].calories = 196;
	dishes[11].name = "Sauted Sliced Pork with Pepper and Chili , Sichuan Style 231"; 	
    dishes[11].calories = 231;
	dishes[12].name = "Fish Filets in Hot Chili Oil 239"; 								
    dishes[12].calories = 239;
	dishes[13].name = "Cold Noodles Sichuan Style 260"; 								
    dishes[13].calories = 260;
	dishes[14].name = "Kung Pao Chicken 313"; 											
    dishes[14].calories = 313;
	for (int i = 0; i < 15; i++)
	{
        sum = sum - dishes[i].calories;
        if (sum >= 0)
            cout << dishes[i].name << endl;
        else
			break;
	}
}

int main()
{
    int sum = 0;
    cin >> sum;
    calculator(sum);
    return 0;
}
