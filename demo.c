#include <stdio.h>

struct Question {
    char question[300];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char correctAnswer;
    char explanation[300];
};

int main() {

    int score = 0;
    char answer;

    struct Question quiz[] = {
        {
            "1. Apa tujuan utama Space Race antara Amerika Serikat dan Uni Soviet?",
            "A. Menguasai sumber daya bulan",
            "B. Menunjukkan keunggulan ideologi dan teknologi",
            "C. Mencari kehidupan alien",
            "D. Membuat senjata luar angkasa",
            'B',
            "Space Race bukan soal bulan doang, tapi soal adu gengsi ideologi: kapitalisme (AS) vs komunisme (Uni Soviet). Siapa lebih unggul teknologi = siapa lebih “benar” di mata dunia."
        },
        {
            "2. Siapa manusia pertama yang pergi ke luar angkasa?",
            "A. Neil Armstrong",
            "B. Buzz Aldrin",
            "C. Yuri Gagarin",
            "D. John Glenn",
            'C',
            "Tahun 1961, Gagarin mengorbit bumi dengan Vostok 1, bikin AS panik dan ngebut ngejar lewat program Mercury & Apollo."
        },
        {
            "3. Program luar angkasa Apollo dimiliki oleh negara mana?",
            "A. Uni Soviet",
            "B. Jerman Barat",
            "C. Amerika Serikat",
            "D. Inggris",
            'C',
            "Apollo adalah program ambisius AS buat mendaratkan manusia di bulan, puncaknya Apollo 11 tahun 1969."
        },
        {
            "4. Apa nama satelit buatan manusia pertama di dunia?",
            "A. Apollo 11",
            "B. Sputnik 1",
            "C. Vostok 1",
            "D. Explorer 1",
            'B',
            "Diluncurkan Uni Soviet (1957). Bunyi “bip”-nya aja udah cukup bikin dunia Barat merinding. sheeshh"
        },
        {
            "5. Perang Dingin disebut 'dingin' karena...",
            "A. Terjadi di wilayah bersalju",
            "B. Tidak pernah terjadi konflik sama sekali",
            "C. Tidak ada perang langsung antara dua kekuatan utama",
            "D. Terjadi di luar angkasa",
            'C',
            "Disebut “dingin” karena nggak pernah perang langsung antara AS vs Uni Soviet, tapi isinya proxy war, ancaman nuklir, dan paranoia global."
        }
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);

     int pilihan;
    printf("======================================\n");
    printf("      SELAMAT DATANG DI QUIZ SEJARAH PERANG DINGIN      \n");
    printf("======================================\n");
    printf("1. Mulai Quiz\n");
    printf("2. Keluar\n");
    printf("Pilih: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("Menyiapkan quiz sejarah");
    
        printf("\n");
        for (int i = 0; i < totalQuestions; i++) {
            printf("\n%s\n", quiz[i].question);
            printf("%s\n", quiz[i].optionA);
            printf("%s\n", quiz[i].optionB);
            printf("%s\n", quiz[i].optionC);
            printf("%s\n", quiz[i].optionD);
            printf("Jawaban kamu (A/B/C/D): ");
            scanf(" %c", &answer);

            if (answer == quiz[i].correctAnswer) 
            {
                printf("Benar! ✨\n");
                printf("Penjelasan: %s\n", quiz[i].explanation);
                score++;
            }   
            else 
            {
                printf("Salah 😔 Jawaban yang benar: %c\n", quiz[i].correctAnswer);
                printf("Penjelasan: %s\n", quiz[i].explanation);
            }
          printf("\nSkor akhir kamu: %d / %d\n", score, totalQuestions);
        }

        if (score == totalQuestions) {
              printf("Luar biasa! Kamu pasti menyaksikan sejarahnya! \n");
            } 
          else if (score >= totalQuestions / 2) {
              printf("Bagus! Kamu cukup paham sejarah Perang Dingin! \n");
            } 
          else {
              printf("Jangan menyerah! Coba lagi biar makin paham sejarah Perang Dingin! \n");
          }

    }

    else {
        printf("\nTerima kasih! Sampai jumpa.\n");
        
        return 0;
    }
   return 0;
}

