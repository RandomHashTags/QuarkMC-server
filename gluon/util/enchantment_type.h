//
//  enchantment.h
//  gluon
//
//  Created by Evan Anderson on 11/3/22.
//

#ifndef enchantment_type_h
#define enchantment_type_h

#include "enchantment_target.h"

struct EnchantmentType {
    const char *identifier;
    const unsigned char weight;
    unsigned short max_level;
    unsigned short incompatible_with_count;
    struct EnchantmentType *incompatible_with;
};

struct EnchantmentType *enchantment_type_create(const char *identifier, const unsigned char weight, unsigned short max_level, unsigned short incompatible_with_count, struct EnchantmentType *incompatible_with);
void enchantment_type_destroy(struct EnchantmentType *type);

struct EnchantmentTarget enchantment_type_get_enchantment_target(struct EnchantmentType *enchantment);

struct Enchant {
    const struct EnchantmentType *type;
    unsigned short level;
};

void enchant_destroy(struct Enchant *enchant);
void enchants_destroy(unsigned short enchants_count, struct Enchant *enchants);

#endif /* enchantment_type_h */
