int Marketplace::logoApps()
{
    setcolor(6);
    cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
    cout << "|               -+*+++*+-                                                                                                             |" << endl;
    cout << "|             .**:     :*+.                                                                                                           |" << endl;
    cout << "|            .*+.        +*.                                                                                                          |" << endl;
    cout << "|            =*:         :*+                                                                                                          |" << endl;
    cout << "|             *+           +*.                                                                                                        |" << endl;
    cout << "|  ---------=*+-----------+*=---------                                                                                                |" << endl;
    cout << "|  ***********************************                                                                                                |" << endl;
    cout << "|  ****************++++***************:              ..:..      ..                                                                    |" << endl;
    cout << "|  *************=..---:..=************.           .=**+++**+-  .**                                                                    |" << endl;
    cout << "|  ************- +*******+************            **:      :.  .**                                                                    |" << endl;
    cout << "| +***********:.**********************          .**           .**                                                                     |" << endl;
    cout << "| =************: :=*******************            -*+-.        .** .::::         .:::.      :.  .:::.         .:::.         :::.      |" << endl;
    cout << "| -**************=-:::-=**************              :=+**=-.   .**+*===+*+.   .=*+===+*=.  .**=*+===*+-     =*+===**-    :+*+==+*+.   |" << endl;
    cout << "| :*******************=: =************                  .:=*+. .**=     :*+  :*+.     :**. .**+.     -*+   +*-     =*=  -*+.    :**.  |" << endl;
    cout << "| .*********************- ************                    :*+ .**       **  +*:       -*= .**.       =*- :**********+  +**********:   |" << endl;
    cout << "| **********+=+*******+.:**********.**         ::        :** .**       **  =*=       +*- .**-      .+*: .**.          +*-             |" << endl;
    cout << "| +**********=:.:----..-**************         =**=-:::-=*+. .**       **   -*+-:::-**-  .***+-:::=**:   -*+-:.::-=.   +*=::.:-=-     |" << endl;
    cout << "| +**************++=+*****************           .:=====-.    ==       ==     :==+==:    .**.-====-:       -=+++==:     :-=+++=-.     |" << endl;
    cout << "| :*******************************-***                                                   .**                                          |" << endl;
    cout << "| :+***************************=:*****                                                   .**                                          |" << endl;
    cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
}

