//
//  material.h
//  gluon
//
//  Created by Evan Anderson on 11/3/22.
//

#ifndef material_h
#define material_h

#include "material_names.h"
#include "material_category.h"
#include "material_configuration.h"

struct Material {
    const char *identifier;
    const struct MaterialNames *names;
    const struct MaterialCategory *categories;
    const struct MaterialConfiguration *configuration;
};

struct Material *material_create(const char *identifier, const struct MaterialNames *names, const struct MaterialConfiguration *configuration);
void material_destroy(struct Material *material);

extern struct Material MINECRAFT_AIR;
extern struct Material MINECRAFT_BEDROCK;

#endif /* material_h */