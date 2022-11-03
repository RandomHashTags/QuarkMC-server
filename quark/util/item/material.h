//
//  material.h
//  quark
//
//  Created by Evan Anderson on 11/3/22.
//

#ifndef material_h
#define material_h

enum Material {
    ACACIA_BOAT,
    ACACIA_BUTTON,
    ACACIA_CHEST_BOAT,
    ACACIA_DOOR,
    ACACIA_FENCE,
    ACACIA_FENCE_GATE,
    ACACIA_LEAVES,
    ACACIA_LOG,
    ACACIA_PLANKS,
    ACACIA_PRESSURE_PLATE,
    ACACIA_SAPLING,
    ACACIA_SIGN,
    ACACIA_SLAB,
    ACACIA_STAIRS,
    ACACIA_TRAPDOOR,
    ACACIA_WALL_SIGN,
    ACACIA_WOOD,
    ACTIVATOR_RAIL,
    AIR,
    ALLAY_SPAWN_EGG,
    ALLIUM,
    AMETHYST_BLOCK,
    AMETHYST_CLUSTER,
    AMETHYST_SHARD,
    ANCIENT_DEBRIS,
    ANDESITE,
    ANDESITE_SLAB,
    ANDESITE_STAIRS,
    ANVIL,
    APPLE,
    ARMOR_STAND,
    ARROW,
    ATTACHED_MELON_STEM,
    ATTACHED_PUMPKIN_STEM,
    AXOLOTL_BUCKET,
    AXOLOTL_SPAWN_EGG,
    AZALEA,
    AZALEA_LEAVES,
    AZURE_BLUET,
    
    BAKED_POTATO,
    BAMBOO,
    BAMBOO_SAPLING,
    BARREL,
    BARRIER,
    BASALT,
    BAT_SPAWN_EGG,
    BEACON,
    BEDROCK,
    BEE_NEST,
    BEE_SPAWN_EGG,
    BEEF,
    BEEHIVE,
    BEETROOT,
    BEETROOT_SEEDS,
    BEETROOT_SOUP,
    BEETROOTS,
    BELL,
    BIG_DRIPLEAF,
    BIG_DRIPLEAF_STEM,
    BIRCH_BOAT,
    BIRCH_BUTTON,
    BIRCH_CHEST_BOAT,
    BIRCH_DOOR,
    BIRCH_FENCE,
    BIRCH_FENCE_GATE,
    BIRCH_LEAVES,
    BIRCH_LOG,
    BIRCH_PLANKS,
    BIRCH_PRESSURE_PLATE,
    BIRCH_SAPLING,
    BIRCH_SIGN,
    BIRCH_SLAB,
    BIRCH_STAIRS,
    BIRCH_TRAPDOOR,
    BIRCH_WALL_SIGN,
    BIRCH_WOOD,
    BLACK_BANNER,
    BLACK_BED,
    BLACK_CANDLE,
    BLACK_CANDLE_CAKE,
    BLACK_CARPET,
    BLACK_CONCRETE,
    BLACK_CONCRETE_POWDER,
    BLACK_DYE,
    BLACK_GLAZED_TERRACOTTA,
    BLACK_LEATHER_BOOTS,
    BLACK_LEATHER_CHESTPLATE,
    BLACK_LEATHER_HELMET,
    BLACK_LEATHER_LEGGINGS,
    BLACK_SHULKER_BOX,
    BLACK_STAINED_GLASS,
    BLACK_STAINED_GLASS_PANE,
    BLACK_TERRACOTTA,
    BLACK_WOOL,
    BLACKSTONE,
    BLACKSTONE_SLAB,
    BLACKSTONE_STAIRS,
    BLACKSTONE_WALL,
    BLAST_FURNACE,
    BLAZE_POWDER,
    BLAZE_ROD,
    BLAZE_SPAWN_EGG,
    BLUE_BANNER,
    BLUE_BED,
    BLUE_CANDLE,
    BLUE_CANDLE_CAKE,
    BLUE_CARPET,
    BLUE_CONCRETE,
    BLUE_CONCRETE_POWDER,
    BLUE_DYE,
    BLUE_GLAZED_TERRACOTTA,
    BLUE_LEATHER_BOOTS,
    BLUE_LEATHER_CHESTPLATE,
    BLUE_LEATHER_HELMET,
    BLUE_LEATHER_LEGGINGS,
    BLUE_ICE,
    BLUE_ORCHID,
    BLUE_SHULKER_BOX,
    BLUE_STAINED_GLASS,
    BLUE_STAINED_GLASS_PANE,
    BLUE_TERRACOTTA,
    BLUE_WALL_BANNER,
    BLUE_WOOL,
    BONE,
    BONE_BLOCK,
    BONE_MEAL,
    BOOK,
    BOOKSHELF,
    BOW,
    BOWL,
    BRAIN_CORAL,
    BRAIN_CORAL_BLOCK,
    BRAIN_CORAL_FAN,
    BRAIN_CORAL_WALL_FAN,
    BREAD,
    BREWING_STAND,
    BREWING_STAND_ITEM,
    BRICK,
    BRICK_SLAB,
    BRICK_STAIRS,
    BRICK_WALL,
    BRICKS,
    BROWN_BANNER,
    BROWN_BED,
    BROWN_CANDLE,
    BROWN_CANDLE_CAKE,
    BROWN_CARPET,
    BROWN_CONCRETE,
    BROWN_CONCRETE_POWDER,
    BROWN_GLAZED_TERRACOTTA,
    BROWN_LEATHER_BOOTS,
    BROWN_LEATHER_CHESTPLATE,
    BROWN_LEATHER_HELMET,
    BROWN_LEATHER_LEGGINGS,
    BROWN_MUSHROOM,
    BROWN_MUSHROOM_BLOCK,
    BROWN_SHULKER_BOX,
    BROWN_STAINED_GLASS,
    BROWN_STAINED_GLASS_PANE,
    BROWN_TERRACOTTA,
    BROWN_WALL_BANNER,
    BROWN_WOOL,
    BUBBLE_COLUMN,
    BUBBLE_CORAL,
    BUBBLE_CORAL_BLOCK,
    BUBBLE_CORAL_FAN,
    BUBBLE_CORAL_WALL_FAN,
    BUCKET,
    BUDDING_AMETHYST,
    BUNDLE,
    BURNING_FURNACE,
    
