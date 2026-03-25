#pragma once
#include <vector>
#include <string>

class PotionRecipe {
public:
    // 생성자: 재료 목록을 받아 초기화하도록 수정
    PotionRecipe(const std::string& name, const std::vector<std::string>& ingredients);
    
    // Getter method
    std::string GetName() const;
    vector<std::string> GetIngredients() const;

    // Setter method
    void SetName(std::string name);
    void SetIngredients(vector<std::string> ingredients);

private:
    std::string potionName;
    std::vector<std::string> ingredients; // 단일 재료에서 재료 '목록'으로 변경
};