int Marketplace::tampilanHomePage()
{
    gotoxy(0, 22);
    cout << "========================================================================================================================================";
    gotoxy(0, 23);
    cout << "***************************************************  H   O   M   E     P   A   G   E  *************************************************";
    gotoxy(0, 24);
    cout << "=======================================================================================================================================";

    gotoxy(0, 26);
    cout << "+-------------------------------------------------------------------------------------------------------------------------------------+";
    gotoxy(0, 28);
    cout << "+-------------------------------------------------------------------------------------------------------------------------------------+" << endl;
    gotoxy(0, 32);
    cout << "+=====================================================================================================================================+";

    gotoxy(0, 33);
    setcolor(6);
    cout << "| ";

    gotoxy(6, 33);
    setcolor(7);
    cout << " SALDO SHOPEE ANDA : " << charSaldo << "                         |     JUMLAH KOIN SHOPEE : 0";

    gotoxy(134, 33);
    setcolor(6);
    cout << "| ";

    gotoxy(0, 34);
    cout << "+=====================================================================================================================================+";

    gotoxy(0, 35);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 36);
    cout << ":: ####  #  #  ###   ###    ##      ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 37);
    cout << ":: #     #  #   #    #  #  #  #     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 38);
    cout << ":: ###    ##    #    #  #  #  #     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 39);
    cout << ":: #      ##    #    ###   ####     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 40);
    cout << ":: #     #  #   #    # #   #  #     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 41);
    cout << ":: ####  #  #   #    #  #  #  #     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 42);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 43);
    cout << "::  ##    ##    ##   #  #  ###    ##    ##   #  #         #     #    #       :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 44);
    cout << ":: #  #  #  #  #  #  #  #  #  #  #  #  #  #  # #         ##    # #   #  #    :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 45);
    cout << ":: #     #  #   #    ####  ###   #  #  #     ##           #    # #     #     :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 46);
    cout << ":: #     ####    #   #  #  #  #  ####  #     ##           #    # #    #      :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 47);
    cout << ":: #  #  #  #  #  #  #  #  #  #  #  #  #  #  # #          #    # #   #  #    :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 48);
    cout << "::  ##   #  #   ##   #  #  ###   #  #   ##   #  #        ###    #       #    :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 49);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";

    gotoxy(0, 51);
    cout << "  ...................      ::            .:=+-::-==-.             :: ";
    gotoxy(0, 52);
    cout << ".:=#+:.::::         .:     ::          =*%%%%%%%%%%%%%%*=         ::";
    gotoxy(0, 53);
    cout << ":-%@%+.--.-          -:    ::        -#%%%%%%%%%%%%%%%%%%#:       ::";
    gotoxy(0, 54);
    cout << ":-.++.*%%*=          -:    ::       :*%%%%%%%%%%%%%%%%%%%%%%+     ::  ### ##   ##  ###  ##  ##            ###  ##   ## ##   ##   ##            ## ##   ###  ##  ";
    gotoxy(0, 55);
    cout << ":-%@@#.++:-          -:    ::      +%%%%%%%%%%%%%%%%%%%%%%%%%*.   ::   ##  ##  ##   ##  ##  ##              ## ##  ##   ##  ##   ##           ##   ##    ## ##";
    gotoxy(0, 56);
    cout << "::*%#=.=+:-          -:    ::    .+%%%%%%%%%%%%%%%%%%%%%%%%%*     ::   ##  ##  ##   ##  ##  ##             # ## #  ##   ##  ##   ##           ##   ##   # ## #  ";
    gotoxy(0, 57);
    cout << ":  ......            -:    ::       :#*=#%%%%%%%%%%%%%%*+%%+.     ::  ## ##   ##   ##   ## ##             ## ##   ##   ##  ## # ##           ##   ##   ## ## ";
    gotoxy(0, 58);
    cout << "-                    -:    ::          #%%%%%%%%%%%%%%+ .         ::   ##  ##  ##   ##    ##               ##  ##  ##   ##  # ### #           ##   ##   ##  ##";
    gotoxy(0, 59);
    cout << "-                    =:    ::          #%%%%%%%%%%%%%%+           ::   ##  ##  ##   ##    ##               ##  ##  ##   ##   ## ##            ##   ##   ##  ##";
    gotoxy(0, 60);
    cout << ":          .         -:    ::          #%%%%%%%%%%%%%%*           ::  ### ##    ## ##     ##              ###  ##   ## ##   ##   ##            ## ##   ###  ##";
    gotoxy(0, 61);
    cout << ":        ==+-        -:    ::          %%%%%%%%%%%%%%%*           ::  ";
    gotoxy(0, 62);
    cout << ":       .@@%+        -:    ::          %%%%%%%%%%%%%%%#           ::   ## ##   ###  ##   ## ##   ### ##   ### ###  ### ###";
    gotoxy(0, 63);
    cout << ":        :==-        -:    ::          %%%%%%%%%%%%%%%#           ::  ##   ##   ##  ##  ##   ##   ##  ##   ##  ##   ##  ##";
    gotoxy(0, 64);
    cout << ":                    -:    ::          %%%%%%%%%%%%%%%%           ::  ####      ##  ##  ##   ##   ##  ##   ##       ##    ";
    gotoxy(0, 65);
    cout << ":                    -:    ::                                     ::   #####    ## ###  ##   ##   ##  ##   ## ##    ## ## ";
    gotoxy(0, 66);
    cout << ":                    -:    ::                                     ::      ###   ##  ##  ##   ##   ## ##    ##       ##    ";
    gotoxy(0, 67);
    cout << ":.                  .=.    ::                                     ::  ##   ##   ##  ##  ##   ##   ##       ##  ##   ##  ##";
    gotoxy(0, 68);
    cout << " .::::::::::::::::::-.     ::                                     ::   ## ##   ###  ##   ## ##   ####     ### ###  ### ###  ";
    // gotoxy(0, 68);
    // cout << "";

    gotoxy(0, 27);
    setcolor(6);
    cout << "| ";

    gotoxy(134, 27);
    setcolor(6);
    cout << "| ";

    gotoxy(6, 27);
    setcolor(7);
    cout << "CARI NAMA TOKO :";

    gotoxy(25, 27);
    cin >> search;
}
int Marketplace::tampilanToko()
{
    setcolor(6);
    gotoxy(0, 0);
    cout << "========================================================================================================================================";
    gotoxy(0, 1);
    cout << "**************************************************  S   T  O   R   E     P   A   G   E  ************************************************";
    gotoxy(0, 2);
    cout << "========================================================================================================================================";

    gotoxy(0, 4);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 5);
    cout << "####   #   #  #   #                  ##     ##     #             #            ##                  #                      :::::::::::::::";
    gotoxy(0, 6);
    cout << "#   #  #   #  #   #                 #  #   #  #                                #                  #                      :::::::::::::::";
    gotoxy(0, 7);
    cout << "#   #  #   #  ##  #          ###    #      #      ##     ###    ##     ###     #            ###   # ##    ###   # ##     :::::::::::::::";
    gotoxy(0, 8);
    cout << "####    # #   # # #         #   #  ####   ####     #    #        #        #    #           #      ##  #  #   #  ##  #    ::: FOLLOW + ::";
    gotoxy(0, 9);
    cout << "#       # #   #  ##         #   #   #      #       #    #        #     ####    #            ###   #   #  #   #  ##  #    :::::::::::::::";
    gotoxy(0, 10);
    cout << "#       # #   #   #         #   #   #      #       #    #   #    #    #   #    #               #  #   #  #   #  # ##     ::: CHAT(..) ::";
    gotoxy(0, 11);
    cout << "#        #    #   #          ###    #      #      ###    ###    ###    ####   ###          ####   #   #   ###   #        :::::::::::::::";
    gotoxy(0, 12);
    cout << "                                                                                                                #        :::::::::::::::";
    gotoxy(0, 13);
    cout << "                                                                                                                #        :::::::::::::::";
    gotoxy(0, 14);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";

    gotoxy(0, 15);
    cout << "MASUKAN ANGKA UNTUK SLIDE KE TEMPILAN BERIKUTNYA [1-4] : ";
    gotoxy(0, 16);
    cout << "========================================================================================================================================";
    gotoxy(0, 17);
    cout << "|";
    gotoxy(0, 18);
    cout << "|";
    gotoxy(135, 17);
    cout << "|";
    gotoxy(135, 18);
    cout << "|";
    gotoxy(12, 17);
    cout << "T O K O         |          P R O D U K          |            T E R B A R U            |              KATALOG ";
    gotoxy(14, 18);
    cout << "(1)           |              (2)              |                  (3)                |                (4)    ";
    gotoxy(0, 19);
    cout << "========================================================================================================================================";

    gotoxy(0, 21);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 22);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::    ###   ###    ##   #  #   ##    :::::::::::::::::::::::::::::::";
    gotoxy(0, 23);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::    #  #  #  #  #  #  ####  #  #   :::::::::::::::::::::::::::::::";
    gotoxy(0, 24);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::    #  #  #  #  #  #  ####  #  #   :::::::::::::::::::::::::::::::";
    gotoxy(0, 25);
    cout << "--------=======-----====+=++=====:::::::::::::::::::::::::::::::::::::    ###   ###   #  #  #  #  #  #   :::::::::::::::::::::::::::::::";
    gotoxy(0, 26);
    cout << "-------====++++==--================:::::::::::::::::::::::::::::::::::    #     # #   #  #  #  #  #  #   :::::::::::::::::::::::::::::::";
    gotoxy(0, 27);
    cout << "-------====**+++=============++===+====:::::::::::::::::::::::::::::::    #     #  #   ##   #  #   ##    :::::::::::::::::::::::::::::::";
    gotoxy(0, 28);
    cout << "------=+===++++++=++============+====+===:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 29);
    cout << "-----=+**++++++++++++****+==============+=====:::::::::::::::::::::::::::      ##   ####  ###   ###    ##   ###    :::::::::::::::::::::";
    gotoxy(0, 30);
    cout << "-----=+****++++++++***+++*++=====================::::::::::::::::::::::::     #  #  #      #     #    #  #  #  #   :::::::::::::::::::::";
    gotoxy(0, 31);
    cout << "-----=++******+++***+===+***+==============++====+===::::::::::::::::::::      #    ###    #     #    #  #  #  #   :::::::::::::::::::::";
    gotoxy(0, 32);
    cout << "-----=++++********++==++****===++==============+*+++++===::::::::::::::::       #   #      #     #    ####  ###    :::::::::::::::::::::";
    gotoxy(0, 33);
    cout << "-----=*+********************==+*+*====+++==+++*++++++++++++===:::::::::::     #  #  #      #     #    #  #  #      :::::::::::::::::::::";
    gotoxy(0, 34);
    cout << "----===+++*****++++********+==+**+====++++++++++++++++++++++++==:::::::::      ##   ####   #    ###   #  #  #      :::::::::::::::::::::";
    gotoxy(0, 35);
    cout << "----=========++======+++***+==+*++=====+++++++++++++++++++++++++==::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 36);
    cout << "----==========================+++=========================+++=++++=::::::         #  #    ##    ###    ###   ::::::::::::::::::::::::::::";
    gotoxy(0, 37);
    cout << "----==========================+================================+++=::::::         #  #   #  #   #  #    #    ::::::::::::::::::::::::::::";
    gotoxy(0, 38);
    cout << "----==========================================================++++=::::::         ####   #  #   #  #    #    ::::::::::::::::::::::::::::";
    gotoxy(0, 39);
    cout << "-----===+++==================================================++++==-:::::         #  #   ####   ###     #    ::::::::::::::::::::::::::::";
    gotoxy(0, 40);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::         #  #   #  #   # #     #    ::::::::::::::::::::::::::::";
    gotoxy(0, 41);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::         #  #   #  #   #  #   ###   ::::::::::::::::::::::::::::";
    gotoxy(0, 42);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";

    gotoxy(0, 44);
    cout << "K L A I M   D I S K O N   D I S I N I  : ";
    gotoxy(0, 45);
    cout << "+--------------------------------------------------------------------------------------------------------------------------------------+";
    gotoxy(0, 46);
    cout << "|";
    gotoxy(0, 47);
    cout << "|";
    gotoxy(135, 46);
    cout << "|";
    gotoxy(135, 47);
    cout << "|";
    gotoxy(12, 46);
    cout << "D I S K O N  01 (10%)          |            D I S K O N 02 (15%)          |           D I S K O N  03 (20%)          ";
    gotoxy(12, 47);
    cout << "*MIN BLJ : Rp.100.000          |           *MIN BLJ : Rp.150.000          |           *MIN BLJ : Rp.250.000          ";
    gotoxy(0, 48);
    cout << "+-------------------------------------------------------------------------------------------------------------------------------------+";
    gotoxy(59, 15);
    cin >> slide;
    gotoxy(0, 49);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
}

