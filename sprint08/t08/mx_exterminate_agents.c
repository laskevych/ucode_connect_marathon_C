#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
    if (!*agents
        || !agents
        || agents == NULL) {
        return;
    }

    int i = 0;
    while ((*agents)[i] != NULL) {
        free((*agents)[i]->name);
        (*agents)[i]->name = NULL;
        free((*agents)[i]);
        (*agents)[i] = NULL;

        i++;
    }
    
    free(*agents);
    *agents = NULL;
}