    CACTUS,
    CAKE,
    CAKE_BLOCK,
    CALCITE,
    CAMPFIRE,
    CANDLE,
    CANDLE_CAKE,
    CARROT,
    CARROT_ITEM,
    CARROT_ON_A_STICK,
    CARTOGRAPHY_TABLE,
    CARVED_PUMPKIN,
    CAT_SPAWN_EGG,
    CAULDRON,
    CAULDRON_ITEM,
    CAVE_AIR,
    CAVE_SPIDER_SPAWN_EGG,
    CAVE_VINES,
    CAVE_VINES_PLANT,
    CHAIN,
    CHAIN_COMMAND_BLOCK,
    CHAINMAIL_BOOTS,
    CHAINMAIL_CHESTPLATE,
    CHAINMAIL_HELMET,
    CHAINMAIL_LEGGINGS,
    CHARCOAL,
    CHEST,
    CHEST_MINECART,
    CHICKEN,
    CHICKEN_SPAWN_EGG,
    CHIPPED_ANVIL,
    CHISELED_DEEPSLATE,
    CHISELED_NETHER_BRICKS,
    CHISELED_POLISHED_BLACKSTONE,
    CHISELED_QUARTZ_BLOCK,
    CHISELED_RED_SANDSTONE,
    CHISELED_SANDSTONE,
    CHISELED_STONE_BRICKS,
    CHORUS_FLOWER,
    CHORUS_FRUIT,
    CHORUS_PLANT,
    CLAY,
    CLAY_BALL,
    CLOCK,
    COAL,
    COAL_BLOCK,
    COAL_ORE,
    COARSE_DIRT,
    COBBLED_DEEPSLATE,
    COBBLED_DEEPSLATE_SLAB,
    COBBLED_DEEPSLATE_STAIRS,
    COBBLED_DEEPSLATE_WALL,
    COBBLESTONE,
    COBBLESTONE_SLAB,
    COBBLESTONE_STAIRS,
    COBBLESTONE_WALL,
    COBWEB,
    COCOA,
    COCOA_BEANS,
    COD,
    COD_BUCKET,
    COD_SPAWN_EGG,
    COMMAND_BLOCK,
    COMMAND_BLOCK_MINECART,
    COMPARATOR,
    COMPASS,
    COMPOSTER,
    CONDUIT,
    COOKED_BEEF,
    COOKED_CHICKEN,
    COOKED_COD,
    COOKED_MUTTON,
    COOKED_PORKCHOP,
    COOKED_RABBIT,
    COOKED_SALMON,
    COOKIE,
    COPPER_BLOCK,
    COPPER_INGOT,
    COPPER_ORE,
    CORNFLOWER,
    COW_SPAWN_EGG,
    CRACKED_DEEPSLATE_BRICKS,
    CRACKED_DEEPSLATE_TILES,
    CRACKED_NETHER_BRICKS,
    CRACKED_POLISHED_BLACKSTONE_BRICKS,
    CRACKED_STONE_BRICKS,
    CRAFTING_TABLE,
    CREEPER_BANNER_PATTERN,
    CREEPER_HEAD,
    CREEPER_SPAWN_EGG,
    CREEPER_WALL_HEAD,
    CRIMSON_BUTTON,
    CRIMSON_DOOR,
    CRIMSON_FENCE,
    CRIMSON_FENCE_GATE,
    CRIMSON_FUNGUS,
    CRIMSON_HYPHAE,
    CRIMSON_NYLIUM,
    CRIMSON_PLANKS,
    CRIMSON_PRESSURE_PLATE,
    CRIMSON_ROOTS,
    CRIMSON_SIGN,
    CRIMSON_SLAB,
    CRIMSON_STAIRS,
    CRIMSON_STEM,
    CRIMSON_TRAPDOOR,
    CRIMSON_WALL_SIGN,
    CROSSBOW,
    CRYING_OBSIDIAN,
    CUT_COPPER,
    CUT_COPPER_SLAB,
    CUT_COPPER_STAIRS,
    CUT_RED_SANDSTONE,
    CUR_RED_SANDSTONE_SLAB,
    CUT_SANDSTONE,
    CUT_SANDSTONE_SLAB,
    CYAN_BANNER,
    CYAN_BED,
    CYAN_CANDLE,
    CYAN_CANDLE_CAKE,
    CYAN_CARPET,
    CYAN_CONCRETE,
    CYAN_CONCRETE_POWDER,
    CYAN_DYE,
    CYAN_GLAZED_TERRACOTTA,
    CYAN_LEATHER_BOOTS,
    CYAN_LEATHER_CHESTPLATE,
    CYAN_LEATHER_HELMET,
    CYAN_LEATHER_LEGGINGS,
    CYAN_SHULKER_BOX,
    CYAN_STAINED_GLASS,
    CYAN_STAINED_GLASS_PANE,
    CYAN_TERRACOTTA,
    CYAN_WALL_BANNER,
    CYAN_WOOL,
    
    DAMAGED_ANVIL,
    DANDELION,
    DARK_OAK_BOAT,
    DARK_OAK_BUTTON,
    DARK_OAK_CHEST_BOAT,
    DARK_OAK_DOOR,
    DARK_OAK_DOOR_ITEM,
    DARK_OAK_FENCE,
    DARK_OAK_FENCE_GATE,
    DARK_OAK_LEAVES,
    DARK_OAK_LOG,
    DARK_OAK_PLANKS,
    DARK_OAK_PRESSURE_PLATE,
    DARK_OAK_SAPLING,
    DARK_OAK_SIGN,
    DARK_OAK_SLAB,
    DARK_OAK_STAIRS,
    DARK_OAK_TRAPDOOR,
    DARK_OAK_WALL_SIGN,
    DARK_OAK_WOOD,
    DARK_PRISMARINE,
    DARK_PRISMARINE_SLAB,
    DARK_PRISMARINE_STAIRS,
    DAYLIGHT_DETECTOR,
    DEAD_BRAIN_CORAL,
    DEAD_BRAIN_CORAL_BLOCK,
    DEAD_BRAIN_CORAL_FAN,
    DEAD_BRAIN_CORAL_WALL_FAN,
    DEAD_BUBBLE_CORAL,
    DEAD_BUBBLE_CORAL_BLOCK,
    DEAD_BUBBLE_CORAL_FAN,
    DEAD_BUBBLE_CORAL_WALL_FAN,
    DEAD_BUSH,
    DEAD_FIRE_CORAL,
    DEAD_FIRE_CORAL_BLOCK,
    DEAD_FIRE_CORAL_FAN,
    DEAD_FIRE_CORAL_WALL_FAN,
    DEAD_HORN_CORAL,
    DEAD_HORN_CORAL_BLOCK,
    DEAD_HORN_CORAL_FAN,
    DEAD_HORN_CORAL_WALL_FAN,
    DEAD_TUBE_CORAL,
    DEAD_TUBE_CORAL_BLOCK,
    DEAD_TUBE_CORAL_FAN,
    DEAD_TUBE_CORAL_WALL_FAN,
    DEBUG_STICK,
    DEEPSLATE,
    DEEPSLATE_BRICK_SLAB,
    DEEPSLATE_BRICK_STAIRS,
    DEEPSLATE_BRICK_WALL,
    DEEPSLATE_BRICKS,
    DEEPSLATE_COAL_ORE,
    DEEPSLATE_COPPER_ORE,
    DEEPSLATE_DIAMOND_ORE,
    DEEPSLATE_EMERALD_ORE,
    DEEPSLATE_GOLD_ORE,
    DEEPSLATE_IRON_ORE,
    DEEPSLATE_LAPIS_ORE,
    DEEPSLATE_REDSTONE_ORE,
    DEEPSLATE_TILE_SLAB,
    DEEPSLATE_TILE_STAIRS,
    DEEPSLATE_TILE_WALL,
    DEEPSLATE_TILES,
    DETECTOR_RAIL,
    DIAMOND,
    DIAMOND_AXE,
    DIAMOND_BLOCK,
    DIAMOND_BOOTS,
    DIAMOND_CHESTPLATE,
    DIAMOND_HELMET,
    DIAMOND_HOE,
    DIAMOND_HORSE_ARMOR,
    DIAMOND_LEGGINGS,
    DIAMOND_ORE,
    DIAMOND_PICKAXE,
    DIAMOND_SHOVEL,
    DIAMOND_SWORD,
    DIORITE,
    DIORITE_SLAB,
    DIORITE_STAIRS,
    DIORITE_WALL,
    DIRT,
    DIRT_PATH,
    DISC_FRAGMENT_5,
    DISPENSER,
    DOLPHIN_SPAWN_EGG,
    DONKEY_SPAWN_EGG,
    DRAGON_BREATH,
    DRAGON_EGG,
    DRAGON_HEAD,
    DRAGON_HEAD_ITEM,
    DRAGON_WALL_HEAD,
    DRIED_KELP,
    DRIED_KELP_BLOCK,
    DRIPSTONE_BLOCK,
    DROPPER,
    DROWNED_SPAWN_EGG,
    