int Marketplace::produkPage()
{
    setcolor(6);
    gotoxy(0, 0);
    cout << "========================================================================================================================================";
    gotoxy(0, 1);
    cout << "******************************************   P   R   O   D   U   K     P   A   G   E   *************************************************";
    gotoxy(0, 2);
    cout << "========================================================================================================================================";
    gotoxy(0, 4);
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 5);
    cout << "####   #   #  #   #                  ##     ##     #             #            ##                  #                      :::::::::::::::";
    gotoxy(0, 6);
    cout << "#   #  #   #  #   #                 #  #   #  #                                #                  #                      :::::::::::::::";
    gotoxy(0, 7);
    cout << "#   #  #   #  ##  #          ###    #      #      ##     ###    ##     ###     #            ###   # ##    ###   # ##     :::::::::::::::";
    gotoxy(0, 8);
    cout << "####    # #   # # #         #   #  ####   ####     #    #        #        #    #           #      ##  #  #   #  ##  #    ::: FOLLOW + ::";
    gotoxy(0, 9);
    cout << "#       # #   #  ##         #   #   #      #       #    #        #     ####    #            ###   #   #  #   #  ##  #    :::::::::::::::";
    gotoxy(0, 10);
    cout << "#       # #   #   #         #   #   #      #       #    #   #    #    #   #    #               #  #   #  #   #  # ##     ::: CHAT(..) ::";
    gotoxy(0, 11);
    cout << "#        #    #   #          ###    #      #      ###    ###    ###    ####   ###          ####   #   #   ###   #        :::::::::::::::";
    gotoxy(0, 12);
    cout << "                                                                                                                #        :::::::::::::::";
    gotoxy(0, 13);
    cout << "                                                                                                                #        :::::::::::::::";
    gotoxy(0, 14);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 15);
    cout << ":       P  R  O  D  U  K    S  E  P  A  T  U  01                                                                                            :";
    gotoxy(0, 16);
    cout << ":                            ..                                                     D E S K R I P S I                                       :";
    gotoxy(0, 17);
    cout << ":                          =+*=                                                                                                             :";
    gotoxy(0, 18);
    cout << ":                      .-=*#*+-        ...        P V N  K A R A  S E P A T U  S N E A K R S  W A N I T A  S P O R T  S H O E S WHITE 354   :";
    gotoxy(0, 19);
    cout << ":                   ..==******+-.    .:::..       PVN sneakers adalah sepatu sneakers yang nyaman di gunakan untuk jalan-jalan untuk        :";
    gotoxy(0, 20);
    cout << ":                .-==++**==*****++===+:.:--:      kuliah dll  Sneakers merupakan sepatu casual yang menarik untuk dijadi koleksi            :";
    gotoxy(0, 21);
    cout << ":         ...::--===++-.:--.:=******=---====-     denganberbagai jenis dan motif yang beragam.                                              :";
    gotoxy(0, 22);
    cout << ":     .-=+++==========++::++==++=---=+++++=--.                                                                                              :";
    gotoxy(0, 23);
    cout << ":     -****************##*##*---=+++--:::::::    R p. 1 2 0 . 0 0 0                                                                         :";
    gotoxy(0, 24);
    cout << ":      :-===+++++*****++++==:------::::::::..:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 25);
    cout << ":      ..:-=+++++*+++*****++++===============:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 26);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 27);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 28);
    cout << ":       P  R  O  D  U  K    S  E  P  A  T  U  02                                                                                            :";
    gotoxy(0, 29);
    cout << ":                            ..                                                     D E S K R I P S I                                       :";
    gotoxy(0, 30);
    cout << ":                          =+*=                                                                                                             :";
    gotoxy(0, 31);
    cout << ":                      .-=*#*+-        ...        P V N  M i n g y u  S e p a t u  S n e a k e r s   W a n i t a  Cream 265                 :";
    gotoxy(0, 32);
    cout << ":                   ..==******+-.    .:::..       PVN sneakers adalah sepatu sneakers yang nyaman di gunakan untuk berolahraga karena       :";
    gotoxy(0, 33);
    cout << ":                .-==++**==*****++===+:.:--:      mempunya boost pada bagian bawa sepatu dan juga ringan                                    :";
    gotoxy(0, 34);
    cout << ":         ...::--===++-.:--.:=******=---====-                                                                                               :";
    gotoxy(0, 35);
    cout << ":     .-=+++==========++::++==++=---=+++++=--.    R p. 1 6 0 . 0 0 0                                                                        :";
    gotoxy(0, 36);
    cout << ":     -****************##*##*---=+++--:::::::   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 37);
    cout << ":      :-===+++++*****++++==:------::::::::..:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 38);
    cout << ":      ..:-=+++++*+++*****++++===============:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 39);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";

    gotoxy(0, 40);
    cout << "=============================================================================================================================================" << endl;
}

