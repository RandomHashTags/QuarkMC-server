//
//  entity_type.h
//  gluon
//
//  Created by Evan Anderson on 11/3/22.
//

#ifndef entity_type_h
#define entity_type_h

struct EntityType {
    const char *identifier;
    
    const _Bool is_affected_by_gravity;
    
    const _Bool receives_fall_damage;
    
    unsigned short no_damage_ticks_maximum;
    unsigned short fire_ticks_maximum;
    unsigned short freeze_ticks_maximum;
};

struct EntityType *entity_type_create(const char *identifier, const _Bool is_affected_by_gravity, const _Bool receives_fall_damage, unsigned short no_damage_ticks_maximum, unsigned short fire_ticks_maximum, unsigned short freeze_ticks_maximum);
void entity_type_destroy(struct EntityType *type);

#endif /* entity_type_h */
