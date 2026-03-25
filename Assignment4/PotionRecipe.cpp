#include "PotionRecipe.h"

//생성자: 재료 목록을 받아 초기화하도록 수정
 PotionRecipe::PotionRecipe(const std::string& name, const std::vector<std::string>& ingredients)
    : potionName(name), ingredients(ingredients) {}

 // Getter method
 std::string PotionRecipe::GetName() const { return potionName;  }
 vector<std::string> PotionRecipe::GetIngredients() const { return ingredients; }

 // Setter method
 void PotionRecipe::SetName(std::tring name) { this->potionName = name; }
 void PotionRecipe::SetIngredients(vector<std::string> ingredients) { 
     std::copy(ingredients.begin(), ingredients.end(), this->ingredients.begin());
 }
