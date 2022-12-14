//
//  creature.c
//  gluon
//
//  Created by Evan Anderson on 11/4/22.
//

#include <stdlib.h>
#include "creature.h"

void creature_destroy(struct Creature *creature) {
    living_entity_destroy(creature->living_entity);
    free(creature->target);
    free(creature);
}
