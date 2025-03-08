#include <stdio.h>

int main() {
    int num_interior_walls, num_exterior_walls;
    float surface_area_interior, surface_area_exterior;
    float total_cost = 0;

    scanf("%d", &num_interior_walls);
    scanf("%d", &num_exterior_walls);  

    if (num_interior_walls > 0) {
        for (int i = 0; i < num_interior_walls; i++) {
            scanf("%f", &surface_area_interior);  
            total_cost += surface_area_interior * 18;  
        }
    }
    
    if (num_exterior_walls > 0) {
        for (int i = 0; i < num_exterior_walls; i++) {
            scanf("%f", &surface_area_exterior);  
            total_cost += surface_area_exterior * 12; 
        }
    }

    printf("Total estimated Cost : %.1f INR\n", total_cost);
    
    return 0;
}