int Marketplace::item()
{
    if (barang == 1)
    {

        cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        gotoxy(0, 31);
        cout << ":       P  R  O  D  U  K    S  E  P  A  T  U  01                                                                                            :";
        gotoxy(0, 32);
        cout << ":                            ..                                                     D E S K R I P S I                                       :";
        gotoxy(0, 33);
        cout << ":                          =+*=                                                                                                             :";
        gotoxy(0, 34);
        cout << ":                      .-=*#*+-        ...        P V N  K A R A  S E P A T U  S N E A K R S  W A N I T A  S P O R T  S H O E S WHITE 354   :";
        gotoxy(0, 35);
        cout << ":                   ..==******+-.    .:::..       PVN sneakers adalah sepatu sneakers yang nyaman di gunakan untuk jalan-jalan untuk        :";
        gotoxy(0, 36);
        cout << ":                .-==++**==*****++===+:.:--:      kuliah dll  Sneakers merupakan sepatu casual yang menarik untuk dijadi koleksi            :";
        gotoxy(0, 37);
        cout << ":         ...::--===++-.:--.:=******=---====-     denganberbagai jenis dan motif yang beragam.                                              :";
        gotoxy(0, 38);
        cout << ":     .-=+++==========++::++==++=---=+++++=--.                                                                                              :";
        gotoxy(0, 39);
        cout << ":     -****************##*##*---=+++--:::::::    R p. 1 2 0 . 0 0 0                                                                         :";
        gotoxy(0, 40);
        cout << ":      :-===+++++*****++++==:------::::::::..:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        gotoxy(0, 41);
        cout << ":      ..:-=+++++*+++*****++++===============:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        gotoxy(0, 42);
        cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;

        barang = sepatu1;
    }
    if (barang == 2)
    {
        cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        gotoxy(0, 31);
        cout << ":       P  R  O  D  U  K    S  E  P  A  T  U  02                                                                                            :";
        gotoxy(0, 32);
        cout << ":                            ..                                                     D E S K R I P S I                                       :";
        gotoxy(0, 33);
        cout << ":                          =+*=                                                                                                             :";
        gotoxy(0, 34);
        cout << ":                      .-=*#*+-        ...        P V N  M i n g y u  S e p a t u  S n e a k e r s   W a n i t a  Cream 265                 :";
        gotoxy(0, 35);
        cout << ":                   ..==******+-.    .:::..       PVN sneakers adalah sepatu sneakers yang nyaman di gunakan untuk berolahraga karena       :";
        gotoxy(0, 36);
        cout << ":                .-==++**==*****++===+:.:--:      mempunya boost pada bagian bawa sepatu dan juga ringan                                    :";
        gotoxy(0, 37);
        cout << ":         ...::--===++-.:--.:=******=---====-                                                                                               :";
        gotoxy(0, 38);
        cout << ":     .-=+++==========++::++==++=---=+++++=--.    R p. 1 6 0 . 0 0 0                                                                        :";
        gotoxy(0, 39);
        cout << ":     -****************##*##*---=+++--:::::::   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        gotoxy(0, 40);
        cout << ":      :-===+++++*****++++==:------::::::::..:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        gotoxy(0, 41);
        cout << ":      ..:-=+++++*+++*****++++===============:  :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
        gotoxy(0, 42);
        cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        barang = sepatu2;
    }
}

