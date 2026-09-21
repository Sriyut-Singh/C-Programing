#include <stdio.h>

int main() {
    // ==========================================
    // 1. ARRAY DECLARATION & INITIALIZATION
    // ==========================================
    // Yahan humne 'numbers' naam ka array banaya hai jo 5 integers store karega.
    // Indexing hamesha 0 se start hoti hai, toh slots honge: 0, 1, 2, 3, 4.
    int numbers[5] = {10, 20, 30, 40, 50};

    // ==========================================
    // 2. ACCESSING ELEMENTS (Values Read Karna)
    // ==========================================
    // numbers[0] ka matlab hai pehla element (10)
    // numbers[2] ka matlab hai teesra element (30)
    printf("Pehla element (Index 0): %d\n", numbers[0]); 
    printf("Teesra element (Index 2): %d\n", numbers[2]);

    // ==========================================
    // 3. MODIFYING ELEMENTS (Value Badalna)
    // ==========================================
    // Index 1 par pehle '20' tha. Ab hum use badal kar '99' kar rahe hain.
    numbers[1] = 99;
    printf("Badla hua doosra element (Index 1): %d\n", numbers[1]);

    // ==========================================
    // 4. LOOPING THROUGH ARRAY (Traversing)
    // ==========================================
    // Alag-alag printf likhne ki jagah hum 'for loop' se saare elements print karenge.
    // Loop i=0 se shuru hoga aur i=4 tak chalega (kyunki i < 5 likha hai).
    printf("\n--- Saare Elements Loop Se Print Karte Hain ---\n");
    for (int i = 0; i < 5; i++) {
        // Har baar 'i' ki value badlegi (0, 1, 2, 3, 4) aur us index ka data print hoga.
        printf("Index %d par value hai: %d\n", i, numbers[i]);
    }

    return 0;
}


-------------------------------------------------------Output-------------------------------------------------------------------------------
//Pehla element (Index 0): 10
//Teesra element (Index 2): 30
//Badla hua doosra element (Index 1): 99

//--- Saare Elements Loop Se Print Karte Hain ---
//Index 0 par value hai: 10
//Index 1 par value hai: 99
//Index 2 par value hai: 30
//Index 3 par value hai: 40
//Index 4 par value hai: 50
