//
//  material_item_configuration.c
//  quark
//
//  Created by Evan Anderson on 11/13/22.
//

#include <stdlib.h>
#include "material_item_configuration.h"

void material_item_configuration_destroy(struct MaterialItemConfiguration *configuration) {
    free((char *) configuration->placed_block_material);
    free((char *) configuration->spawned_entity);
    free(configuration);
}