    ECHO_SHARD,
    EGG,
    ELDER_GUARDIAN_SPAWN_EGG,
    ELYTRA,
    EMERALD,
    EMERALD_BLOCK,
    EMERALD_ORE,
    ENCHANTED_BOOK,
    ENCHANTED_BOOK_AQUA_AFFINITY,
    ENCHANTED_BOOK_BANE_OF_ARTHROPODS_1,
    ENCHANTED_BOOK_BANE_OF_ARTHROPODS_2,
    ENCHANTED_BOOK_BANE_OF_ARTHROPODS_3,
    ENCHANTED_BOOK_BANE_OF_ARTHROPODS_4,
    ENCHANTED_BOOK_BANE_OF_ARTHROPODS_5,
    ENCHANTED_BOOK_BLAST_PROTECTION_1,
    ENCHANTED_BOOK_BLAST_PROTECTION_2,
    ENCHANTED_BOOK_BLAST_PROTECTION_3,
    ENCHANTED_BOOK_BLAST_PROTECTION_4,
    ENCHANTED_BOOK_CHANNELING,
    ENCHANTED_BOOK_CURSE_OF_BINDING,
    ENCHANTED_BOOK_CURSE_OF_VANISHING,
    ENCHANTED_BOOK_DEPTH_STRIDER_1,
    ENCHANTED_BOOK_DEPTH_STRIDER_2,
    ENCHANTED_BOOK_DEPTH_STRIDER_3,
    ENCHANTED_BOOK_EFFICIENCY_1,
    ENCHANTED_BOOK_EFFICIENCY_2,
    ENCHANTED_BOOK_EFFICIENCY_3,
    ENCHANTED_BOOK_EFFICIENCY_4,
    ENCHANTED_BOOK_EFFICIENCY_5,
    ENCHANTED_BOOK_FEATHER_FALLING_1,
    ENCHANTED_BOOK_FEATHER_FALLING_2,
    ENCHANTED_BOOK_FEATHER_FALLING_3,
    ENCHANTED_BOOK_FEATHER_FALLING_4,
    ENCHANTED_BOOK_FIRE_ASPECT_1,
    ENCHANTED_BOOK_FIRE_ASPECT_2,
    ENCHANTED_BOOK_FIRE_PROTECTION_1,
    ENCHANTED_BOOK_FIRE_PROTECTION_2,
    ENCHANTED_BOOK_FIRE_PROTECTION_3,
    ENCHANTED_BOOK_FIRE_PROTECTION_4,
    ENCHANTED_BOOK_FLAME,
    ENCHANTED_BOOK_FORTUNE_1,
    ENCHANTED_BOOK_FORTUNE_2,
    ENCHANTED_BOOK_FORTUNE_3,
    ENCHANTED_BOOK_FROST_WALKER_1,
    ENCHANTED_BOOK_FROST_WALKER_2,
    ENCHANTED_BOOK_IMPALING_1,
    ENCHANTED_BOOK_IMPALING_2,
    ENCHANTED_BOOK_IMPALING_3,
    ENCHANTED_BOOK_IMPALING_4,
    ENCHANTED_BOOK_IMPALING_5,
    ENCHANTED_BOOK_INFINITY,
    ENCHANTED_BOOK_KNOCKBACK_1,
    ENCHANTED_BOOK_KNOCKBACK_2,
    ENCHANTED_BOOK_LOOTING_1,
    ENCHANTED_BOOK_LOOTING_2,
    ENCHANTED_BOOK_LOOTING_3,
    ENCHANTED_BOOK_LOYALTY_1,
    ENCHANTED_BOOK_LOYALTY_2,
    ENCHANTED_BOOK_LOYALTY_3,
    ENCHANTED_BOOK_LUCK_OF_THE_SEA_1,
    ENCHANTED_BOOK_LUCK_OF_THE_SEA_2,
    ENCHANTED_BOOK_LUCK_OF_THE_SEA_3,
    ENCHANTED_BOOK_LURE_1,
    ENCHANTED_BOOK_LURE_2,
    ENCHANTED_BOOK_LURE_3,
    ENCHANTED_BOOK_MENDING,
    ENCHANTED_BOOK_MULTI_SHOT,
    ENCHANTED_BOOK_PIERCING_1,
    ENCHANTED_BOOK_PIERCING_2,
    ENCHANTED_BOOK_PIERCING_3,
    ENCHANTED_BOOK_PIERCING_4,
    ENCHANTED_BOOK_POWER_1,
    ENCHANTED_BOOK_POWER_2,
    ENCHANTED_BOOK_POWER_3,
    ENCHANTED_BOOK_POWER_4,
    ENCHANTED_BOOK_POWER_5,
    ENCHANTED_BOOK_PROJECTILE_PROTECTION_1,
    ENCHANTED_BOOK_PROJECTILE_PROTECTION_2,
    ENCHANTED_BOOK_PROJECTILE_PROTECTION_3,
    ENCHANTED_BOOK_PROJECTILE_PROTECTION_4,
    ENCHANTED_BOOK_PROTECTION_1,
    ENCHANTED_BOOK_PROTECTION_2,
    ENCHANTED_BOOK_PROTECTION_3,
    ENCHANTED_BOOK_PROTECTION_4,
    ENCHANTED_BOOK_PUNCH_1,
    ENCHANTED_BOOK_PUNCH_2,
    ENCHANTED_BOOK_QUICK_CHARGE_1,
    ENCHANTED_BOOK_QUICK_CHARGE_2,
    ENCHANTED_BOOK_QUICK_CHARGE_3,
    ENCHANTED_BOOK_RESPIRATION_1,
    ENCHANTED_BOOK_RESPIRATION_2,
    ENCHANTED_BOOK_RESPIRATION_3,
    ENCHANTED_BOOK_RIPTIDE_1,
    ENCHANTED_BOOK_RIPTIDE_2,
    ENCHANTED_BOOK_RIPTIDE_3,
    ENCHANTED_BOOK_SHARPNESS_1,
    ENCHANTED_BOOK_SHARPNESS_2,
    ENCHANTED_BOOK_SHARPNESS_3,
    ENCHANTED_BOOK_SHARPNESS_4,
    ENCHANTED_BOOK_SHARPNESS_5,
    ENCHANTED_BOOK_SILK_TOUCH,
    ENCHANTED_BOOK_SMITE_1,
    ENCHANTED_BOOK_SMITE_2,
    ENCHANTED_BOOK_SMITE_3,
    ENCHANTED_BOOK_SMITE_4,
    ENCHANTED_BOOK_SMITE_5,
    ENCHANTED_BOOK_SOUL_SPEED_1,
    ENCHANTED_BOOK_SOUL_SPEED_2,
    ENCHANTED_BOOK_SOUL_SPEED_3,
    ENCHANTED_BOOK_SWEEPING_EDGE_1,
    ENCHANTED_BOOK_SWEEPING_EDGE_2,
    ENCHANTED_BOOK_SWEEPING_EDGE_3,
    ENCHANTED_BOOK_THORNS_1,
    ENCHANTED_BOOK_THORNS_2,
    ENCHANTED_BOOK_THORNS_3,
    ENCHANTED_BOOK_UNBREAKING_1,
    ENCHANTED_BOOK_UNBREAKING_2,
    ENCHANTED_BOOK_UNBREAKING_3,
    ENCHANTED_GOLDEN_APPLE,
    ENCHANTING_TABLE,
    END_CRYSTAL,
    END_GATEWAY,
    END_PORTAL,
    END_PORTAL_FRAME,
    END_ROD,
    END_STONE,
    END_STONE_BRICK_SLAB,
    END_STONE_BRICK_STAIRS,
    END_STONE_BRICK_WALL,
    END_STONE_BRICKS,
    ENDER_CHEST,
    ENDER_EYE,
    ENDER_PEARL,
    ENDERMAN_SPAWN_EGG,
    ENDERMITE_SPAWN_EGG,
    EVOKER_SPAWN_EGG,
    EXPERIENCE_BOTTLE,
    
