#include "ManageRecipe.h"
#include "PotionRecipe.h"

void ManageRecipe::addRecipe(std::vector<PotionRecipe>& recipes, const std::string& name, const std::vector<std::string>& ingredients) {
    recipes.push_back(PotionRecipe(name, ingredients));
    std::cout << ">> 새로운 레시피 '" << name << "'이(가) 추가되었습니다." << std::endl;
}