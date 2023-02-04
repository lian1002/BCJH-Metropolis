#ifndef TOOLEQUIPPED_HPP
#define TOOLEQUIPPED_HPP
#include "src/Chef.hpp"
#include "src/Values.hpp"

void toolEquipped(Chef *chef) {
    // return; // 以下为示例代码，可自行修改。完成后注释此行。

    // ////// ajdx
    // if (chef->name == "达浪") {                   // 金锄头
    //     chef->skill.ability.add(30);              // 全技法+30
    //     chef->skill.materialBuff.vegetable += 15; // 蔬菜售价+15%
    //     chef->tool = NO_TOOL;                     // 不允许装备其他厨具
    // }
    // if (chef->name == "宋书汐汐") {         // 幸福礼花炮
    //     chef->skill.ability.stirfry += 150; // 炒技法+150
    //     chef->skill.abilityBuff.bake += 25; // 烤售价+25%
    //     chef->tool = NO_TOOL;               // 不允许装备其他厨具
    // }
    // if (chef->name == "小公明") {             // 鲨鱼之吻
    //     chef->skill.abilityBuff.knife += 40;  // 切售价+40%
    //     chef->skill.ability.knife *= 0.9;     // 切技法-10%
    //     chef->skill.materialBuff.fish += -15; // 鱼售价-15%
    //     chef->tool = NO_TOOL;                 // 不允许装备其他厨具
    //     std::cout << "小公明";
    // }
    // if (chef->name == "花卷") {
    //     chef->skill.flavorBuff.tasty += 30;
    //     chef->skill.ability.stirfry += 80;
    //     chef->tool = NO_TOOL; // 不允许装备其他厨具
    // }

    //////// jlm
    if (chef->name == "煎饼") {
        chef->skill.abilityBuff.stirfry += 20;
        chef->skill.materialBuff.creation += 15;
        chef->tool = NO_TOOL;
    }
    if (chef->name == "柔可") {
        chef->skill.abilityBuff.knife += 20;
        chef->skill.materialBuff.creation += 15;
        chef->tool = NO_TOOL;
    }
}
#endif