    FARMLAND,
    FEATHER,
    FERMENTED_SPIDER_EYE,
    FERN,
    FILLED_MAP,
    FIRE,
    FIRE_CHARGE,
    FIRE_CORAL,
    FIRE_CORAL_BLOCK,
    FIRE_CORAL_FAN,
    FIRE_CORAL_WALL_FAN,
    FIREWORK_ROCKET,
    FIREWORK_STAR,
    FISHING_ROD,
    FLETCHING_TABLE,
    FLINT,
    FLINT_AND_STEEL,
    FLOWER_BANNER_PATTERN,
    FLOWER_POT,
    FLOWER_POT_ITEM,
    FOX_SPAWN_EGG,
    FROG_SPAWN_EGG,
    FROGSPAWN,
    FROSTED_ICE,
    FURNACE,
    FURNACE_MINECART,
    GHAST_SPAWN_EGG,
    GHAST_TEAR,
    GILDED_BLACKSTONE,
    GLASS,
    GLASS_BOTTLE,
    GLASS_PANE,
    GLISTERING_MELON_SLICE,
    GLOBE_BANNER_PATTERN,
    GLOW_BERRIES,
    GLOW_INK_SAC,
    GLOW_ITEM_FRAME,
    GLOW_LICHEN,
    GLOW_SQUID_SPAWN_EGG,
    GLOWING_REDSTONE_ORE,
    GLOWSTONE,
    GLOWSTONE_DUST,
    GOAT_HORN,
    GOAT_SPAWN_EGG,
    GOLD_BLOCK,
    GOLD_INGOT,
    GOLD_NUGGET,
    GOLD_ORE,
    GOLDEN_APPLE,
    GOLDEN_AXE,
    GOLDEN_BOOTS,
    GOLDEN_CARROT,
    GOLDEN_CHESTPLATE,
    GOLDEN_HELMET,
    GOLDEN_HOE,
    GOLDEN_HORSE_ARMOR,
    GOLDEN_LEGGINGS,
    GOLDEN_PICKAXE,
    GOLDEN_SHOVEL,
    GOLDEN_SWORD,
    GRANITE,
    GRANITE_SLAB,
    GRANITE_STAIRS,
    GRANITE_WALL,
    GRASS,
    GRASS_BLOCK,
    GRASS_PATH,
    GRAVEL,
    GRAY_BANNER,
    GRAY_BED,
    GRAY_CANDLE,
    GRAY_CANDLE_CAKE,
    GRAY_CARPET,
    GRAY_CONCRETE,
    GRAY_CONCRETE_POWDER,
    GRAY_DYE,
    GRAY_GLAZED_TERRACOTTA,
    GRAY_LEATHER_BOOTS,
    GRAY_LEATHER_CHESTPLATE,
    GRAY_LEATHER_HELMET,
    GRAY_LEATHER_LEGGINGS,
    GRAY_SHULKER_BOX,
    GRAY_STAINED_GLASS,
    GRAY_STAINED_GLASS_PANE,
    GRAY_TERRACOTTA,
    GRAY_WALL_BANNER,
    GRAY_WOOL,
    GREEN_BANNER,
    GREEN_BED,
    GREEN_CANDLE,
    GREEN_CANDLE_CAKE,
    GREEN_CARPET,
    GREEN_CONCRETE,
    GREEN_CONCRETE_POWDER,
    GREEN_DYE,
    GREEN_GLAZED_TERRACOTTA,
    GREEN_LEATHER_BOOTS,
    GREEN_LEATHER_CHESTPLATE,
    GREEN_LEATHER_HELMET,
    GREEN_LEATHER_LEGGINGS,
    GREEN_SHULKER_BOX,
    GREEN_STAINED_GLASS,
    GREEN_STAINED_GLASS_PANE,
    GREEN_TERRACOTTA,
    GREEN_WALL_BANNER,
    GREEN_WOOL,
    GRINDSTONE,
    GUARDIAN_SPAWN_EGG,
    GUNPOWDER,
    
    HANGING_ROOTS,
    HAY_BLOCK,
    HEART_OF_THE_SEA,
    HEAVY_WEIGHTED_PRESSURE_PLATE,
    HOGLIN_SPAWN_EGG,
    HONEY_BLOCK,
    HONEY_BOTTLE,
    HONEYCOMB,
    HONEYCOMB_BLOCK,
    HOPPER,
    HOPPER_MINECART,
    HORN_CORAL,
    HORN_CORAL_BLOCK,
    HORN_CORAL_FAN,
    HORN_CORAL_WALL_FAN,
    HORSE_SPAWN_EGG,
    HUSK_SPAWN_EGG,
    
    ICE,
    INFESTED_CHISELED_STONE_BRICKS,
    INFESTED_COBBLESTONE,
    INFESTED_CRACKED_STONE_BRICKS,
    INFESTED_DEEPSLATE,
    INFESTED_MOSSY_STONE_BRICKS,
    INFESTED_STONE,
    INFESTED_STONE_BRICKS,
    INK_SAC,
    IRON_AXE,
    IRON_BARS,
    IRON_BLOCK,
    IRON_BOOTS,
    IRON_CHESTPLATE,
    IRON_DOOR,
    IRON_DOOR_ITEM,
    IRON_HELMET,
    IRON_HOE,
    IRON_HORSE_ARMOR,
    IRON_INGOT,
    IRON_LEGGINGS,
    IRON_NUGGET,
    IRON_ORE,
    IRON_PICKAXE,
    IRON_SHOVEL,
    IRON_SWORD,
    IRON_TRAPDOOR,
    ITEM_FRAME,
    
    JACK_O_LANTERN,
    JIGSAW,
    JUKEBOX,
    JUNGLE_BOAT,
    JUNGLE_BUTTON,
    JUNGLE_CHEST_BOAT,
    JUNGLE_DOOR,
    JUNGLE_DOOR_ITEM,
    JUNGLE_FENCE,
    JUNGLE_FENCE_GATE,
    JUNGLE_LEAVES,
    JUNGLE_LOG,
    JUNGLE_PLANKS,
    JUNGLE_PRESSURE_PLATE,
    JUNGLE_SAPLING,
    JUNGLE_SIGN,
    JUNGLE_SLAB,
    JUNGLE_STAIRS,
    JUNGLE_TRAPDOOR,
    JUNGLE_WALL_SIGN,
    JUNGLE_WOOD,
    
    KELP,
    KELP_PLANT,
    KNOWLEDGE_BOOK,
    
    LADDER,
    LANTERN,
    LAPIS_BLOCK,
    LAPIS_LAZULI,
    LAPIS_ORE,
    LARGE_AMETHYST_BUD,
    LARGE_FERN,
    LAVA,
    LAVA_BUCKET,
    LEAD,
    LEATHER,
    LEATHER_BOOTS,
    LEATHER_CHESTPLATE,
    LEATHER_HELMET,
    LEATHER_HORSE_ARMOR,
    LEATHER_LEGGINGS,
    LECTERN,
    LEVER,
    LIGHT_BLUE_BANNER,
    LIGHT_BLUE_BED,
    LIGHT_BLUE_CANDLE,
    LIGHT_BLUE_CANDLE_CAKE,
    LIGHT_BLUE_CARPET,
    LIGHT_BLUE_CONCRETE,
    LIGHT_BLUE_CONCRETE_POWDER,
    LIGHT_BLUE_DYE,
    LIGHT_BLUE_GLAZED_TERRACOTTA,
    LIGHT_BLUE_SHULKER_BOX,
    LIGHT_BLUE_LEATHER_BOOTS,
    LIGHT_BLUE_LEATHER_CHESTPLATE,
    LIGHT_BLUE_LEATHER_HELMET,
    LIGHT_BLUE_LEATHER_LEGGINGS,
    LIGHT_BLUE_STAINED_GLASS,
    LIGHT_BLUE_STAINED_GLASS_PANE,
    LIGHT_BLUE_TERRACOTTA,
    LIGHT_BLUE_WALL_BANNER,
    LIGHT_BLUE_WOOL,
    LIGHT_GRAY_BANNER,
    LIGHT_GRAY_BED,
    LIGHT_GRAY_CANDLE,
    LIGHT_GRAY_CANDLE_CAKE,
    LIGHT_GRAY_CARPET,
    LIGHT_GRAY_CONCRETE,
    LIGHT_GRAY_CONCRETE_POWDER,
    LIGHT_GRAY_DYE,
    LIGHT_GRAY_GLAZED_TERRACOTTA,
    LIGHT_GRAY_LEATHER_BOOTS,
    LIGHT_GRAY_LEATHER_CHESTPLATE,
    LIGHT_GRAY_LEATHER_HELMET,
    LIGHT_GRAY_LEATHER_LEGGINGS,
    LIGHT_GRAY_SHULKER_BOX,
    LIGHT_GRAY_STAINED_GLASS,
    LIGHT_GRAY_STAINED_GLASS_PANE,
    LIGHT_GRAY_TERRACOTTA,
    LIGHT_GRAY_WALL_BANNER,
    LIGHT_GRAY_WOOL,
    LIGHT_WEIGHTED_PRESSURE_PLATE,
    LIGHTNING_ROD,
    LILAC,
    LILY_OF_THE_VALLEY,
    LILY_PAD,
    LIME_BANNER,
    LIME_BED,
    LIME_CANDLE,
    LIME_CANDLE_CAKE,
    LIME_CARPET,
    LIME_CONCRETE,
    LIME_CONCRETE_POWDER,
    LIME_DYE,
    LIME_GLAZED_TERRACOTTA,
    LIME_LEATHER_BOOTS,
    LIME_LEATHER_CHESTPLATE,
    LIME_LEATHER_HELMET,
    LIME_LEATHER_LEGGINGS,
    LIME_SHULKER_BOX,
    LIME_STAINED_GLASS,
    LIME_STAINED_GLASS_PANE,
    LIME_TERRACOTTA,
    LIME_WALL_BANNER,
    LIME_WOOL,
    LINGERING_POTION,
    LINGERING_POTION_AWKWARD,
    LINGERING_POTION_FIRE_RESISTANCE,
    LINGERING_POTION_FIRE_RESISTANCE_EXTENDED,
    LINGERING_POTION_HARMING_1,
    LINGERING_POTION_HARMING_2,
    LINGERING_POTION_HEALING_1,
    LINGERING_POTION_HEALING_2,
    LINGERING_POTION_INVISIBILITY,
    LINGERING_POTION_INVISIBILITY_EXTENDED,
    LINGERING_POTION_LEAPING_1,
    LINGERING_POTION_LEAPING_1_EXTENDED,
    LINGERING_POTION_LEAPING_2,
    LINGERING_POTION_LUCK,
    LINGERING_POTION_MUNDANE,
    LINGERING_POTION_NIGHT_VISION,
    LINGERING_POTION_NIGHT_VISION_EXTENDED,
    LINGERING_POTION_POISON_1,
    LINGERING_POTION_POISON_1_EXTENDED,
    LINGERING_POTION_POISON_2,
    LINGERING_POTION_REGENERATION_1,
    LINGERING_POTION_REGENERATION_1_EXTENDED,
    LINGERING_POTION_REGENERATION_2,
    LINGERING_POTION_SLOW_FALLING,
    LINGERING_POTION_SLOW_FALLING_EXTENDED,
    LINGERING_POTION_SLOWNESS_1,
    LINGERING_POTION_SLOWNESS_1_EXTENDED,
    LINGERING_POTION_SLOWNESS_2,
    LINGERING_POTION_STRENGTH_1,
    LINGERING_POTION_STRENGTH_1_EXTENDED,
    LINGERING_POTION_STRENGTH_2,
    LINGERING_POTION_SWIFTNESS_1,
    LINGERING_POTION_SWIFTNESS_1_EXTENDED,
    LINGERING_POTION_SWIFTNESS_2,
    LINGERING_POTION_THICK,
    LINGERING_POTION_TURTLE_MASTER_1,
    LINGERING_POTION_TURTLE_MASTER_1_EXTENDED,
    LINGERING_POTION_TURTLE_MASTER_2,
    LINGERING_POTION_WATER,
    LINGERING_POTION_WATER_BREATHING,
    LINGERING_POTION_WATER_BREATHING_EXTENDED,
    LINGERING_POTION_WEAKNESS,
    LINGERING_POTION_WEAKNESS_EXTENDED,
    LLAMA_SPAWN_EGG,
    LODESTONE,
    LOOM,
    
