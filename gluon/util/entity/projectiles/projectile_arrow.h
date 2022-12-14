//
//  projectile_arrow.h
//  gluon
//
//  Created by Evan Anderson on 11/9/22.
//

#ifndef projectile_arrow_h
#define projectile_arrow_h

#include "../projectile.h"

struct ProjectileArrow {
    struct Projectile *projectile;
    
    double damage;
    unsigned short pierce_level;
};

void projectile_arrow_destroy(struct ProjectileArrow *arrow);

#endif /* projectile_arrow_h */
