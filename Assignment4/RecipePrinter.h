#pragma once
#include <vector>

class PotionRecipe;
class RecipePrinter
{
public:
	void displayAllRecipes(std::vector<PotionRecipe> recipes) const;
};