    MAGENTA_BANNER,
    MAGENTA_BED,
    MAGENTA_CANDLE,
    MAGENTA_CANDLE_CAKE,
    MAGENTA_CARPET,
    MAGENTA_CONCRETE,
    MAGENTA_CONCRETE_POWDER,
    MAGENTA_DYE,
    MAGENTA_GLAZED_TERRACOTTA,
    MAGENTA_LEATHER_BOOTS,
    MAGENTA_LEATHER_CHESTPLATE,
    MAGENTA_LEATHER_HELMET,
    MAGENTA_LEATHER_LEGGINGS,
    MAGENTA_SHULKER_BOX,
    MAGENTA_STAINED_GLASS,
    MAGENTA_STAINED_GLASS_PANE,
    MAGENTA_TERRACOTTA,
    MAGENTA_WALL_BANNER,
    MAGENTA_WOOL,
    MAGMA_BLOCK,
    MAGMA_CREAM,
    MAGMA_CUBE_SPAWN_EGG,
    MANGROVE_BOAT,
    MANGROVE_BUTTON,
    MANGROVE_CHEST_BOAT,
    MANGROVE_DOOR,
    MANGROVE_FENCE,
    MANGROVE_FENCE_GATE,
    MANGROVE_LEAVES,
    MANGROVE_LOG,
    MANGROVE_PLANKS,
    MANGROVE_PRESSURE_PLATE,
    MANGROVE_PROPAGULE,
    MANGROVE_ROOTS,
    MANGROVE_SIGN,
    MANGROVE_SLAB,
    MANGROVE_STAIRS,
    MANGROVE_TRAPDOOR,
    MANGROVE_WALL_SIGN,
    MANGROVE_WOOD,
    MAP,
    MEDIUM_AMETHYST_BUD,
    MELON,
    MELON_SEEDS,
    MELON_SLICE,
    MELON_STEM,
    MILK_BUCKET,
    MINECART,
    MOJANG_BANNER_PATTERN,
    MOOSHROOM_SPAWN_EGG,
    MOSS_BLOCK,
    MOSS_CARPET,
    MOSSY_COBBLESTONE,
    MOSSY_COBBLESTONE_SLAB,
    MOSSY_COBBLESTONE_STAIRS,
    MOSSY_COBBLESTONE_WALL,
    MOSSY_STONE_BRICK_SLAB,
    MOSSY_STONE_BRICK_STAIRS,
    MOSSY_STONE_BRICK_WALL,
    MOSSY_STONE_BRICKS,
    MOVING_PISTON,
    MUD,
    MUD_BRICK_SLAB,
    MUD_BRICK_STAIRS,
    MUD_BRICK_WALL,
    MUD_BRICKS,
    MUDDY_MANGROVE_ROOTS,
    MULE_SPAWN_EGG,
    MUSHROOM_STEM,
    MUSHROOM_STEW,
    MUSIC_DISC_11,
    MUSIC_DISC_13,
    MUSIC_DISC_5,
    MUSIC_DISC_BLOCKS,
    MUSIC_DISC_CAT,
    MUSIC_DISC_CHIRP,
    MUSIC_DISC_FAR,
    MUSIC_DISC_MALL,
    MUSIC_DISC_MELLOHI,
    MUSIC_DISC_OTHERSIDE,
    MUSIC_DISC_PIGSTEP,
    MUSIC_DISC_STAL,
    MUSIC_DISC_STRAD,
    MUSIC_DISC_WAIT,
    MUSIC_DISC_WARD,
    MUTTON,
    MYCELIUM,
    
    NAME_TAG,
    NAUTILUS_SHELL,
    NETHER_BRICK,
    NETHER_BRICK_FENCE,
    NETHER_BRICK_SLAB,
    NETHER_BRICK_STAIRS,
    NETHER_BRICK_WALL,
    NETHER_BRICKS,
    NETHER_GOLD_ORE,
    NETHER_PORTAL,
    NETHER_QUARTZ_ORE,
    NETHER_SPROUTS,
    NETHER_STAR,
    NETHER_WART,
    NETHER_WART_BLOCK,
    NETHERITE_AXE,
    NETHERITE_BLOCK,
    NETHERITE_BOOTS,
    NETHERITE_CHESTPLATE,
    NETHERITE_HELMET,
    NETHERITE_HOE,
    NETHERITE_INGOT,
    NETHERITE_LEGGINGS,
    NETHERITE_PICKAXE,
    NETHERITE_SCRAP,
    NETHERITE_SHOVEL,
    NETHERITE_SWORD,
    NETHERRACK,
    NOTE_BLOCK,
    
    OAK_BOAT,
    OAK_BUTTON,
    OAK_CHEST_BOAT,
    OAK_DOOR,
    OAK_DOOR_ITEM,
    OAK_FENCE,
    OAK_FENCE_GATE,
    OAK_LEAVES,
    OAK_LOG,
    OAK_PLANKS,
    OAK_PRESSURE_PLATE,
    OAK_SAPLING,
    OAK_SIGN,
    OAK_SLAB,
    OAK_STAIRS,
    OAK_TRAPDOOR,
    OAK_WALL_SIGN,
    OAK_WOOD,
    OBSERVER,
    OBSIDIAN,
    OCELOT_SPAWN_EGG,
    OCHRE_FROGLIGHT,
    ORANGE_BANNER,
    ORANGE_BED,
    ORANGE_CANDLE,
    ORANGE_CANDLE_CAKE,
    ORANGE_CARPET,
    ORANGE_CONCRETE,
    ORANGE_CONCRETE_POWDER,
    ORANGE_DYE,
    ORANGE_GLAZED_TERRACOTTA,
    ORANGE_LEATHER_BOOTS,
    ORANGE_LEATHER_CHESTPLATE,
    ORANGE_LEATHER_HELMET,
    ORANGE_LEATHER_LEGGINGS,
    ORANGE_SHULKER_BOX,
    ORANGE_STAINED_GLASS,
    ORANGE_STAINED_GLASS_PANE,
    ORANGE_TERRACOTTA,
    ORANGE_TULIP,
    ORANGE_WALL_BANNER,
    ORANGE_WOOL,
    OXEYE_DAISY,
    
