//
//  potion_effect.h
//  gluon
//
//  Created by Evan Anderson on 11/5/22.
//

#ifndef potion_effect_h
#define potion_effect_h

#include "potion_effect_type.h"

struct PotionEffect {
    const struct PotionEffectType *type;
    _Bool has_icon;
    _Bool has_particles;
    _Bool is_ambient;
    
    unsigned short amplifier;
    unsigned short duration;
};

struct PotionEffect *potion_effect_create(struct PotionEffectType *type, unsigned short amplifier, unsigned short duration, _Bool has_icon, _Bool has_particles, _Bool is_ambient);
void potion_effect_destroy(struct PotionEffect *effect);

#endif /* potion_effect_h */
