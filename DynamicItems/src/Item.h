#pragma once
#include "Effect.h"

class Item
{
public:
    Item();
    ~Item();

    void cleanup() {

    };
protected:
    char* m_name{ nullptr };
    char* m_desc{ nullptr };
    int m_itemid{ -1 };
    bool m_isQuestItem{ false };
    bool m_isSellable{ false };
    bool m_isCraftComp{ false };
    int m_weight{ -1 };
    int m_value{ -1 };
    int m_rarity{ -1 };
    int m_itemqual{ -1 };
    int* m_possibleSlot{ nullptr };

    Effect* m_effects{ nullptr };
    //Image m_itemData;
    //Object m_objData;

    enum e_equipSlot{
        head,
        chest,
        arms,
        hands,
        belt,
        legs,
        feet,
        lhand,
        rhand,
        neck,
        misc1,
        misc2
    };

    enum e_itemQuality {
        poor,
        used,
        average,
        good,
        superb
    };

    enum e_itemRarity {
        common,
        uncommon,
        rare,
        unique,
        legendary
    };
};