    PACKED_ICE,
    PACKED_MUD,
    PAINTING,
    PANDA_SPAWN_EGG,
    PAPER,
    PARROT_SPAWN_EGG,
    PEARLESCENT_FROGLIGHT,
    PEONY,
    PETRIFIED_OAK_SLAB,
    PHANTOM_MEMBRANE,
    PHANTOM_SPAWN_EGG,
    PIG_SPAWN_EGG,
    PIGLIN_BANNER_PATTERN,
    PIGLIN_BRUTE_SPAWN_EGG,
    PIGLIN_SPAWN_EGG,
    PILLAGER_SPAWN_EGG,
    PINK_BANNER,
    PINK_BED,
    PINK_CANDLE,
    PINK_CANDLE_CAKE,
    PINK_CARPET,
    PINK_CONCRETE,
    PINK_CONCRETE_POWDER,
    PINK_DYE,
    PINK_GLAZED_TERRACOTTA,
    PINK_LEATHER_BOOTS,
    PINK_LEATHER_CHESTPLATE,
    PINK_LEATHER_HELMET,
    PINK_LEATHER_LEGGINGS,
    PINK_SHULKER_BOX,
    PINK_STAINED_GLASS,
    PINK_STAINED_GLASS_PANE,
    PINK_TERRACOTTA,
    PINK_TULIP,
    PINK_WALL_BANNER,
    PINK_WOOL,
    PISTON,
    PISTON_HEAD,
    PLAYER_HEAD,
    PLAYER_HEAD_ITEM,
    PLAYER_WALL_HEAD,
    PODZOL,
    POINTED_DRIPSTONE,
    POISONOUS_POTATO,
    POLAR_BEAR_SPAWN_EGG,
    POLISHED_ANDESITE,
    POLISHED_ANDESITE_SLAB,
    POLISHED_ANDESITE_STAIRS,
    POLISHED_BASALT,
    POLISHED_BLACKSTONE_BRICK_SLAB,
    POLISHED_BLACKSTONE_BRICK_STAIRS,
    POLISHED_BLACKSTONE_BRICK_WALL,
    POLISHED_BLACKSTONE_BRICKS,
    POLISHED_BLACKSTONE_BUTTON,
    POLISHED_BLACKSTONE_PRESSURE_PLATE,
    POLISHED_BLACKSTONE_SLAB,
    POLISHED_BLACKSTONE_STAIRS,
    POLISHED_BLACKSTONE_WALL,
    POLISHED_DEEPSLATE,
    POLISHED_DEEPSLATE_SLAB,
    POLISHED_DEEPSLATE_STAIRS,
    POLISHED_DEEPSLATE_WALL,
    POLISHED_DIORITE,
    POLISHED_DIORITE_SLAB,
    POLISHED_DIORITE_STAIRS,
    POLISHED_GRANITE,
    POLISHED_GRANITE_SLAB,
    POLISHED_GRANITE_STAIRS,
    POPPED_CHORUS_FRUIT,
    POPPY,
    PORKCHOP,
    POTATO_ITEM,
    POTATOES,
    POTION,
    POTION_AWKWARD,
    POTION_FIRE_RESISTANCE,
    POTION_FIRE_RESISTANCE_EXTENDED,
    POTION_HARMING_1,
    POTION_HARMING_2,
    POTION_HEALING_1,
    POTION_HEALING_2,
    POTION_INVISIBILITY,
    POTION_INVISIBILITY_EXTENDED,
    POTION_LEAPING_1,
    POTION_LEAPING_1_EXTENDED,
    POTION_LEAPING_2,
    POTION_LUCK,
    POTION_MUNDANE,
    POTION_NIGHT_VISION,
    POTION_NIGHT_VISION_EXTENDED,
    POTION_POISON_1,
    POTION_POISON_1_EXTENDED,
    POTION_POISON_2,
    POTION_REGENERATION_1,
    POTION_REGENERATION_1_EXTENDED,
    POTION_REGENERATION_2,
    POTION_SLOW_FALLING,
    POTION_SLOW_FALLING_EXTENDED,
    POTION_SLOWNESS_1,
    POTION_SLOWNESS_1_EXTENDED,
    POTION_SLOWNESS_2,
    POTION_STRENGTH_1,
    POTION_STRENGTH_1_EXTENDED,
    POTION_STRENGTH_2,
    POTION_SWIFTNESS_1,
    POTION_SWIFTNESS_1_EXTENDED,
    POTION_SWIFTNESS_2,
    POTION_THICK,
    POTION_TURTLE_MASTER_1,
    POTION_TURTLE_MASTER_1_EXTENDED,
    POTION_TURTLE_MASTER_2,
    POTION_WATER,
    POTION_WATER_BREATHING,
    POTION_WATER_BREATHING_EXTENDED,
    POTION_WEAKNESS,
    POTION_WEAKNESS_EXTENDED,
    POTTED_ACACIA_SAPLING,
    POTTED_ALLIUM,
    POTTED_AZURE_BLUET,
    POTTED_BAMBOO,
    POTTED_BIRCH_SAPLING,
    POTTED_BLUE_ORCHID,
    POTTED_BROWN_MUSHROOM,
    POTTED_CACTUS,
    POTTED_CORNFLOWER,
    POTTED_CRIMSON_FUNGUS,
    POTTED_CRIMSON_ROOTS,
    POTTED_DANDELION,
    POTTED_DARK_OAK_SAPLING,
    POTTED_DEAD_BUSH,
    POTTED_FERN,
    POTTED_JUNGLE_SAPLING,
    POTTED_LILY_OF_THE_VALLEY,
    POTTED_MANGROVE_PROPAGULE,
    POTTED_OAK_SAPLING,
    POTTED_ORANGE_TULIP,
    POTTED_OXEYE_DAISY,
    POTTED_PINK_TULIP,
    POTTED_POPPY,
    POTTED_RED_MUSHROOM,
    POTTED_RED_TULIP,
    POTTED_SPRUCE_SAPLING,
    POTTED_WARPED_FUNGUS,
    POTTED_WARPED_ROOTS,
    POTTED_WHITE_TULIP,
    POTTED_WITHER_ROSE,
    POWDER_SNOW,
    POWDER_SNOW_BUCKET,
    POWDER_SNOW_CAULDRON,
    POWERED_RAIL,
    PRISMARINE,
    PRISMARINE_BRICK_SLAB,
    PRISMARINE_BRICK_STAIRS,
    PRISMARINE_BRICKS,
    PRISMARINE_CRYSTALS,
    PRISMARINE_SHARD,
    PRISMARINE_SLAB,
    PRISMARINE_STAIRS,
    PRISMARINE_WALL,
    PUFFERFISH,
    PUFFERFISH_BUCKET,
    PUFFERFISH_SPAWN_EGG,
    PUMPKIN,
    PUMPKIN_PIE,
    PUMPKIN_SEEDS,
    PUMPKIN_STEM,
    PURPLE_BANNER,
    PURPLE_BED,
    PURPLE_CANDLE,
    PURPLE_CANDLE_CAKE,
    PURPLE_CARPET,
    PURPLE_CONCRETE,
    PURPLE_CONCRETE_POWDER,
    PURPLE_DYE,
    PURPLE_GLAZED_TERRACOTTA,
    PURPLE_LEATHER_BOOTS,
    PURPLE_LEATHER_CHESTPLATE,
    PURPLE_LEATHER_HELMET,
    PURPLE_LEATHER_LEGGINGS,
    PURPLE_SHULKER_BOX,
    PURPLE_STAINED_GLASS,
    PURPLE_STAINED_GLASS_PANE,
    PURPLE_TERRACOTTA,
    PURPLE_WALL_BANNER,
    PURPLE_WOOL,
    PURPUR_BLOCK,
    PURPUR_PILLAR,
    PURPUR_SLAB,
    PURPUR_STAIRS,
    QUARTZ,
    QUARTZ_BLOCK,
    QUARTZ_BRICKS,
    QUARTZ_PILLAR,
    QUARTZ_SLAB,
    QUARTZ_STAIRS,
    
