#include <stdio.h>

int main() {
    int mb[100], ps[100];
    int mb_copy[100];
    int allocation[100];
    int n, m;

    int i, j;

    printf("Enter number of memory blocks (MB): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Block %d: ", i + 1);
        scanf("%d", &mb[i]);
        mb_copy[i] = mb[i];
    }

    printf("\nEnter number of processes (Size in MB): ");
    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &ps[i]);
        allocation[i] = -1;
    }

    //Next Fit Allocation
    int lastIndex = 0;

    for(i = 0; i < m; i++) {
        int count = 0;
        j = lastIndex;

        while(count < n) {
            if(mb[j] >= ps[i]) {
                allocation[i] = j;
                mb[j] -= ps[i];
                lastIndex = (j + 1) % n; // move forward
                break;
            }
            j = (j + 1) % n; // circular search
            count++;
        }
    }

    // Output
    printf("\nProcess No.\tProcess Size\tBlock No.\n");

    for(i = 0; i < m; i++) {
        printf("%d\t\t%d\t\t", i + 1, ps[i]);

        if(allocation[i] != -1)
            printf("%d\n", allocation[i] + 1);
        else
            printf("Not Allocated\n");
    }

    // Internal Fragmentation
    int internal_frag = 0;
    for(i = 0; i < n; i++) {
        if(mb_copy[i] != mb[i]) {
            internal_frag += mb[i];
        }
    }

    // External Fragmentation
    int external_frag = 0;
    for(i = 0; i < n; i++) {
        if(mb_copy[i] == mb[i]) {
            external_frag += mb[i];
        }
    }

    printf("\nTotal Internal Fragmentation: %d MB\n", internal_frag);
    printf("Total External Fragmentation: %d MB\n", external_frag);

    return 0;
}
