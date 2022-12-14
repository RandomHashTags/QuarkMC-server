//
//  gluon_plugin.c
//  gluon
//
//  Created by Evan Anderson on 11/9/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../utilities.h"

struct GluonPlugin *plugin_create(const char *name, const char *bundle_id, const char *authors, const struct SemanticVersion version) {
    struct GluonPlugin *plugin = malloc(sizeof(struct GluonPlugin));
    if (!plugin) {
        printf("failed to allocate memory for a GluonPlugin\n");
        return NULL;
    }
    
    const char *target_name = malloc_string(name);
    if (!target_name) {
        free(plugin);
        printf("failed to allocate memory for a GluonPlugin target_name\n");
        return NULL;
    }
    
    const char *target_bundle_id = malloc_string(bundle_id);
    if (!target_bundle_id) {
        free(plugin);
        free((char *) target_name);
        printf("failed to allocate memory for a GluonPlugin target_bundle_id\n");
        return NULL;
    }
    
    const char *target_authors = malloc_string(authors);
    if (!target_authors) {
        free(plugin);
        free((char *) target_name);
        free((char *) target_bundle_id);
        printf("failed to allocate memory for a GluonPlugin target_authors\n");
        return NULL;
    }
    
    plugin->name = target_name;
    plugin->bundle_id = target_bundle_id;
    plugin->authors = target_authors;
    memcpy((struct SemanticVersion *) &plugin->version, &version, sizeof(struct SemanticVersion));
    return plugin;
}
void plugin_destroy(struct GluonPlugin *plugin) {
    free((char *) plugin->name);
    free((char *) plugin->bundle_id);
    free((char *) plugin->authors);
    free(plugin);
}

void plugin_enable(struct GluonPlugin *plugin) {
}
void plugin_disable(struct GluonPlugin *plugin) {
}