    RABBIT,
    RABBIT_FOOT,
    RABBIT_HIDE,
    RABBIT_SPAWN_EGG,
    RABBIT_STEW,
    RAIL,
    RAVAGER_SPAWN_EGG,
    RAW_COPPER,
    RAW_COPPER_BLOCK,
    RAW_GOLD,
    RAW_GOLD_BLOCK,
    RAW_IRON,
    RAW_IRON_BLOCK,
    RECOVERY_COMPASS,
    RAW_FISH,
    RED_BANNER,
    RED_BED,
    RED_CANDLE,
    RED_CANDLE_CAKE,
    RED_CARPET,
    RED_CONCRETE,
    RED_CONCRETE_POWDER,
    RED_DYE,
    RED_GLAZED_TERRACOTTA,
    RED_LEATHER_BOOTS,
    RED_LEATHER_CHESTPLATE,
    RED_LEATHER_HELMET,
    RED_LEATHER_LEGGINGS,
    RED_MUSHROOM,
    RED_MUSHROOM_BLOCK,
    RED_NETHER_BRICK_SLAB,
    RED_NETHER_BRICK_STAIRS,
    RED_NETHER_BRICK_WALL,
    RED_NETHER_BRICKS,
    RED_SAND,
    RED_SANDSTONE,
    RED_SANDSTONE_SLAB,
    RED_SANDSTONE_STAIRS,
    RED_SANDSTONE_WALL,
    RED_SHULKER_BOX,
    RED_STAINED_GLASS,
    RED_STAINED_GLASS_PANE,
    RED_TERRACOTTA,
    RED_TULIP,
    RED_WALL_BANNER,
    RED_WOOL,
    REDSTONE,
    REDSTONE_BLOCK,
    REDSTONE_LAMP,
    REDSTONE_LAMP_ON,
    REDSTONE_ORE,
    REDSTONE_TORCH,
    REDSTONE_TORCH_ON,
    REDSTONE_WALL_TORCH,
    REDSTONE_WIRE,
    REINFORCED_DEEPSLATE,
    REPEATER,
    REPEATING_COMMAND_BLOCK,
    RESPAWN_ANCHOR,
    ROOTED_DIRT,
    ROSE_BUSH,
    ROTTEN_FLESH,
    
    SADDLE,
    SALMON,
    SALMON_BUCKET,
    SALMON_SPAWN_EGG,
    SAND,
    SANDSTONE,
    SANDSTONE_SLAB,
    SANDSTONE_STAIRS,
    SANDSTONE_WALL,
    SCAFFOLDING,
    SCULK,
    SCULK_CATALYST,
    SCULK_SENSOR,
    SKULK_SHRIEKER,
    SKULK_VEIN,
    SCUTE,
    SEA_LANTERN,
    SEA_PICKLE,
    SEAGRASS,
    SHEARS,
    SHEEP_SPAWN_EGG,
    SHIELD,
    SHROOMLIGHT,
    SHULKER_BOX,
    SHULKER_SHELL,
    SHULKER_SPAWN_EGG,
    SILVERFISH_SPAWN_EGG,
    SKELETON_HORSE_SPAWN_EGG,
    SKELETON_SKULL,
    SKELETON_SKULL_ITEM,
    SKELETON_SPAWN_EGG,
    SKELETON_WALL_SKULL,
    SKULL_BANNER_PATTERN,
    SLIME_BALL,
    SLIME_BLOCK,
    SLIME_SPAWN_EGG,
    SMALL_AMETHYST_BUD,
    SMALL_DRIPLEAF,
    SMITHING_TABLE,
    SMOKER,
    SMOOTH_BASALT,
    SMOOTH_QUARTZ,
    SMOOTH_QUARTZ_SLAB,
    SMOOTH_QUARTZ_STAIRS,
    SMOOTH_RED_SANDSTONE,
    SMOOTH_RED_SANDSTONE_SLAB,
    SMOOTH_RED_SANDSTONE_STAIRS,
    SMOOTH_SANDSTONE,
    SMOOTH_SANDSTONE_SLAB,
    SMOOTH_SANDSTONE_STAIRS,
    SMOOTH_STONE,
    SMOOTH_STONE_SLAB,
    SNOW,
    SNOW_BLOCK,
    SNOWBALL,
    SOUL_CAMPFIRE,
    SOUL_FIRE,
    SOUL_LANTERN,
    SOUL_SAND,
    SOUL_SOIL,
    SOUL_TORCH,
    SOUL_WALL_TORCH,
    SPAWN_EGG,
    SPAWNER,
    SPECTRAL_ARROW,
    SPIDER_EYE,
    SPIDER_SPAWN_EGG,
    SPLASH_POTION,
    SPLASH_POTION_AWKWARD,
    SPLASH_POTION_FIRE_RESISTANCE,
    SPLASH_POTION_FIRE_RESISTANCE_EXTENDED,
    SPLASH_POTION_HARMING_1,
    SPLASH_POTION_HARMING_2,
    SPLASH_POTION_HEALING_1,
    SPLASH_POTION_HEALING_2,
    SPLASH_POTION_INVISIBILITY,
    SPLASH_POTION_INVISIBILITY_EXTENDED,
    SPLASH_POTION_LEAPING_1,
    SPLASH_POTION_LEAPING_1_EXTENDED,
    SPLASH_POTION_LEAPING_2,
    SPLASH_POTION_LUCK,
    SPLASH_POTION_MUNDANE,
    SPLASH_POTION_NIGHT_VISION,
    SPLASH_POTION_NIGHT_VISION_EXTENDED,
    SPLASH_POTION_POISON_1,
    SPLASH_POTION_POISON_1_EXTENDED,
    SPLASH_POTION_POISON_2,
    SPLASH_POTION_REGENERATION_1,
    SPLASH_POTION_REGENERATION_1_EXTENDED,
    SPLASH_POTION_REGENERATION_2,
    SPLASH_POTION_SLOW_FALLING,
    SPLASH_POTION_SLOW_FALLING_EXTENDED,
    SPLASH_POTION_SLOWNESS_1,
    SPLASH_POTION_SLOWNESS_1_EXTENDED,
    SPLASH_POTION_SLOWNESS_2,
    SPLASH_POTION_STRENGTH_1,
    SPLASH_POTION_STRENGTH_1_EXTENDED,
    SPLASH_POTION_STRENGTH_2,
    SPLASH_POTION_SWIFTNESS_1,
    SPLASH_POTION_SWIFTNESS_1_EXTENDED,
    SPLASH_POTION_SWIFTNESS_2,
    SPLASH_POTION_THICK,
    SPLASH_POTION_TURTLE_MASTER_1,
    SPLASH_POTION_TURTLE_MASTER_1_EXTENDED,
    SPLASH_POTION_TURTLE_MASTER_2,
    SPLASH_POTION_WATER,
    SPLASH_POTION_WATER_BREATHING,
    SPLASH_POTION_WATER_BREATHING_EXTENDED,
    SPLASH_POTION_WEAKNESS,
    SPLASH_POTION_WEAKNESS_EXTENDED,
    SPONGE,
    SPORE_BLOSSOM,
    SPRUCE_BOAT,
    SPRUCE_BUTTON,
    SPRUCE_CHEST_BOAT,
    SPRUCE_DOOR,
    SPRUCE_DOOR_ITEM,
    SPRUCE_FENCE,
    SPRUCE_FENCE_GATE,
    SPRUCE_LEAVES,
    SPRUCE_LOG,
    SPRUCE_PLANKS,
    SPRUCE_PRESSURE_PLATE,
    SPRUCE_SAPLING,
    SPRUCE_SIGN,
    SPRUCE_SLAB,
    SPRUCE_STAIRS,
    SPRUCE_TRAPDOOR,
    SPRUCE_WALL_SIGN,
    SPRUCE_WOOD,
    SPYGLASS,
    SQUID_SPAWN_EGG,
    STICK,
    STICKY_PISTON,
    STONE,
    STONE_AXE,
    STONE_BRICK_SLAB,
    STONE_BRICK_STAIRS,
    STONE_BRICK_WALL,
    STONE_BRICKS,
    STONE_BUTTON,
    STONE_HOE,
    STONE_PICKAXE,
    STONE_PRESSURE_PLATE,
    STONE_SHOVEL,
    STONE_SLAB,
    STONE_STAIRS,
    STONE_SWORD,
    STONECUTTER,
    STRAY_SPAWN_EGG,
    STRIDER_SPAWN_EGG,
    STRING,
    STRIPPED_ACACIA_LOG,
    STRIPPED_ACACIA_WOOD,
    STRIPPED_BIRCH_LOG,
    STRIPPED_BIRCH_WOOD,
    STRIPPED_CRIMSON_HYPHAE,
    STRIPPED_CRIMSON_STEM,
    STRIPPED_DARK_OAK_LOG,
    STRIPPED_DARK_OAK_WOOD,
    STRIPPED_JUNGLE_LOG,
    STRIPPED_JUNGLE_WOOD,
    STRIPPED_MANGROVE_LOG,
    STRIPPED_MANGROVE_WOOD,
    STRIPPED_OAK_LOG,
    STRIPPED_OAK_WOOD,
    STRIPPED_SPRUCE_LOG,
    STRIPPED_SPRUCE_WOOD,
    STRIPPED_WARPED_HYPHAE,
    STRIPPED_WARPED_STEM,
    STRUCTURE_BLOCK,
    STRUCTURE_VOID,
    SUGAR,
    SUGAR_CANE,
    SUNFLOWER,
    SUSPICIOUS_STEW,
    SWEET_BERRIES,
    SWEET_BERRY_BUSH,
    