int Marketplace::checkout()
{
    setcolor(6);
    gotoxy(0, 0);
    cout << "=========================================================================================================================================";
    gotoxy(0, 1);
    cout << "*****************************************   C  H  E  C  K  O  U  T     P   A   G   E    *************************************************";
    gotoxy(0, 2);
    cout << "=========================================================================================================================================";
    gotoxy(0, 4);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
    gotoxy(0, 5);
    cout << "####   #   #  #   #                  ##     ##     #             #            ##                  #                      ::::::::::::::::";
    gotoxy(0, 6);
    cout << "#   #  #   #  #   #                 #  #   #  #                                #                  #                      ::::::::::::::::";
    gotoxy(0, 7);
    cout << "#   #  #   #  ##  #          ###    #      #      ##     ###    ##     ###     #            ###   # ##    ###   # ##     ::::::::::::::::";
    gotoxy(0, 8);
    cout << "####    # #   # # #         #   #  ####   ####     #    #        #        #    #           #      ##  #  #   #  ##  #    ::: FOLLOW + :::";
    gotoxy(0, 9);
    cout << "#       # #   #  ##         #   #   #      #       #    #        #     ####    #            ###   #   #  #   #  ##  #    ::::::::::::::::";
    gotoxy(0, 10);
    cout << "#       # #   #   #         #   #   #      #       #    #   #    #    #   #    #               #  #   #  #   #  # ##     ::: CHAT(..) :::";
    gotoxy(0, 11);
    cout << "#        #    #   #          ###    #      #      ###    ###    ###    ####   ###          ####   #   #   ###   #        ::::::::::::::::";
    gotoxy(0, 12);
    cout << "                                                                                                                #        ::::::::::::::::";
    gotoxy(0, 13);
    cout << "                                                                                                                #        ::::::::::::::::";
    gotoxy(0, 14);
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
}