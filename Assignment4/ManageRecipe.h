#pragma once
#include <iostream>
#include <vector>
#include <string>

class PotionRecipe;
class ManageRecipe
{
public:
	void addRecipe(std::vector<PotionRecipe>& recipes, const std::string& name, const std::vector<std::string>& ingredients);
};