    TADPOLE_BUCKET,
    TADPOLE_SPAWN_EGG,
    TALL_GRASS,
    TALL_GRASS_BOTTOM,
    TALL_GRASS_TOP,
    TALL_SEAGRASS,
    TARGET,
    TERRACOTTA,
    TINTED_GLASS,
    TIPPED_ARROW,
    TIPPED_ARROW_FIRE_RESISTANCE,
    TIPPED_ARROW_FIRE_RESISTANCE_EXTENDED,
    TIPPED_ARROW_HARMING_1,
    TIPPED_ARROW_HARMING_2,
    TIPPED_ARROW_HEALING_1,
    TIPPED_ARROW_HEALING_2,
    TIPPED_ARROW_INVISIBILITY,
    TIPPED_ARROW_INVISIBILITY_EXTENDED,
    TIPPED_ARROW_LEAPING_1,
    TIPPED_ARROW_LEAPING_1_EXTENDED,
    TIPPED_ARROW_LEAPING_2,
    TIPPED_ARROW_LUCK,
    TIPPED_ARROW_NIGHT_VISION,
    TIPPED_ARROW_NIGHT_VISION_EXTENDED,
    TIPPED_ARROW_POISON_1,
    TIPPED_ARROW_POISON_1_EXTENDED,
    TIPPED_ARROW_POISON_2,
    TIPPED_ARROW_REGENERATION_1,
    TIPPED_ARROW_REGENERATION_1_EXTENDED,
    TIPPED_ARROW_REGENERATION_2,
    TIPPED_ARROW_SLOW_FALLING,
    TIPPED_ARROW_SLOW_FALLING_EXTENDED,
    TIPPED_ARROW_SLOWNESS_1,
    TIPPED_ARROW_SLOWNESS_1_EXTENDED,
    TIPPED_ARROW_SLOWNESS_2,
    TIPPED_ARROW_STRENGTH_1,
    TIPPED_ARROW_STRENGTH_1_EXTENDED,
    TIPPED_ARROW_STRENGTH_2,
    TIPPED_ARROW_SWIFTNESS_1,
    TIPPED_ARROW_SWIFTNESS_1_EXTENDED,
    TIPPED_ARROW_SWIFTNESS_2,
    TIPPED_ARROW_TURTLE_MASTER_1,
    TIPPED_ARROW_TURTLE_MASTER_1_EXTENDED,
    TIPPED_ARROW_TURTLE_MASTER_2,
    TIPPED_ARROW_WATER_BREATHING,
    TIPPED_ARROW_WATER_BREATHING_EXTENDED,
    TIPPED_ARROW_WEAKNESS,
    TIPPED_ARROW_WEAKNESS_EXTENDED,
    TNT,
    TNT_MINECART,
    TORCH,
    TOTEM_OF_UNDYING,
    TRADER_LLAMA_SPAWN_EGG,
    TRAPPED_CHEST,
    TRIDENT,
    TRIPWIRE,
    TRIPWIRE_HOOK,
    TROPICAL_FISH,
    TROPICAL_FISH_BUCKET,
    TROPICAL_FISH_SPAWN_EGG,
    TUBE_CORAL,
    TUBE_CORAL_BLOCK,
    TUBE_CORAL_FAN,
    TUBE_CORAL_WALL_FAN,
    TUFF,
    TURTLE_EGG,
    TURTLE_HELMET,
    TURTLE_SPAWN_EGG,
    TWISTING_VINES,
    TWISTING_VINES_PLANT,
    
    VERDANT_FROGLIGHT,
    VEX_SPAWN_EGG,
    VILLAGER_SPAWN_EGG,
    VINDICATOR_SPAWN_EGG,
    VINE,
    VOID_AIR,
    
    WALL_TORCH,
    WANDERING_TRADER_SPAWN_EGG,
    WARDEN_SPAWN_EGG,
    WARPED_BUTTON,
    WARPED_DOOR,
    WARPED_FENCE,
    WARPED_FENCE_GATE,
    WARPED_FUNGUS,
    WARPED_FUNGUS_ON_A_STICK,
    WARPED_HYPHAE,
    WARPED_NYLIUM,
    WARPED_PLANKS,
    WARPED_PRESSURE_PLATE,
    WARPED_ROOTS,
    WARPED_SIGN,
    WARPED_SLAB,
    WARPED_STAIRS,
    WARPED_STEM,
    WARPED_TRAPDOOR,
    WARPED_WALL_SIGN,
    WARPED_WART_BLOCK,
    WATER,
    WATER_BUCKET,
    WEEPING_VINES,
    WEEPING_VINES_PLANT,
    WET_SPONGE,
    WHEAT,
    WHEAT_SEEDS,
    WHITE_BANNER,
    WHITE_BED,
    WHITE_CANDLE,
    WHITE_CANDLE_CAKE,
    WHITE_CARPET,
    WHITE_CONCRETE,
    WHITE_CONCRETE_POWDER,
    WHITE_DYE,
    WHITE_GLAZED_TERRACOTTA,
    WHITE_LEATHER_BOOTS,
    WHITE_LEATHER_CHESTPLATE,
    WHITE_LEATHER_HELMET,
    WHITE_LEATHER_LEGGINGS,
    WHITE_SHULKER_BOX,
    WHITE_STAINED_GLASS,
    WHITE_STAINED_GLASS_PANE,
    WHITE_TERRACOTTA,
    WHITE_TULIP,
    WHITE_WALL_BANNER,
    WHITE_WOOL,
    WITCH_SPAWN_EGG,
    WITHER_ROSE,
    WITHER_SKELETON_SKULL,
    WITHER_SKELETON_SKULL_ITEM,
    WITHER_SKELETON_SPAWN_EGG,
    WITHER_SKELETON_WALL_SKULL,
    WOLF_SPAWN_EGG,
    WOODEN_AXE,
    WOODEN_HOE,
    WOODEN_PICKAXE,
    WOODEN_SHOVEL,
    WOODEN_SWORD,
    WRITABLE_BOOK,
    WRITTEN_BOOK,
    
    YELLOW_BANNER,
    YELLOW_BED,
    YELLOW_CANDLE,
    YELLOW_CANDLE_CAKE,
    YELLOW_CARPET,
    YELLOW_CONCRETE,
    YELLOW_CONCRETE_POWDER,
    YELLOW_DYE,
    YELLOW_GLAZED_TERRACOTTA,
    YELLOW_LEATHER_BOOTS,
    YELLOW_LEATHER_CHESTPLATE,
    YELLOW_LEATHER_HELMET,
    YELLOW_LEATHER_LEGGINGS,
    YELLOW_SHULKER_BOX,
    YELLOW_STAINED_GLASS,
    YELLOW_STAINED_GLASS_PANE,
    YELLOW_TERRACOTTA,
    YELLOW_WALL_BANNER,
    YELLOW_WOOL,
    
    ZOGLIN_SPAWN_EGG,
    ZOMBIE_HEAD,
    ZOMBIE_HEAD_ITEM,
    ZOMBIE_HORSE_SPAWN_EGG,
    ZOMBIE_PIGMAN_SPAWN_EGG,
    ZOMBIE_SPAWN_EGG,
    ZOMBIE_VILLAGER_SPAWN_EGG,
    ZOMBIE_WALL_HEAD
};

#endif /* material_h */
