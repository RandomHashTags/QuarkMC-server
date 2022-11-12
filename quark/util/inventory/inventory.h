//
//  inventory.h
//  quark
//
//  Created by Evan Anderson on 11/3/22.
//

#ifndef inventory_h
#define inventory_h

#include "inventory_type.h"
#include "../item/item_stack.h"

struct Inventory {
    struct InventoryType type;
    
    int size;
    struct ItemStack *items;
    
    int viewers_count;
    struct Player *viewers;
};

void inventory_destroy(struct Inventory *inventory);

struct ItemStack *inventory_get_item(struct Inventory *inventory, int slot);
void inventory_set_item(struct Inventory *inventory, int slot, struct ItemStack *item);

#endif /* inventory_h */
