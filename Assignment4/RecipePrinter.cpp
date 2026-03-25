#include <iostream>
#include "RecipePrinter.h"
#include "PotionRecipe.h"

void RecipePrinter::displayAllRecipes(std::vector<PotionRecipe> recipes) const {
	if (recipes.empty()) {
		std::cout << "아직 등록된 레시피가 없습니다." << std::endl;
		return;
	}

	std::cout << "\n--- [ 전체 레시피 목록 ] ---" << std::endl;
	for (size_t i = 0; i < recipes.size(); ++i) {
		std::cout << "- 물약 이름: " << recipes[i].potionName << std::endl;
		std::cout << "  > 필요 재료: ";

		// 재료 목록을 순회하며 출력
		for (size_t j = 0; j < recipes[i].GetIngredients.size(); ++j) {
			std::cout << recipes[i].GetIngredients()[j];
			// 마지막 재료가 아니면 쉼표로 구분
			if (j < recipes[i].ingredients.size() - 1) {
				std::cout << ", ";
			}
			
		std::cout << std::endl;
		}
	std::cout << "---------------------------\n";
	}
};
