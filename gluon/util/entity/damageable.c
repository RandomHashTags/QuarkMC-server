//
//  damageable.c
//  gluon
//
//  Created by Evan Anderson on 11/4/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "damageable.h"

void damageable_destroy(struct Damageable *damageable) {
    entity_destroy(damageable->entity);
    free(damageable);
}

enum EntityDamageResult damageable_damage(struct Damageable *damageable, double amount) {
    printf("damaging damagable at address %p with uuid %d %f units\n", damageable, damageable->entity->uuid, amount);
    double new_amount = damageable->health - amount;
    enum EntityDamageResult result = ENTITY_DAMAGE_RESULT_SUCCESS;
    if (new_amount <= 0.00) {
        new_amount = 0;
        result = ENTITY_DAMAGE_RESULT_KILLED_VICTIM;
    }
    damageable->health = new_amount;
    return result;
}

_Bool damageable_is_dead(struct Damageable *damageable) {
    return damageable->health == 0.00;
}
