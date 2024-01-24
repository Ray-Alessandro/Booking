#pragma once
#include <iostream>
#include <string>
#include <clocale>
#include "conio.h"
#include <vector>
#include <array>
#include <list>
using namespace System;
using namespace std;

string nombres1[]={"Agustin","Ray","Bruce","Anthony","Carlos","Willian","Goku","Vegeta","krillin","Gohan","Piccolo","Jose","Luis","Eduardo","Randy",
                    "Henry","Lucas","Juan","Brandon","Cristian","Fiorella","Hugo","Martin","Lucas","Mateo","Leo","Daniel","Alejandro","Pablo","Manuel","Alvaro"};

string nombres2[]={"Angel","Gonzalo","Gael","Sergio","Nicolas","Dylan","Gabriel","Jorge","Jose","Adam","Liam","Eric","Samuel","Dario","Hector","Luca","Iker", 
                    "Amir","Rodrigo","Saul","Victor","Francisco","Ivan","Jesus","Jaime","Aaron","Ruben","Ian","Guillermo","Erik","Mohamed","Julen","Rafael"};

string apellidos1[]={"Lopez","Del Carmen","Cipriano","Loarte","Montoya","Cubas","Smith","Perez","Figueroa","Messi","Suarez","Quevedo","Trujillo","Arevalo","Orton",
                    "Torres","Cordova","Caceres","Rodriguez","Cueva","Vilca","Alvarez","Andrade","Benitez","Castillo","Diaz","Espinoza","Fernandez","Flores","Garcia","Gomez",
                    "Aguilar"};

string apellidos2[] = {"Morales","Reyes","Rivera","Ramos","Dominguez","Herrera","Medina","Vargas","Rojas","Luna","Salazar","Santiago","Estrada","Soto","Alvarado","Lara","Rios","Delgado","Vega",
                        "Sandoval","Carrillo","Fernandez","Solis","Ibarra","Nuez","Campos","Santos","Camacho","Padilla","Navarro"};

string correos[]={"@outlook.com","@gmail.com","@yahoo.com","@hotmail.com"};



vector<string> generarImagenPerfil(int j) {
	vector<vector<string>>cadenaUsuario;
	vector<string>usuarios;

usuarios.push_back("                        ..-..````                        ");
usuarios.push_back("                   `.:/............--.`                  ");
usuarios.push_back("                 .--..................-:.                ");
usuarios.push_back("               `/-......................:-               ");
usuarios.push_back("              `-`  `.....................:-              ");
usuarios.push_back("              ``   `......................:`             ");
usuarios.push_back("             -.`  ``......................-/             ");
usuarios.push_back("            `/..``......................../s             ");
usuarios.push_back("            `/...........................:+y`            ");
usuarios.push_back("             :...........................++h`            ");
usuarios.push_back("             :...........................++h.-           ");
usuarios.push_back("           `.:..........................-+odsh`          ");
usuarios.push_back("           :oo+:.--...................-:++ymmd`          ");
usuarios.push_back("           :o//y...:/:-/-........:+sy+/s++ddho           ");
usuarios.push_back("           `:..do../:-/so/+:.../o+++:`-:++mys.           ");
usuarios.push_back("            `-:/d/.....:-.....o+-.......:shy:            ");
usuarios.push_back("              .:+d-...........o+/.......:s/-             ");
usuarios.push_back("               `./y.........../+/......-+/               ");
usuarios.push_back("                  /o.........-++......-+y`               ");
usuarios.push_back("                 `.d/........--.......+y-                ");
usuarios.push_back("               `-+sdo/:.....--.-:....ody                 ");
usuarios.push_back("            .:sdm-dh-.//:.....-....:ydhs`                ");
usuarios.push_back("     ``-:/+smNNMs oh...-:/:-.....:sNdods/`               ");
usuarios.push_back(".:+syhmNNNMNNNNM+ `++..-+../osssydmh+yd+/s:              ");
usuarios.push_back("NNNNNNNNMMNNNNNMd`  :o../s...:osoyy+ohy++sNs`            ");
usuarios.push_back("NNNNNNNNMNNNNNNMm-`  .o-./o...:++s++yddo.-NMd/`          ");
usuarios.push_back("NNNNNNMNNNNNNNNNN-.`  `/:./+../+/:+ohmN:.-yMMMmy:`       ");
usuarios.push_back("NNNNNNMMMMMMMMMNm+.`    -:-:+.-/-+shhm:.o-+MMMMMMNy/`    ");
usuarios.push_back("NNNNNNMMMMMNNNNNh`.`      -+dy:-+ydho//os`:NMMMMMMMMNh/` ");
usuarios.push_back("/////////////////           ./:-/--`..:--`./++++++++++//.");

cadenaUsuario.push_back(usuarios);

usuarios.clear();

usuarios.push_back("                               `                         ");
usuarios.push_back("                              :y`                        ");
usuarios.push_back("                            `/ss/                        ");
usuarios.push_back("                           `osyyy`                       ");
usuarios.push_back("                          .osyhyyo                       ");
usuarios.push_back("                         -ssyhmyyh-                      ");
usuarios.push_back("                        :syyhmNhyyy`                     ");
usuarios.push_back("                       :yyyhmNNmhyy+                     ");
usuarios.push_back("     `-----..``       -yyhhmNNNNmhyh:                    ");
usuarios.push_back("     `/yyyyyyyyysso+/:yyymmNNNNNNmyyhoooooosssssssssy/   ");
usuarios.push_back("       `+dddmmddddddhyyohNNNNNNNNNysooyhhyyyhhhhhys:     ");
usuarios.push_back("         `oddmmNNmNNso+o/omyhNNNmo/oosmmmmNNmmddy:       ");
usuarios.push_back("           .smdmNNNNososs++somNh/+ssssNNNNNmddy/`        ");
usuarios.push_back("             :hddmNN+s+osyys+dmysyso++mNNmddh/`          ");
usuarios.push_back("             .:hhys/:::/:s+/++///s+:://++ydy-            ");
usuarios.push_back("         .-+ssyo//+:::::oo++s:.-+o+////:/syyss+/-.`      ");
usuarios.push_back("     `-/osyhdhyyhms:+::+oyo/:/.-ss+:+sdsssyyhmddhys+/.`  ");
usuarios.push_back("     :+oyhddyymNNNdoyossdsdh.-.ohydyo+sssmyhhhNNmmhys+:` ");
usuarios.push_back("        `-ysshdmNNNhhyy//yy+...//yy/ooo+hNmydhyh+:.`     ");
usuarios.push_back("        .o+. `-/ohddssso:---./.---::soohmdy++o-+-        ");
usuarios.push_back("       .+.       `/yosoo.....:.....-hydh+.`  :: :.       ");
usuarios.push_back("       .        .:/+sssdy+-..--.-/ymmmdo+/-   `          ");
usuarios.push_back("                    -shsohs//:/+sy+:/d:                  ");
usuarios.push_back("                     sho.+mmoddNm+.`hh                   ");
usuarios.push_back("               ..`.:++yo+hmmohhmNy+:y+:+.```             ");
usuarios.push_back("              /hyyyhdy..:hddyyhmhh:.`+dmdddd:            ");
usuarios.push_back("              syhyyyyhh--ydNmmmmyd..shmmmmddo            ");
usuarios.push_back("              yyhdyyyyyh-odmmmmhdy-syymmmNhmy            ");
usuarios.push_back("             `sooysoooooo/syyyyyss+oooyyyysyy:           ");
usuarios.push_back("                           `  `:.                        ");

cadenaUsuario.push_back(usuarios);

usuarios.clear();






usuarios.push_back("                           ./ohd/                        ");
usuarios.push_back("                        `:oyhdhh                         ");
usuarios.push_back("                       `+yyyyysy                         ");
usuarios.push_back("  ````          ``-:+++sysosssss-                        ");
usuarios.push_back(" shyyyyo++:-.:ooshhyssoossooooooo.                       ");
usuarios.push_back(" :mmmmddhhyyhhysysshyooo+oossssyhy:                      ");
usuarios.push_back("  :mdhhhhyysysso+so+sy+oo+++ooosshh:                     ");
usuarios.push_back("   odhyo/+ssssso+++o+os/++o+syyyyhhds-                   ");
usuarios.push_back("   .yo/::/ssssoo+o+++/os+o+o+sysso++yhy:`                ");
usuarios.push_back("    odyoshysoossso+++++o+o+/://+oyyyyhyy+                ");
usuarios.push_back("    -dhhddhyssssso/:-/++oo+:+dNNNNdsoyyyh/               ");
usuarios.push_back("     sddmmhs+//::///:/ooooo+sMMMMMN/+yhhhy               ");
usuarios.push_back("    .smmNmh/-:+hmNNNddysosssoNMMMNy+osyyyy               ");
usuarios.push_back("   .ydmmNmhyydmMMMMNmNdyyyyssyyso+/+ssyyyo               ");
usuarios.push_back("   -ddmNNNNdhhymMMMMNNmhyhyyyss+///+osyss-               ");
usuarios.push_back("    :dmmmNmdyysoyhhs+yhyyhhhyys:--:+sssoo:````           ");
usuarios.push_back("    /dmmmmdhhhyys++++ssoohdyss/```.:oo+++oo....`         ");
usuarios.push_back("   odddddddhhhhssoooso+:`..-/o.``.-/soo++osy-            ");
usuarios.push_back("  .dddmddddddddddyyyhs/:-..`.o:-:/osysssssyyo            ");
usuarios.push_back("  :dddddmmmmdhyyhhyyhyso+/::---:ooooosyhyyyhh/           ");
usuarios.push_back("  +dddddmmmdddmdhhhdmmmdys+++/oyosooosysdmmmmd/`         ");
usuarios.push_back("  +ddddddddmmmmmmmhhhhhyyoodmmmhssyyyyhydMMMMMNNho-      ");
usuarios.push_back("  oddmmddmmmNNNNms/+++++ooohMMMmddmddmmdNMMMMMMMMMNh:    ");
usuarios.push_back("  hhdddddmmNmmmddo++oosysydNMMMMMMNNNNNNMMMMMMMMMMMMNs` -");
usuarios.push_back("  hddddmmmmmmmddmhssyhdhhdNMMMMMMMMMMMMMMMMMMMMMMMMMMMh :");
usuarios.push_back(" `hhdhhhdmddddmmNmdhdmNNNNNMMMMMMMNNMMMMMMMMMMMMMMMMMMM-:");
usuarios.push_back(" /yyhhhddddmdmNNMMMNNNNNMMMMMMMMMMNMMMMMMMMMMMMMMMMMMMM/:");
usuarios.push_back(" oyyyhhdddddmNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNm.:");
usuarios.push_back(" ...--------------------------------------------------- `");
usuarios.push_back("                            `````                        ");

cadenaUsuario.push_back(usuarios);

usuarios.clear();






usuarios.push_back("                           `+yhhyo.                      ");
usuarios.push_back("                            :mNmmdh/                     ");
usuarios.push_back("                             ommdyyh/                    ");
usuarios.push_back("                             omhyysyh`                   ");
usuarios.push_back("                            `hhhyyyyd:                   ");
usuarios.push_back("                           -shyyyyyhdo                   ");
usuarios.push_back("                        `:shhyyyyyyhdy                   ");
usuarios.push_back("                      ./yhhyyyyyyyyhhd`                  ");
usuarios.push_back("                    `+hhhhyyyyyyyyyhhd+                  ");
usuarios.push_back("                  `/hmmddhyyyyyysyyhddh.                 ");
usuarios.push_back("                 .smmmNNmmdddhhhyhhddmdo                 ");
usuarios.push_back("                -hmNNNNNNNNmmmmmmmmmNmmh                 ");
usuarios.push_back("               -dmNNds+/+oydmmNNNNNNNNNm`                ");
usuarios.push_back("              `ymmmy-..`````-:/+ooo+sNNm`                ");
usuarios.push_back("              -dmdy:::-...```````..../mm`                ");
usuarios.push_back("              -mmmh/++oso/----------:-yd                 ");
usuarios.push_back("               hNNmooyyo+/::::::::+sy/yo                 ");
usuarios.push_back("               .dNNyoo++o+/:::::/++sdsh`                 ");
usuarios.push_back("                .dNyoo+/::/:--:+ossood.                  ");
usuarios.push_back("                .-dho+:/so-:--/:-+ooy`                   ");
usuarios.push_back("               -+++h/-/dNm/-.-hdh:oo`                    ");
usuarios.push_back("               ./:+o...:/:.`..sds-o:`                    ");
usuarios.push_back("                `-//--:..`-///----//`                    ");
usuarios.push_back("                  -s////:--::/-:/o+/                     ");
usuarios.push_back("                   +o/:/oo++/++o++o:                     ");
usuarios.push_back("                    -++//++ossoo++-                      ");
usuarios.push_back("                     `:osooooss/-`                       ");
usuarios.push_back("                   `-::://///++:`                        ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");

cadenaUsuario.push_back(usuarios);

usuarios.clear();






usuarios.push_back("                  `oo:.                                  ");
usuarios.push_back("                   -MMMNho:.                             ");
usuarios.push_back("                    +MMMMNNdy/   `                       ");
usuarios.push_back("                     yMMMMNNmhs` `                       ");
usuarios.push_back("    `:++oossssoo/:.  .NMMMMNNmhs  .                      ");
usuarios.push_back("     .+dMMMMMMNNNmhs:`oMMMMMNNdh/ .                      ");
usuarios.push_back("       `:hNMMMMMMNNmhy+MMMMMMNmhh..                      ");
usuarios.push_back("          :hMMMMMMMNmdhNMMMMMNNdds/.`                    ");
usuarios.push_back("            /NMMMMMMNNdmMMMMMMMMMMMNds-`                 ");
usuarios.push_back("         ``../NMMMMMMMMMMMMMMMMMMMMMMMNy.                ");
usuarios.push_back("    `.:oyhdddhdMMMMMMMMMMMMMMMMMMMMMMMMMd`               ");
usuarios.push_back("  -ohNMMMMNNNmddMMMMMMMMMMMMMMMMMMMMMMMMNo               ");
usuarios.push_back(".smMMMMMMMMMMMNNMMMMMMMMMMMMMMMMMMMMMMMMMh``.....`       ");
usuarios.push_back("   `-+ymMMMMMMMMMMMMMMMMMMNmdNMMMMMMMMMMMNdmNNNMMMNmhs/` ");
usuarios.push_back("        .odMMMMMMMMMNNMMMNdddyNMMNddMMMMMMMMMMMMMNhs/-`  ");
usuarios.push_back("    ```````-smMMMMMMNNMMNddo-yMMNdhosMmNMMMMMMho-`       ");
usuarios.push_back("      .:+syhhdNNyMMNMydMNh-..NMNh+.`ydmMNyMNmdhyso+/:-`  ");
usuarios.push_back("     `/shdNMNNMd/mMymNmMd-``:Mm+../hNymh/+MNNNNNMNdyo:`  ");
usuarios.push_back("         `.:+hmM+/hds+.hhh/`+h:/yy+:/-o:.mMMmds+-.`      ");
usuarios.push_back("              .:++syso---+:++/+:+` .`///dMNh+:```        ");
usuarios.push_back("             `./ymNhho+::..-:``---.`.yhNMMmmdhs:         ");
usuarios.push_back("             .:/++oydy+:-`./+```   `yhss+/:-.```         ");
usuarios.push_back("                  ``:ooo:--/+-`  `.::`                   ");
usuarios.push_back("              ` `.--+-:os/:--.``-/:`-...`                ");
usuarios.push_back("          `:/yh/::://-o-++++:-:::-` .:``.:++```          ");
usuarios.push_back("      `:+oy/hMo:+so:-:oo-+:/s.`:-+.```::.`+Nm+.:`.-      ");
usuarios.push_back(" `-/oyhs+hy:yMmsys+/////--+::-+--+--.-//+odmm` .+y-:.    ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");

cadenaUsuario.push_back(usuarios);

usuarios.clear();






usuarios.push_back("                                                         ");
usuarios.push_back("                                       `so               ");
usuarios.push_back("                                      :syd:              ");
usuarios.push_back("                                     /yhddy.             ");
usuarios.push_back("                                    :shh/odo`            ");
usuarios.push_back("                            `.-:::::yhy+`.hd/            ");
usuarios.push_back("                      `-:/osyhhdddddhy:` `smo.           ");
usuarios.push_back("     ````  ```..---.-+yhddddddddmmmmdy:`  ymm+`          ");
usuarios.push_back("    `/oo++++syhdddo/yhdhhhhdddddddddddh++:dmmy:          ");
usuarios.push_back("     `+yhdsshdmmdss+yhyshsdddydddddydddddhdmmhy.         ");
usuarios.push_back("       :shh+/ohhshshhdyhhydddddmmmmdhyhdddydmdh/.        ");
usuarios.push_back("        `/yhs-.+hssyddyddhddddmydmmhyyddhhhymmyo+.       ");
usuarios.push_back("          `:+o++h/yodhohyohdhsysyddhmdmmmdmymddyy+       ");
usuarios.push_back("             `:ooossyosyhyyydmdoomdhmmNmmmNddmmdds`      ");
usuarios.push_back("             -ossdddd+ymmdmmmdm+:ymmmmNNmmNmdmmmmy.      ");
usuarios.push_back("             :yyhmmmm+omNmNNNym:.:hNmNmNmmmNdNmmmy.      ");
usuarios.push_back("             /dhddmmm:-dNmNNNsh``.+dNmmmmmdmdNmdh+.      ");
usuarios.push_back("             /ddmmmym:`/hymNN//-oyNNNmmmdmmmdMhdy/:      ");
usuarios.push_back("             :hdmNd/shso/o/mm..:-+ddhs/hdmmNdNmdh//      ");
usuarios.push_back("             :ddmNhh/yNmy.`-o-   `--:..ymmNNmNmdh:/      ");
usuarios.push_back("             :mddMd+.-+/-           ``.ymmmmmmNdy+/      ");
usuarios.push_back("             :mmdNNm/```              -+NmdmmdNhys:`     ");
usuarios.push_back("             :ydmmNNm/`               `smdhmmmmhyy:.     ");
usuarios.push_back("             -:oNmmmmms.             .smmdyddmmyyho.     ");
usuarios.push_back("             - +mNmmdmmho-`       `-::hmmhyddddhshy-     ");
usuarios.push_back("             ` +mmmmdmmhddds+- `::/:--dmmhyhdhhhshs-`    ");
usuarios.push_back("              `yhydmhmdyddmmmy.-..````dmmyyydhyhyyh:.    ");
usuarios.push_back("              /m++dmhmdyymh+--``````` odmsyhddohshms-    ");
usuarios.push_back("              o+/+dNmNNNm+`.-`        .:dshhhd/hyhmh:    ");
usuarios.push_back("             `-.:///////.  ``         ` :::///.::-/:.    ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("                    `.............``                     ");
usuarios.push_back("                 `.-----------------...                  ");
usuarios.push_back("               `.--::-------------:::-::`                ");
usuarios.push_back("              `.-::-::-:::///:::-:-::-://`               ");
usuarios.push_back("             `---:-/+ossyyyyyyysso///-:///               ");
usuarios.push_back("            `---/+syyssoo+++++ooosyso::///.              ");
usuarios.push_back("            .-::++//::::://////::::://:+//-              ");
usuarios.push_back("           `:::/:://+oys:smmmddh+oo+++////:.`            ");
usuarios.push_back("         .-/://++ohm+hN:..hNMyNN+/mNds+++++:-.`          ");
usuarios.push_back("       .-:+oo++ymMMy-ds...-mNssNs.+NMMNy////+/:.`        ");
usuarios.push_back("     .--/////omMMMN/.h:....:Ns:od..sNMMMm+//////:-`      ");
usuarios.push_back("    --://///yNMMMMd:-o-.....oo-.s/-:mNmMMm+///////-`     ");
usuarios.push_back("   --/////oymMMMMhh-..--.....:.---..yyyMMMy////////:`    ");
usuarios.push_back("   :/++////oNMNNd+/.`/-`-.......`/-`:-oNMNy+///////:-    ");
usuarios.push_back("   :/++//+sdmm/sy-.` :. `..-..`` /.`..+Nhs+/////////:    ");
usuarios.push_back("   -/++/+oo+yd-+s.........:-.....-.:-.os:///////////.    ");
usuarios.push_back("    -//++++/ys//+/.........-.....-...:+//++///+++/:.     ");
usuarios.push_back("     `.:++/+o+///+/...-.-......---..///++/+o++//-`       ");
usuarios.push_back("        `.-:////o++//-...........-+y+/++o+//:.`          ");
usuarios.push_back("             `..--::syo-......-:/h+/:--..``              ");
usuarios.push_back("                     .+////://///:                       ");
usuarios.push_back("                      .-:////////:                       ");
usuarios.push_back("                  .` `...--:::--.:.                      ");
usuarios.push_back("              `.:ss/-.............--/++.                 ");
usuarios.push_back("             -syyy-..................-yyo/`              ");
usuarios.push_back("         .:+syyyyo.--....-....-..-.--.oyyys/.            ");
usuarios.push_back("      ./osyyyyyyy+....................:yyyyyys/-         ");
usuarios.push_back("    `+syyyyyyyyyyy-:-......-........:/+yyyyyyyyys/`      ");
usuarios.push_back("    /ooooooooooooo+-:-.````-.````.---:oooooooooooo+`     ");
usuarios.push_back("           `````                         `..--..`        ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("       .:oydddddho:`                  `:sdmmNNmmho-      ");
usuarios.push_back("     -ymMMMMMMMMMMMm+`              `+mMMMMMMMMMMMNh-    ");
usuarios.push_back("   `yNMMMMMMMMMMMMMMMh.            `hMMMMMMMMMMMMMMMN/   ");
usuarios.push_back("  .mMMMMMMMMMMMMMMMMMMh            hMMMMMMMMMMMMMMMMMM:  ");
usuarios.push_back(" `dMMMMMMMMMMMMMMMMMMMM.          :MMMMMMMMMMMMMMMMMMMm  ");
usuarios.push_back(" +MMMMMMMMMMMMMMMMMMMMM.          +MMMMMMMMMMMMMMMMMMMM- ");
usuarios.push_back(" yMMMMMMMMMMMMMMMMMMMMd           :MMMMMMMMMMMMMMMMMMMM: ");
usuarios.push_back(" sMMMMMMMMMMMMMMMMMMMN-.-//++++/:.`hMMMMMMMMMMMMMMMMMMN` ");
usuarios.push_back(" -MMMMMMMMMMMMMMMMMMMdyyhNMMMdsoshNdMMMMMMMMMMMMMMMMMM+  ");
usuarios.push_back("  +MMMMMMMMMMMMMMMNy:````-hM+`` ``-sNMMMMMMMMMMMMMMMN+   ");
usuarios.push_back("   :dMMMMMMMMMMMMd-`      `s`      `:mMMMMMMMMMMMMms.    ");
usuarios.push_back("    `/ydNNNNNMMMh.         `         -mMMMMdyyys+-`      ");
usuarios.push_back("       `..-+NMMm.     `--.  `:-:`     /MMMMN/            ");
usuarios.push_back("          :NMMMo      /. /` :. ./     `NMMMMN-           ");
usuarios.push_back("         `mMMMM-     `+  `/ +   o      dMMMMMh           ");
usuarios.push_back("         oMMMMM.     ./ ::o`so. o`    `mMMMMMM-          ");
usuarios.push_back("         mMMMMM:     ./.MMo mMy`+     -MMMMMMM+          ");
usuarios.push_back("         NMMMMMy`     /-NN/`yNo/.    `hMMMMMMM+          ");
usuarios.push_back("         mMMNhyy.     .:+sssss+-`    -sosydNMM-          ");
usuarios.push_back("         od:`         -dMMMMMMMd.          .ys           ");
usuarios.push_back("         s`   .::.    /NMMMMMMMd.    .::`   `/           ");
usuarios.push_back("         s`  -::/`    ``/osso+-`     `:::.  `+           ");
usuarios.push_back("         .s` `  `/:-`             `:::`  ` .+`           ");
usuarios.push_back("          .+/`   ``-os/:-....-::+sho`   `-++`            ");
usuarios.push_back("            -++:.   `sdhhhhhhhhhhdo` `-/+:.              ");
usuarios.push_back("              `-//:-.:+hyo+/oo//o+:::/:.                 ");
usuarios.push_back("                  `.`.:/+//////+/:.`                     ");
usuarios.push_back("                       .-//////-.                        ");
usuarios.push_back("                          `..`                           ");
usuarios.push_back("                                                         ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("            `-`                             `            ");
usuarios.push_back("            :o:                            -+`           ");
usuarios.push_back("            +s+:                          -+/-           ");
usuarios.push_back("            +oo+:`                      `:+++:           ");
usuarios.push_back("            +o/++:`                   `-/++o+-           ");
usuarios.push_back("            /o-/++/.                `-/+o/.++`           ");
usuarios.push_back("            -++.:+++-             `-/+o/-./+:            ");
usuarios.push_back("             /+/.-+++:`          ./++o-../+:             ");
usuarios.push_back("             `/+/../++/`        .++o+-.-+/.              ");
usuarios.push_back("              `:++-./++/.    .-`+++o--/+:`               ");
usuarios.push_back("                ./+/-++++--`:+:-o+o+/+:`                 ");
usuarios.push_back("                  ./++o++o///+//+++o:.                   ");
usuarios.push_back("                    -+o+++/////+o+++`                    ");
usuarios.push_back("                    :///+/::::/++-//-                    ");
usuarios.push_back("                   `o+``:o::-:/s``.o/                    ");
usuarios.push_back("                   +s/  `o/:-:+/  `:s-                   ");
usuarios.push_back("                  /+s`  `:+:::+:  `.++.                  ");
usuarios.push_back("               ``/++s``sy:+///o/yh`.++o-.```             ");
usuarios.push_back("          `.......-:/-:md+o+++oshy:::.`````..-.          ");
usuarios.push_back("        `+-`      ``....-//++///::..```       .-         ");
usuarios.push_back("        -.     .---shdmmm/`...+Nmmmds-.`      `:-        ");
usuarios.push_back("       `/`         .hmmmmh.```ymmmd/`         `-.        ");
usuarios.push_back("        -`          `hdddh`   yddy.          `--         ");
usuarios.push_back("        .-.          -hhhy/--/hhy`        ``..``         ");
usuarios.push_back("         ....`        ossyyyyyyy-      `...``            ");
usuarios.push_back("            ````````` ./::+///y/ `......``               ");
usuarios.push_back("                ``.--` -:::::::`--.``                    ");
usuarios.push_back("                     ```.----..`                         ");
usuarios.push_back("                        `````                            ");
usuarios.push_back("                                                         ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                ``.....`                 ");
usuarios.push_back("                        .-:/+syhddmmmmmmds:`             ");
usuarios.push_back("                   `-/shdmmNNNNNMMMNmddNMMNd/`           ");
usuarios.push_back("                 -odmNNNNNNNMMMMNy/-...-yMMMMh.          ");
usuarios.push_back("               `oNNNNNNNNNNMMMms:```````-MNMMMm-         ");
usuarios.push_back("              .hNMMMMMMMMMMNms:.``````` .:::oNMm.        ");
usuarios.push_back("             .s::/shdmNNNmhy:s/-:````  `.:.``:NMh        ");
usuarios.push_back("             s`  `.-.yso/:-/-yys+ ```.-:++```.yMMo       ");
usuarios.push_back("            .d     ./yy-:+/-:/+:--::/+os+.```.:MMN.      ");
usuarios.push_back("            ::      .:-://+++///:/+oyyo-`````.:MMMy      ");
usuarios.push_back("            ` ....---.-://+++osyyhys+-```````.+MMMN.     ");
usuarios.push_back("           `  .///:///osyyhhhdhys+:..````````.dMMMMo     ");
usuarios.push_back("           `   `.:/+syyhhhhyso+/:-.``` ``````oMMMMMm     ");
usuarios.push_back("          :       ``.-///++//::-.```    ````:NMMMMMM-    ");
usuarios.push_back("         /:         ```..---...```       ```mMMMMMMMo    ");
usuarios.push_back("       `s+              `````````        ``/MMMMMMMMd    ");
usuarios.push_back("      -ds                               ```sMMMMMMMMN-   ");
usuarios.push_back("    `+mh`   ``.```         ``..`       ````yMMMMMMMMMo   ");
usuarios.push_back("   /dMM: `-+hdmddhhyysosyyhhdmmdy:`   ``.:yNMMMMMMMMMd   ");
usuarios.push_back(" `sNMMm`:hNNMMMMNNNNNMMMMMMMMMMMNNh:``-odMMMMMMMMMMMMN-  ");
usuarios.push_back("`hMMMMohNMMMMMMNNNNMMMMMMMMMMMMMMMMMyhNMMMMMMMMMMMMMMMo  ");
usuarios.push_back("dMMMMMNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd  ");
usuarios.push_back("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN. ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");




cadenaUsuario.push_back(usuarios);

usuarios.clear();



usuarios.push_back("                      .`         .-                      ");
usuarios.push_back("                      /:-`    `-:.:.                     ");
usuarios.push_back("              ...`   `+..--..:--.../  ...-:/             ");
usuarios.push_back("              ./--:---+-...--....../-:---.--             ");
usuarios.push_back("              `::....--.................../              ");
usuarios.push_back("         `....../-........................:--::-:-       ");
usuarios.push_back("         -::-----............................---`        ");
usuarios.push_back("          `-::.......-:/+ooooooooo+/::--.....-:..`       ");
usuarios.push_back("         ``-::-.--..-hmNNNNNmmmNNNNNmddy-.......---`     ");
usuarios.push_back("        `/::-/--//..ohyyso++/////+ossydmo..:-..:-.`      ");
usuarios.push_back("         `-:/+-+mo./s:::---.-:-::-`````:y/./:.-:-        ");
usuarios.push_back("         .::/:omNy-ho:::---:o/:/.````` ./m-+h-/://       ");
usuarios.push_back("         ..-++NNNdsmo/::::-::+:-.``````-:NyyNy:- `       ");
usuarios.push_back("            o-NNNNNNmmdmNmmmmmdddddddddhmNNmNNs-         ");
usuarios.push_back("            `:yos/:--//+//:.``````-//s++++oohhh-         ");
usuarios.push_back("            -oo-/.`:`++//-.-````.--:/+//-.``+///         ");
usuarios.push_back("            ::-/+.```//+-.`````:.``.:++/..`./+.o         ");
usuarios.push_back("            `+:++.`````````````````````````-:+//         ");
usuarios.push_back("             -:+s:-..``````````````````.---+/:-.         ");
usuarios.push_back("              --++-..``````````````````.```+/-.          ");
usuarios.push_back("               `/+-.```````````````````.`.//``           ");
usuarios.push_back("                -/+:-``...-...-...`````.--/-             ");
usuarios.push_back("                .+:+/.``.````````...```./+/`             ");
usuarios.push_back("                 `-mm::.``````````````-sho               ");
usuarios.push_back("                 `:NNy///.````````.::osmNs               ");
usuarios.push_back("                 `.NNNNNmhdso+:osdhmNNNNNy               ");
usuarios.push_back("                 `:NNNNNNNNNNm/NNNNNNNNNNm               ");
usuarios.push_back("               `:omNNNNNNNNNNNsNNNNNNNNNNNo:`            ");
usuarios.push_back("         ``-:oymmNNNNNNNNNNNNNoNNNNNNNNNNNNmmy+.         ");
usuarios.push_back("        -::://////////////////-////////////////::`       ");



cadenaUsuario.push_back(usuarios);

usuarios.clear();




usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("             +/-`                                        ");
usuarios.push_back("            .y/yy/.        `.-//+++/:.`                  ");
usuarios.push_back("            .h:-odho-` `.:+osyyyyhhhddy+.                ");
usuarios.push_back("            .h:.`:hdhs+osyyyyyhhhdddddddy:/++            ");
usuarios.push_back("            `d:.``ohysyyyyyyhhhhhddhyhhyssood`           ");
usuarios.push_back("             y+..-osyyyyyyhhhhhhhhhyhs+/++o+y            ");
usuarios.push_back("             -hooosyyyyyyhhhhhhhhdddy///+o/oh/.          ");
usuarios.push_back("             .sssyyyyyyyhhhhhhhhddddmds//::dmmdy/`       ");
usuarios.push_back("             od/-yyyyyyyhhhhhhhhhhdddmmdsoddmmmddh/      ");
usuarios.push_back("            `yo  +yyyyyyhhhhhhhhdhhdmmmdddddddddddds`    ");
usuarios.push_back("            -h.  -yyyyyyhhhhhhy+:-:/smmddddddddddddds    ");
usuarios.push_back("            :h   `yhhhhhhhhhh+-.`...-hmdddddddddddddd:   ");
usuarios.push_back("            /h    ohhhhhhhdh/:.```.`.hmdddddddddddddd+   ");
usuarios.push_back("            +y-   hhhhhhddy:sN+``.``/mmdddddddddddddd+   ");
usuarios.push_back("           .ss+`  oyhdddho-:mN/`.../dmdddddddmmmmmddd-   ");
usuarios.push_back("           -s:.```:ss+/::-.+hs...-+dmddddddh.:ohmmmds    ");
usuarios.push_back("           .ss-```.ydy--.--/o///+ymmdddddddd/   ./yh.    ");
usuarios.push_back("           `shyo/::::///:------::/hmmmmmddddd.     `     ");
usuarios.push_back("            ohmmmdyssssoo++++++ooymmmmmmddddds           ");
usuarios.push_back("            :mNMMNdhhyyhhhhhhhdmmmmmmmmmmmdddh           ");
usuarios.push_back("            `hho-:so.`..-/oyho/+ymNNmmmmmmdddh           ");
usuarios.push_back("            `.:oyoy.`````..-/oy- `+mNNmmmmmddy           ");
usuarios.push_back("          `:/:yhssy```````..-/y+`  .yNNNmmmdd+           ");
usuarios.push_back("         .o:` +yoyh.``````..-/do:`  `+NNNmmmd`           ");
usuarios.push_back("         `/:  /mhyh:`````..-:s+s:-`   :mNNNm/            ");
usuarios.push_back("         ``/. .oyos+`````..-:s`-/--`   -hhho             ");
usuarios.push_back("                           .:/`          ``              ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("                     :/``-sdmy`                          ");
usuarios.push_back("                  `/sddysmNNm::oyo/`                     ");
usuarios.push_back("              ````+dddmmhmNNNhmNNNd-``                   ");
usuarios.push_back("             `syyydhhdNmhddMNmNNNNNdhys/-..              ");
usuarios.push_back("            `/ddddmddmNMmddMNNNNNNNNNNNNNd/              ");
usuarios.push_back("            ymmddmmNNNMMMmMNmNNMMMMNNNNNN+               ");
usuarios.push_back("           +mmmNNMh/--:/+::--:/+yNMMMMMMNNy:             ");
usuarios.push_back("           smmNNMs``````....--:/+yMMNNNMNNs/-            ");
usuarios.push_back("          +mmNNmN-``````....-//++sMMNMMNNNNNm-           ");
usuarios.push_back("        `/dmNNNNN.//:::::+shddmyoyMMNMMNNMMd:`           ");
usuarios.push_back("        `smNMNMMM:yyyhdy+dhyso+ooyMMMMdyssmh-            ");
usuarios.push_back("         `.o+omMM/.-/:oo-o//:///+omMMMmhyoo.             ");
usuarios.push_back("           .//hMN:.-..y+-+.o::-::/+hNMNhyso.             ");
usuarios.push_back("           ./:mmo----.---:/++--::/+osdNdyso`             ");
usuarios.push_back("           `:od:---.----:/ss+::/oo/+ssyy+:`              ");
usuarios.push_back("            `:-..-.....--::--/+oo/:/oss+                 ");
usuarios.push_back("             `...........--:/++++//+osyo`                ");
usuarios.push_back("             `...``..------::////++osyyy/`               ");
usuarios.push_back("             `.....``....---:://+oosyyhhs/`              ");
usuarios.push_back("              ............--::/+ossyyhhhhs/.             ");
usuarios.push_back("              .--........--:/+ossyyhddmdhhs+:`-`         ");
usuarios.push_back("     ``./oo-``..-::----:::/+osyyhdmmmmddhhysoos+/:-.```  ");
usuarios.push_back("`:+osydmms:......-/ossssssyyhdmmmNmmdhhyyssoooo+oooo++/- ");
usuarios.push_back("hdddmdoo+-........--:/osyhhhddhhyysoo++///++++ooooooo+o: ");
usuarios.push_back("mmmmy+/++++////::::::::://///++++++////++++oooooooooooo: ");
usuarios.push_back("mNms+++///+ooooososssssssssssoo+++++++++ooooooooooooooo: ");
usuarios.push_back("mNy+++++++++++++syyyyyyyyyso++++ooooooooooooooooooooooo: ");
usuarios.push_back("mhoooooooooooo/--+yyyyso+/++ooooooooooosssssssssssooooo: ");
usuarios.push_back("-.............`  `-...````.............................` ");
usuarios.push_back("                                                         ");



cadenaUsuario.push_back(usuarios);

usuarios.clear();




usuarios.push_back("        .-.`                                             ");
usuarios.push_back("       .+`..`                                            ");
usuarios.push_back("       /o:`.``                                           ");
usuarios.push_back("       ++ `.-/:.`        ````                            ");
usuarios.push_back("       ``-hms+oyyso+:-:/+ooooo+/-.                       ");
usuarios.push_back("       `--o+:smdhhhyo+so+++oooo+++/-.           ``       ");
usuarios.push_back("        ++``.dmmddhhhyyyys+:--:-------.      ``` `-      ");
usuarios.push_back("        `.`-:hmmmmddddhhdhs/````````......`    `--/`     ");
usuarios.push_back("         `.:+syhdmmddhhhddyo-``      ```.:+/:....+o      ");
usuarios.push_back("          :-osysshhmNdhdddy/.           ``:s-/y+``.      ");
usuarios.push_back("          ./:osyshdmmddmdy/-``    ```..````h+oyo.        ");
usuarios.push_back("           .//+oyyhhhys+/::----::+shddho:..dms++:        ");
usuarios.push_back("            .:..:/+++++oys+odysdmNMMmhs+//+hs+::+`       ");
usuarios.push_back("             `-``.-.-/hMMMMMMMMMMNdyo:/oys:+:.` :        ");
usuarios.push_back("              :+oyhyhmMMNMMMMMNNho:::+sy:.`/    `        ");
usuarios.push_back("              ./dMmMNNNNNNNNNmoo:-./oy/`  .              ");
usuarios.push_back("              `:oNdmNmdddmms/:::.-/os-                   ");
usuarios.push_back("              `:/smo/s//y/-:/-..-/so`                    ");
usuarios.push_back("              ./:+:/+///:/:-.`..:o/                      ");
usuarios.push_back("              :+:-+osooo/-.``.-/+:                       ");
usuarios.push_back("              ++/::://-..``.--:+/                        ");
usuarios.push_back("             .so+//:-..`..--::/+.                        ");
usuarios.push_back("             /sooo+/:...----::/-                         ");
usuarios.push_back("            `ssooooo+/-----:-/:                          ");
usuarios.push_back("            :sooo++/-..----::/.                          ");
usuarios.push_back("           `ssoooo+/-------///                           ");
usuarios.push_back("          `oysooooo/:-::--::+-                           ");
usuarios.push_back("         `:hhsooooo/:::::--:+.                           ");
usuarios.push_back("         -+++//::::-.......-:`                           ");
usuarios.push_back("                                                         ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                              ``                         ");
usuarios.push_back("                       ...........-::-.                  ");
usuarios.push_back("                    ...`````````````:///:.               ");
usuarios.push_back("                  .-`````````````````::::++.             ");
usuarios.push_back("                `-.``````````````````.::::oo:            ");
usuarios.push_back("               `-`````````````````````::::/oo/           ");
usuarios.push_back("               :``````````````````````-::::oos.          ");
usuarios.push_back("              ..``````````````````````-::::+oo+          ");
usuarios.push_back("              : ```````````.`````.````.::::+oos          ");
usuarios.push_back("              : ``````````````````````.////+oos          ");
usuarios.push_back("              : .+ddhs/````.`````.```.odNMmyoos          ");
usuarios.push_back("              : /hy++oyd+``````````-ymhsshNdso+          ");
usuarios.push_back("           :.-+ `````.../o-```````+s/-::/:+sos+//:       ");
usuarios.push_back("           ://:: ``..`````-``````-.`.````/oooyoso+       ");
usuarios.push_back("           ::-`+```:``````-.``````:``````:oooy+/o/       ");
usuarios.push_back("           ..`/+/ `:`````-Nh`````/No`````+ooyso:+`       ");
usuarios.push_back("            -`-oo``.-.````:.``````:.``..-soohy//-        ");
usuarios.push_back("             ../:: ``.--...```````...://+ooso+/-         ");
usuarios.push_back("              ``.:` ..-..--```````...///+os+-`           ");
usuarios.push_back("                  : `````:``.......-`:::+o+              ");
usuarios.push_back("                  `..````-.```````-..:/+o/`              ");
usuarios.push_back("                  `-:--:-.........`-/o/-...              ");
usuarios.push_back("           ```.::+smdo-`-/::-.``.:+oss++hNms/-``         ");
usuarios.push_back("       .-/++oshysods.`````.:/+++oosso++/+yNNNNmhyso:.`   ");
usuarios.push_back("      .sooooohyooyd:`````.`.:..-/o/y+::::/mmNNNNmmmmmh.  ");
usuarios.push_back("     `/sooooosoooyy:.....::.-+://-------/ohmNNmmmmmmdh.  ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");

cadenaUsuario.push_back(usuarios);

usuarios.clear();






usuarios.push_back("               `...`                                     ");
usuarios.push_back("            .-:--:::/+.                                  ");
usuarios.push_back("          `----:/++//+o+`                                ");
usuarios.push_back("         .-----:::+ososso`                               ");
usuarios.push_back("        .-.-::://oo+oossoo----::://:::-`                 ");
usuarios.push_back("       `:.-://+oso:--:/+/+//-.:::-:/::o+:-`              ");
usuarios.push_back("       :..::-:++s--/o/-.-::::/://:--:::///:/.            ");
usuarios.push_back("      .-`.:--/+os/+///:-.--::::-:------:::::o:`          ");
usuarios.push_back("      :`.---:+ssys---:-----/+so/:-::---/o/:--//:.        ");
usuarios.push_back("      /.--.:/osso+--------.:++o+::-+-:-:oso/-.://:`      ");
usuarios.push_back("      /-``-:+os+:+.----:.-.++-s+///:::/o/yo+o/:+++/.     ");
usuarios.push_back("     `s-..-/os/+-+----/s---y+.++++:o/-osssoo:s+o+/s+.    ");
usuarios.push_back("     -/:---o+d:/./:---/s/+:y+./o-/+o+:oosooo/-s+o/oo+`   ");
usuarios.push_back("     ++-/.:+od::----:`++++oss/-y`+os:+oo+osso-+/ssy+o/   ");
usuarios.push_back("    `+++-./+sso::--:..o/+sys.:yh`ooy/soo+shoys+sssho++   ");
usuarios.push_back("    -+/o-.//hss//:-:`+ooy//`  /o:ysosssyyy-/s-ohssd/o/   ");
usuarios.push_back("    .o:o--+:ysso+/:-/oo+-```````+o/ooh+.+:`+:.sysyo-s`   ");
usuarios.push_back("     ++o-:+:sooo+++::`.``:://:.`.``./-``/::-`o:o+-.+.    ");
usuarios.push_back("     `++:-/:oo.-::o`   `.s.oo/-`       -+/`/-:           ");
usuarios.push_back("      -/+-/::/`-//:+.   :odMy/.`      .sh/ //            ");
usuarios.push_back("       /+/:/:/ ``o+-o.  :/os+- .      /dy.-+/            ");
usuarios.push_back("        /o::-+-.`o+-//   `-/:` `   `` /+:`-//:           ");
usuarios.push_back("         :o--:+:.-/-:+             `:`   `-:-+           ");
usuarios.push_back("          ::::/so/:++o`        ``` .o`   .:-:-           ");
usuarios.push_back("          `++/:+sooy` :/.       `..`   `.:- -            ");
usuarios.push_back("           +o://sss/ `o`:-..    ``   `--.                ");
usuarios.push_back("           +y//oyss `-/`-``.::-.``..-.                   ");
usuarios.push_back("           --..:-:. . ``:/:--:///:`                      ");
usuarios.push_back("                    .-::-..`.`...-::-.`                  ");
usuarios.push_back("                    .-::-..`.`...-::-.`                  ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("                    .-::-..`.`...-::-.`                  ");
usuarios.push_back("                 `-:..```````````````.-:-`               ");
usuarios.push_back("               .:..`````````````````````./.              ");
usuarios.push_back("             .:.``````````.`````...```````/.             ");
usuarios.push_back("           `:-````````.-:-.````....-:.```.`/:-           ");
usuarios.push_back("          ./--``````.:-.```.-:+////-...``-//.-/          ");
usuarios.push_back("         -/-:``````-:```-/o/o/:+:/:s++.`..h/:.-/         ");
usuarios.push_back("        `+-+``````--`.++o+/+/+//:/`o:/o./+:-..`:-        ");
usuarios.push_back("        -/+.`````-.`+s+o+//+::/`/-`//.o/o//.````o        ");
usuarios.push_back("        ::+.```````o-..---:`-.`..``..::o+//o-...o        ");
usuarios.push_back("        ::o-``:```//...`                `-:os-/:o        ");
usuarios.push_back("        ://-``/```s...`                   `/++/s-        ");
usuarios.push_back("        :+:.`.:```y...                    `/y-/o         ");
usuarios.push_back("        :+:-`/```.s...                     -s:+/         ");
usuarios.push_back("        //-:./```-s...                     /s/:+         ");
usuarios.push_back("        ::-/-/-``-yoo/-.          `.:/-.` `s/::+         ");
usuarios.push_back("        ::-+-//-`-y+o///o-`    `.//////:/./o:`/.         ");
usuarios.push_back("        ::-+-://`.+-soooo:.    `:o+oso/-+.o++-:          ");
usuarios.push_back("        ::-+-.-+`.y:+:::-.     `./::::..`+o+/o           ");
usuarios.push_back("        /-++-.-+..y..       .`          -s/o-o           ");
usuarios.push_back("        /-o+:--o/-s..`     :y`         `ys+:.+           ");
usuarios.push_back("        ::o:+/-o-:s-.`    `ss`         //:-/.+           ");
usuarios.push_back("        .+o:o++s.os-..     .---.      -s:--/-+           ");
usuarios.push_back("         +:oooos.mos+:``   `-:`    `:+o//:/+/+           ");
usuarios.push_back("         `+y+y+s:dhmmmd+:`      `:/mmdyyo-++s-           ");
usuarios.push_back("          -h:h/s+yNmmmN:/o+:::://-.Nmmmhhhyy+            ");
usuarios.push_back("           /`.+ysommNmd/--::::-..``hmmmdhhhd`            ");
usuarios.push_back("               :mdmhmdhyys/.....-oyyyyssssy-             ");
usuarios.push_back("              -:ssyssyss+o/-```-/s++++++++/              ");
usuarios.push_back("                                                         ");



cadenaUsuario.push_back(usuarios);

usuarios.clear();




usuarios.push_back("          ``....`                        ```             ");
usuarios.push_back("        `.........                     `......`          ");
usuarios.push_back("        -.........````........````     -........         ");
usuarios.push_back("       `-...........................```..........        ");
usuarios.push_back("        ..----.............................-----`        ");
usuarios.push_back("         `.--............................----:-`         ");
usuarios.push_back("           ...............................--:`           ");
usuarios.push_back("          `-....:++:...............::-......-`           ");
usuarios.push_back("          ...../:---...............://+/......           ");
usuarios.push_back("          -...--------------------------.....-           ");
usuarios.push_back("         `-..---::::::::---------:::-----....-           ");
usuarios.push_back("         `-.--:::///:::::::::::::::::::----...           ");
usuarios.push_back("        `...---:/hy/:::::::::::://so:::----.-`           ");
usuarios.push_back("       .........-o+-----:::---:::+ho-.........           ");
usuarios.push_back("      `-..............-hyoshs-.................          ");
usuarios.push_back("      -.............../NNNmNNs................-`         ");
usuarios.push_back("      -...----------..-odmmds:-.------------..-.         ");
usuarios.push_back("      `-.--::::::------:/++/:-----::::::::::--:.         ");
usuarios.push_back("       :---:::/++/:::::-::::-----:/oo+://///::os+:`      ");
usuarios.push_back("        :--::///++/::::::::::::::/++//////++/shs+oo.     ");
usuarios.push_back("      `-++::://::/+/////////////++/::////+ooooosyy/`     ");
usuarios.push_back("     -oooys://///::/++++///+++++//:::/++ooosys+:.        ");
usuarios.push_back("     `+sysssoooo++/////++++++/////+oo++oss+:`            ");
usuarios.push_back("       `.:+oysoooooo++++/////++oooo+oso+-`               ");
usuarios.push_back("            `-+ssooossssssosssooooos+-`                  ");
usuarios.push_back("               .:osooosyyyyysoosso:.                     ");
usuarios.push_back("                 `:ossssyyyssys+-`                       ");
usuarios.push_back("                    .:osssso+:.                          ");
usuarios.push_back("                        `````.....`                      ");
usuarios.push_back("                                                         ");




cadenaUsuario.push_back(usuarios);

usuarios.clear();



usuarios.push_back("                  `.-/+ossyyyhhdddy:       ```.//+       ");
usuarios.push_back("                `+hmddhhhhhhhhhhhddd+```-:oyyhdmmh       ");
usuarios.push_back("               -dNmmmdhhhhhhhhhhhddddhddmmmmmmmmm:       ");
usuarios.push_back("               dmNmmmddhhhhhhhhdddmmmmmmmmNNNNNN/        ");
usuarios.push_back("               mNNNmmdddhddmmmmmmmmmmNNNNNNNNNm:         ");
usuarios.push_back("               hNNNNmmmmmNNNNNNNNNNNNNNNNNNNNs.          ");
usuarios.push_back("               ymNmNNNNNNNNNNNNNNNNMMMMMNNNy-            ");
usuarios.push_back("          .-yddNNNNNNNNNNNmddhs+oNNdmmNNdo.              ");
usuarios.push_back("       .:sdmNNNNNNNNNNNmhdhyo+/:.+mddmmm+                ");
usuarios.push_back("     .+hmNNNNNNNNNNmmdy++o//::-.`.sNmmmmh                ");
usuarios.push_back("     -oydmNNNNNNNNmmmdyo+/+/-.--...ymmNNm`               ");
usuarios.push_back("        `-/oyhddddds/:+o+::.oy/ .``.hms/+.               ");
usuarios.push_back("              ```.o/-shyo.-:yds`.```:m-..-               ");
usuarios.push_back("                  .//shy+.`-::--.```.h+--`               ");
usuarios.push_back("                  .//////.`.:::-...../:..`               ");
usuarios.push_back("                  .+++/+:.``:+++++/:---..`               ");
usuarios.push_back("                  `ossoo+++/-:///+/:---:`                ");
usuarios.push_back("                   .sssyyo/-.``-+.``..-`                 ");
usuarios.push_back("                    /ssso+//:/sm:```..-`                 ");
usuarios.push_back("                    `osyyhhhhhs:```..-:`                 ");
usuarios.push_back("                     /o+osoo+/-.``.-::-                  ");
usuarios.push_back("                     .oo+++//:-...-/+/                   ");
usuarios.push_back("                      .+o++///:::/ooo-                   ");
usuarios.push_back("                       `/osssoossso//-` .:/:-.           ");
usuarios.push_back("                         `-syyhyo/:::+ooshhhy-           ");
usuarios.push_back("                         `-yyhyo+////oys:/syy/`          ");
usuarios.push_back("                       `.syhmdddysy:-/::`  .::.          ");
usuarios.push_back("                     .shhdsssys+/++//ydmy+.`             ");
usuarios.push_back("                    `-sss+-----.--`:ossso-..             ");
usuarios.push_back("                                                         ");

cadenaUsuario.push_back(usuarios);

usuarios.clear();






usuarios.push_back("                         ````````                        ");
usuarios.push_back("                    `````        ..```                   ");
usuarios.push_back("                  ``              --` ```                ");
usuarios.push_back("                ``      `         ``    `.               ");
usuarios.push_back("              ``    ``..``                .              ");
usuarios.push_back("             ``   ```.`.`     .`-          `             ");
usuarios.push_back("            .`   ``.``.       -`:..  ``     .            ");
usuarios.push_back("           `.     .` `        -`/:::. ``   ```           ");
usuarios.push_back("           .     -`     `     :`.  `-:`    ``.           ");
usuarios.push_back("          `     `: ``   . `   :-`    .:``. `.-           ");
usuarios.push_back("         ``.` . :` -   `- .` `/-``.```-:`- ..``          ");
usuarios.push_back("         ``:. -`/  - ``...-` ./``   `../:-..- .          ");
usuarios.push_back("         `.:``../ `. .`.`-`` /-  `.:-.``::-.- .          ");
usuarios.push_back("         ..:`.-`/``. -`..:.`-:  `/ymms+`://.: -          ");
usuarios.push_back("          -::.-`/``. .`:-:-.:`    ohy/-+/+o:- -          ");
usuarios.push_back("          `-+:/---.- .-:.+:-      /+:` `/+/-: -          ");
usuarios.push_back("            -/:+++::--:/--`       `.`` `-+--` -          ");
usuarios.push_back("            ./:/:.-:+/--.   ``    ```````:/-  -          ");
usuarios.push_back("            .::://.`.``     ``         `/+/.  .          ");
usuarios.push_back("            .-::::+.       `  ``      `/+//-  .          ");
usuarios.push_back("            `.--::+/-`     ....`    `.//:-:.  `          ");
usuarios.push_back("           ` ...::/://:-.`  ``   `.-://::---`            ");
usuarios.push_back("           ` .``::/:::/s-::....-:-o+::/:--.-.``          ");
usuarios.push_back("           . -`.:://::+o...--:--../s/::::-`:.`.          ");
usuarios.push_back("           . . -:-:+::o..-......---//.----`:`..          ");
usuarios.push_back("        `  ` ` :::/+/+:....o+/o:....+::-.:`.`-.          ");
usuarios.push_back("        .......::::-:/....ohyhhy....-+/:-:```-.          ");
usuarios.push_back("        :--..........-/../hyyyyh/..::....----/--..`      ");
usuarios.push_back("        :-.............:/o/hyhy/o/:...............`      ");
usuarios.push_back("                                                         ");


cadenaUsuario.push_back(usuarios);

usuarios.clear();





usuarios.push_back("                     `.--///////:--.`                    ");
usuarios.push_back("                .:+ssssssssssssssssssss+:.               ");
usuarios.push_back("             -/ssssssssooooossssssssssssssys/.           ");
usuarios.push_back("           .osssssyo/.```````-/ssssssssssssshso`         ");
usuarios.push_back("           +ssssso-`           `:sssssssssssyysy`        ");
usuarios.push_back("          `ssssss`   -+ooo+-`    -ysssssssssshsy/        ");
usuarios.push_back("          -ysssy.   :sssssss+     osssssssssshsso        ");
usuarios.push_back("          +sssso...-ysssssyyy:---.:yssssssssshsss        ");
usuarios.push_back("          syyyyssssssssosssssssssssyyyyyyyyyyhsyy        ");
usuarios.push_back("          sssss++/:-.....--:/+oosssssssssssssyhhy        ");
usuarios.push_back("         `o/:.`                ``-://+sssssyyhhhy        ");
usuarios.push_back("       `--`````.-/////+so+/-.```      .:+hmmmmdds        ");
usuarios.push_back("     `:--/oyhddNNdhs++hMMMMMNy++o/.`.-/sdmmmmmmmmds+.    ");
usuarios.push_back("     `/dNmNNMy++oshhmhmdNMMNysdmdyyyso++dmmmmmmmmm:`     ");
usuarios.push_back("      :ommmmmd//o---++yoNNdsyo+:./o.s/:-ymmmmmmmmmmy:    ");
usuarios.push_back("     .hmmmmmdd/-+ +hh`--ys:---- -dm`----smmmmNmmmmmmmy.  ");
usuarios.push_back("     /ydmmNNsos-. /mh`--------- .md``--:hdhsdymmmmmmmmy` ");
usuarios.push_back("       `:yMMd+s--`-hs.---------.`yh..---+sy+osNNNmmy+-`  ");
usuarios.push_back("        `.-+hys---:/:--+/--------::----:+oo+omMMd+-      ");
usuarios.push_back("             `/---::---o::-------::----soosdNNdh+.`      ");
usuarios.push_back("              `::------::::::::/-----:sNNNNs/-`          ");
usuarios.push_back("                .-::---::::::::-----/yNMdhdh-            ");
usuarios.push_back("                   .-::----------:oysoshh.`--            ");
usuarios.push_back("                   -+sdys+:--:+ooymmmmms``               ");
usuarios.push_back("                   yhddmmmhsssoshhhhhmms                 ");
usuarios.push_back("                   shyyNmds++++yhyyydmms-`               ");
usuarios.push_back("             `..-::sdhymo/+++++hyyhdmdys+/:....`         ");
usuarios.push_back("          `:++oyhhhyhdhd---:://hhhhyyyyyyhhhyo+/:...`    ");
usuarios.push_back("         `:odyyyyyyyyhso+----:++ohyyyyyyyyyyyyhhhy/.--   ");
usuarios.push_back("         ` ...........``.````..  ..................` `   ");




cadenaUsuario.push_back(usuarios);

usuarios.clear();



usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                            ``                           ");
usuarios.push_back("         `..           `.--:::---..`                     ");
usuarios.push_back("        `-:y-       `-//::::---------.                   ");
usuarios.push_back("        --:y:-     -+oossso+/:---------.                 ");
usuarios.push_back("        .:+oo/-`  /sssyo++++oo:.....-:::-                ");
usuarios.push_back("            `-+/:/oys++////+o+/:-..:+oosyo.     `-:-`    ");
usuarios.push_back("               ossoo++oosh+/+o+/--:+++++//+`  `-/::-.    ");
usuarios.push_back("              `ss/::--://+/://::--:/+yy///:--:/+oo+:.    ");
usuarios.push_back("              +y+/::------:://:-...-:++/::--:-`````      ");
usuarios.push_back("             -hs+///oo+/:ohyhy+:...-----.---.            ");
usuarios.push_back("             ohy+/:+///:-:/oydhyssosyo/-::---.           ");
usuarios.push_back("            `hyo:-::/++//:-----:::::::--:+o/--           ");
usuarios.push_back("           `:hy+:-/:/+///////:---..-------:+::           ");
usuarios.push_back(" `-.    .-/oyhyo:::+++//::--:::---:::---------           ");
usuarios.push_back(" +hyo//oyhhddhhy+/:++++//:::-----------------/.`         ");
usuarios.push_back(" hdhhddhdmdmdhddho//++++//:::---------------:syo/.``.:+/ ");
usuarios.push_back(" hdddmdmNNNmdhdddhs++++//::---------------::/+dyyhsydmdh`");
usuarios.push_back(" hmNNNNNMNNmmhhddddhs++/:---.......------://-odoohyhddmy ");
usuarios.push_back(" mNNmNNmNNNdddhhddmmdhhyo/:---.....-----:+/--sdsyhyyydm.`");
usuarios.push_back(" mNNNNmNNNNdddhhhddmmdmddyo+//:::::--:/oo/-:+hhhyyhdsdh``");
usuarios.push_back(" mNNNNNNMMNmhddhhhhdddmmdddhhhyyssoooso/--:+ydyhhyoysh-``");
usuarios.push_back(" mNNmNNNMMNNdhdhhyhhhhdddddddddddhyo//:-:+/oddddsyyssy```");
usuarios.push_back(" mNNNMNMMMMMNhhdhhyyhhhhhddddddyo/:::-:/+:shhdhhhhydys```");
usuarios.push_back(" mNNNNNMMMMMNmyhddhyyyhhhhhys+/::---/+:.:shddydyyysdy+```");
usuarios.push_back(" yhyhhhhhhhhhyoooosooooo+/:--...`.-::.`-+ssssossoosss:..`");
usuarios.push_back(" `````---````                                       `    ");




cadenaUsuario.push_back(usuarios);

usuarios.clear();



usuarios.push_back("    `hdddho-`                                            ");
usuarios.push_back("    :NhosdNNho.                                          ");
usuarios.push_back("    -Nso++smmNmy/`                                       ");
usuarios.push_back("    `dy+o++ohmmNNds-`                                    ");
usuarios.push_back("     /o+o+:/osydmmmmy:`                                  ");
usuarios.push_back("     `/:/o+/+//ohddddhs:`                      `.`       ");
usuarios.push_back("      oo/so:---:+yhhhyso+-.-::////:.`      `/sdmNNs      ");
usuarios.push_back("      .s:---..--:+syo///+oyhhhyysso++o+::/shmmNNNNh      ");
usuarios.push_back("       -s:////::+oo++++sdmmmmmmNNNNmmmdhhmdyydmmdm:      ");
usuarios.push_back("        ++oo//+o+///+oshddddddddmmmmmmmddddmmmmddd       ");
usuarios.push_back("        `/+-.:/:::/+oosyhhhhhhhddmddddddddhdddmmd-       ");
usuarios.push_back("         `.--::/++ooooohddmdddmmmmmddddddhhdddddy        ");
usuarios.push_back("          `:::+osyyyssoy/-:dMMNNNNNdddddddmddddds        ");
usuarios.push_back("         `-:/+oossyyyyys+-.hNNh/sNmhdddddmmmddddh`       ");
usuarios.push_back("         .:/+oosssssssyyssosso+/+ysyhhdhhNNmmmmmd:       ");
usuarios.push_back("         .:/+++ooosyhyhs+osysssoo+++osssymMMmmNNho       ");
usuarios.push_back("          .:///+++ooyssyo:--:://++/+++/+sdmmy/oNys:      ");
usuarios.push_back("           `.-::://+ooo//o/....--::/+++hmNNNNmhhsss`     ");
usuarios.push_back("              `.:/:/++o+/:://:--..-:+ydNNmmNNdyyyyh/     ");
usuarios.push_back("                 .::/++++/:--:/++ooosyhddmdyoyhhhhd/     ");
usuarios.push_back("                  ://y+/////:::----:+oosyhdhsyyhhhh.     ");
usuarios.push_back("                  :sshs+///+oooo++++oossssyyyhdhyo.      ");
usuarios.push_back("                  -+shhys+/+osssyyyyyyyhhhhyss+:`        ");
usuarios.push_back("                  ..-:+yhysssyssyyyyhddNNs``             ");
usuarios.push_back("                  ``.::/+oyhhhyhhhhddmmmdo`              ");
usuarios.push_back("                 `..-/+o+++mhhdhddmmNNmmmyss:            ");
usuarios.push_back("               `-///:+oo+++NmmNmdmmmNMNNNmyyy+           ");
usuarios.push_back("              `.:///+oo+++oNmmmmddmNNdddmmhsss.          ");
usuarios.push_back("                ````...```.------------.---...`          ");
usuarios.push_back("                                                         ");



cadenaUsuario.push_back(usuarios);

usuarios.clear();




usuarios.push_back("                                                         ");
usuarios.push_back("                        `-:+oossso+/-`                   ");
usuarios.push_back("                ::   -ohdhysooooosshdNh+`                ");
usuarios.push_back("                 .:`oy+::::::::::::::/odN+               ");
usuarios.push_back("                 `sy/:::::::::::::::::::yM/              ");
usuarios.push_back("               .yho///::::::+y:::::+o:::ym-              ");
usuarios.push_back("              `dy/::/hso+oosyN::::sd/:+hN.               ");
usuarios.push_back("              od:::::yd+dNmo/Nyo+hNyoys/y.               ");
usuarios.push_back("              d+:::::hy-ds/-:s+o+oo+Nh::/y               ");
usuarios.push_back("              d:+o:::ds//hy--..oh+o.No::/N+              ");
usuarios.push_back("              h:do:::m+.-o/:+..-/:..No:/ddh.             ");
usuarios.push_back("              y/my/::m-..:+s........mo:ys+hs             ");
usuarios.push_back("              my+/y+/d.../d.........dsym::yd             ");
usuarios.push_back("              /m/:mddy..o.ys:--o/./.hdsd::dy             ");
usuarios.push_back("               yy/+yd+..o/./os+--+:.yds++sy.             ");
usuarios.push_back("               `yds+N/...://--:/+:..sh:ds.               ");
usuarios.push_back("                 ./yM+.....:+.......oNdo                 ");
usuarios.push_back("                    od:...--...../..os`                  ");
usuarios.push_back("                     .os:.--....-/./d`                   ");
usuarios.push_back("                       `odydd//+sooo`                    ");
usuarios.push_back("                        .N+ohyyydy`                      ");
usuarios.push_back("                      .-sd......yy````                   ");
usuarios.push_back("                  `:+ooomy......yNsooss+                 ");
usuarios.push_back("                 -do//osm+......ydyho:/ys.```````        ");
usuarios.push_back("           ````..:m/:smsh-......s+/+N/::osooooosss.      ");
usuarios.push_back("        `osssssyysds:do.........-...m/::::::::::/sm-     ");
usuarios.push_back("       `hs::::::::/s:sh............/h:::::::::::::sd`    ");
usuarios.push_back("       :o-------------+:```````````o---------------s:    ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");



cadenaUsuario.push_back(usuarios);

usuarios.clear();




usuarios.push_back("                              ys`                        ");
usuarios.push_back("                          :. `MMN/                       ");
usuarios.push_back("                    ``  `sN/`hMMMMy`                     ");
usuarios.push_back("                   -d. .dMMyhMMMMMMm.                    ");
usuarios.push_back("                  /mM.:NMMMMMMMMMMMMm`                   ");
usuarios.push_back("                 +NMM+NMMMMMMMMMMMMMMh  .s               ");
usuarios.push_back("                /NMMMNMMMMMMMMMMMMMMMM+.dM-              ");
usuarios.push_back("               :NMMMMMMMMMMMMMMMMMMMMMNmMMy              ");
usuarios.push_back("              .mMMMMMMMMMMMMMMMMMMMMMMMMMMN              ");
usuarios.push_back("          `   oNMMMMMMMMMMMMMMMMMMMMMMMMMMM-             ");
usuarios.push_back("          s:  yNMMMMMMMMMMMMMMMMMMMMMMMMMMM/             ");
usuarios.push_back("          oNo`+NMMMMMMMMMNNMMMMMMMMMMMMMMMM/ `:`         ");
usuarios.push_back("          :NMd+NMMMMMMMMMNNMMMMMMMMMMMMMMMN:smh          ");
usuarios.push_back("          `mMMMMMMMMMNsodNNMMMMMMsoymMMMMMMMMN.          ");
usuarios.push_back("           sMMMMMMMMN-  `sNMMMMN:``-:yMMMMMMM/           ");
usuarios.push_back("           .NMMMMMMM/`  ``sNMMN:```-:+MMMMMMs            ");
usuarios.push_back("            +MMMMMMN`-  ```yMN:````-/oMMMMMy             ");
usuarios.push_back("          .` /mMMMMm.:  ```.h+`````-++MMMMs`             ");
usuarios.push_back("          `oyo+mMhdM+:.```...`..``-++hmymdsy+`           ");
usuarios.push_back("            -yNMM-+o:+ys+:.:.`../ssy/ys/mMh:             ");
usuarios.push_back("              .+d/./o.--:yo+//+sd/::oy/+y:`              ");
usuarios.push_back("                `..:++`.--::-/---.-/yo:.                 ");
usuarios.push_back("                   `./:` ```-o```./so`                   ");
usuarios.push_back("                    `..:-```--``.+s/o`                   ");
usuarios.push_back("                ``-:..`.:.--..-/oo::o/:/.``              ");
usuarios.push_back("          ```-+sdmm-`.`.-.`.::/:+//:/+:sNNds+++oo        ");
usuarios.push_back("         `hdmNNmmNd````---.`-`:-+.o::::yNNmNNmmyh:       ");
usuarios.push_back("       `...`.smmmmm.```-/`:```././o:::/mNNmmmm+` `--`    ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");




cadenaUsuario.push_back(usuarios);

usuarios.clear();



usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                             `........``                 ");
usuarios.push_back("                         `.---.--::::::-:-.``            ");
usuarios.push_back("                       .:---/+oossssssssso+//-.          ");
usuarios.push_back("                     .:--/osyyyyysso/:/ossyyso+/`        ");
usuarios.push_back("                    :/..-/syyyyssso.```.ssyyyyyso:       ");
usuarios.push_back("                   :`     `+yssssss-...:sssyyyyysy+      ");
usuarios.push_back("                  /`        /yyyyyssooossyyyyyyyyyy+     ");
usuarios.push_back("                 :.          +hyyyyyyyyyyyosyys+yyyy.    ");
usuarios.push_back("                 /            syyyyyyyyyyyo-yys.yyyyo    ");
usuarios.push_back("                .-             ohyyyyyyyyy/`syyysyyy+    ");
usuarios.push_back("               -:.   ``         /yyyyyyyyy-`+yy/`oy:+    ");
usuarios.push_back("              :-o/`   +          .+yhyyyyo``oyy+-:.:/    ");
usuarios.push_back("             -.-s++   `   `        `-+oss-.-oo/-..:s`    ");
usuarios.push_back("             .--s+o       s:..         ``````....:o:     ");
usuarios.push_back("              ://+.```    `+.os:`  .. `     `...:o:      ");
usuarios.push_back("               `----:-    `.:oo+:. `- - -` `.-:/s+       ");
usuarios.push_back("                   `/     `.+/:--/.     -:o::ssss-       ");
usuarios.push_back("                    --      :  ``.`  ` `/os:oso+.        ");
usuarios.push_back("                    -:.    .- ..` -``:.../:++-.          ");
usuarios.push_back("                    / .-.` -`  .sss+++:.::/:             ");
usuarios.push_back("                 `.-:   `-:/     +s+/-.://.              ");
usuarios.push_back("              `--. -.    `--:-`   .-::::-`               ");
usuarios.push_back("       .--:/+oo:.        :`:``:---os/-                   ");
usuarios.push_back("    `---/syyy:-+-.       ./ :`  ``o---::-`               ");
usuarios.push_back("   --.+yyyyyoo/`      .-:::../... -/-.`.-:-.....`        ");
usuarios.push_back("   ` .:::::.``.      .--`       `.``-``````.`-``.-`      ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");



cadenaUsuario.push_back(usuarios);

usuarios.clear();




usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                       ``.-:::-.`                        ");
usuarios.push_back("                    `-+osssssssso+--.``                  ");
usuarios.push_back("                  .+sssssssssyysyssssso/.     .          ");
usuarios.push_back("             ```-osyyyyyysyyyyyo::/+ossss/` `..-         ");
usuarios.push_back("           -+ssssyyyyyyyyyyyyyys:.--:/osss+..----        ");
usuarios.push_back("         .oyyyyyyyyyyyyyyyyyyhsyo.--::-/s/-.-:--:`       ");
usuarios.push_back("    -/oosyyyyyyhhyyyyyysyyhyyhyyy:---:::::--::-::`       ");
usuarios.push_back("   ossyyyyyyyyyyyyyyyyyyhhyyyysyhy/--::::::::-::.        ");
usuarios.push_back("  `yyyyyyyyyyyyyyssyyyhhyyys/oyyyhy+:::-:---::::...`     ");
usuarios.push_back("  `yyyysssssssyyyyyhhhyyyy+-.-syyyhho:-----:/+/::----.   ");
usuarios.push_back("  -ysssyyyyyyyyyyyyyyyys+:--..-+yyhhhy+:::::://::------` ");
usuarios.push_back(" -sssyyyhhhdhysssssoo+/:///:---.-/shhhhys++////+o+----.-`");
usuarios.push_back("`ysyyyhhdmmNh:::::---.-::----:-.``.ohhyhhhhhhhhyyho`   ` ");
usuarios.push_back("`yyyyhhmmmmmm/--.``````.:oyosshs.`.:yo+oyhyyyhhhyyhy/`   ");
usuarios.push_back(" /yhhhmmmmmmmdy/:-:-.``.:++`.:/-```.-.-:smmdhyyyyyyyyy+.`");
usuarios.push_back("  shhdddmmmmmmmdyyhsos-`..-.``````....-+dmmmmdyyyyyyyyyy/");
usuarios.push_back("  -yhhdddmmmmmdddds.-/:``..```````....-+mmmmmmmhyyyhhyyy/");
usuarios.push_back("  `yyyhhhhhhhhddhhy.`````````````.....::dmmmmmmdhyyyhhhy/");
usuarios.push_back("   `+syyyyyhdddhhhy.``.`.-`````.......:.ymmmmmmmdyyyyhhh+");
usuarios.push_back("      ```` yhhhhhhh+`````.-:///o...../-`:dmmmmdddyyyyyhho");
usuarios.push_back("          +hhhhhhhhyo:``./++:/o:...-/:-..odddddddhyyyyyh+");
usuarios.push_back("        -ohyhhhhhhhyhhyo/-./++:...://:-...odddhhhyysyyyh+");
usuarios.push_back("     .:osyhhhhhhhhyyhhs+/:::-...-:::::-..``-oyhhyyysyyyh+");
usuarios.push_back("`.-/ossyyhhhhhhyhhyys:....-----:-------..````.:+ossyyyhh+");
usuarios.push_back(":++++ooooooosoooosoo:```...............```````````.-/ooo:");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");



cadenaUsuario.push_back(usuarios);

usuarios.clear();




usuarios.push_back("                      ./oso+//++oo+:`                    ");
usuarios.push_back("                    -ss/.`       `-oy:                   ");
usuarios.push_back("                   :d:              .ys``                ");
usuarios.push_back("                  .m-                `hhss/::-.`         ");
usuarios.push_back("                  os     ````````     `y .ss:/+s:        ");
usuarios.push_back("                  os/oooooooossssos+/:--   -   `y/       ");
usuarios.push_back("            `   :yyo:.-.:+//yyos++h+hhhNmy+`    `N`      ");
usuarios.push_back("     `::-`  .-:yd+::oyhd/```+.`.+-.//```:smN+`  `N.      ");
usuarios.push_back("    `h/:/so` `-M:-:/mo.s````````:```s``````oNd `yy       ");
usuarios.push_back("    s/----h: .-/yhs+m.`/:```-/:````//./`````+Noh+        ");
usuarios.push_back("   /+---:yh.     ```d.`.o```:hm````::/```````yh`         ");
usuarios.push_back("   oo:-:yyyhs/...`..d-/+o-.`oMm````..````````/N          ");
usuarios.push_back("   `-/++: `:dhyhhh+://///:``:h/```--::.``````/N          ");
usuarios.push_back("          `y/.:om.``````.::.````.:/+sy+``````yo          ");
usuarios.push_back("          s/````d`````````-o```.:o+/yo.````./m-          ");
usuarios.push_back("          m`````/o:..``..:o:.-/+/+hNm`````/::/os`        ");
usuarios.push_back("          d-`````.://////+y/++ohNNmMo``````:/.`h:        ");
usuarios.push_back("          :y.``/``````````hMMMmddyhy``````o:s`.m-        ");
usuarios.push_back("           -s+-s``````````.yNmsyhh/`````/`-.-.y/         ");
usuarios.push_back("             ./h.`````````-../+/-`:-````y+/+++.          ");
usuarios.push_back("               `h``````````://////`````/m.               ");
usuarios.push_back("                -y-``````````````````::m-                ");
usuarios.push_back("                 `+s/.````````````-//.ho                 ");
usuarios.push_back("                   `/ss+/-...-:/+o/.`/N`                 ");
usuarios.push_back("                  .-:/+ooshmmmh-.```.mmy/`.---.`         ");
usuarios.push_back("              `:shhhhhhddhhhhm:`````sdyyhdddddddhs:      ");
usuarios.push_back("            `+dmhysssssyshmdmd`````-NNmysyysssyyhdNh-    ");
usuarios.push_back("           -hNNNmhssssssds:.o:`````o:/dhsssyhmmNNNNNm/   ");
usuarios.push_back("           --------.....-   .      `  -....-----------   ");
usuarios.push_back("                                                         ");





cadenaUsuario.push_back(usuarios);

usuarios.clear();


usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("                                                         ");
usuarios.push_back("   .------------------.----..---..----------------..---. ");
usuarios.push_back("  `+...................................................-.");
usuarios.push_back("  `+...................................................:.");
usuarios.push_back("   /-...-:::-........................--...............-+`");
usuarios.push_back("   `/...:::::.../...:y...-/.....-s...os...+.....::....:- ");
usuarios.push_back("    +...::::-...ho::+y/::d/......ho::ss::sy............: ");
usuarios.push_back("   `/....--....:+:.`   `./+:...-//-.```../+:..........-/ ");
usuarios.push_back("   --.........+-      ```` :+.::``..`      -o-........+. ");
usuarios.push_back("   `/...-:-..+-     `//++// -s/ /+oo++-     .s.......:-  ");
usuarios.push_back("    ./..-:-..s      +:hMNh// d`-osMMm:s      o-......:.  ");
usuarios.push_back("     /.......s`     :/smmoo-.d:.s+hdy/+      o........-  ");
usuarios.push_back("     /......./+-.    .://:.o/.-/o://:-    `--o-....../.  ");
usuarios.push_back("     /.....-/:...:.       :y....h        ::..--:-...--   ");
usuarios.push_back("     -:..../..-:../:::://+::...+//::---::+.:s/..:...-.   ");
usuarios.push_back("      +....-..:ds/...................--.:+ymy..--....:   ");
usuarios.push_back("      +........oNNmhs+/-...........-:+sdNNNN-.......:-   ");
usuarios.push_back("     `:.........hNNNNNNms///+ss:::/mmNNNNNN+......../    ");
usuarios.push_back("      /...--....-dNNNNNN-   oNN`   mNNNNNNs.........-    ");
usuarios.push_back("     -y/..-:.....-hNNNNNdhysdNNysyyNNNNNmo.-:::-....s:   ");
usuarios.push_back("    -y./........---omNNmdhhhdmdyyhdNNNmh:.-:::::...-/y-  ");
usuarios.push_back("   `y.`:......-::::.-+yo::--:/--::/sdo:....-::-..../`.y  ");
usuarios.push_back("   /+ `/......-:::-....-://+++++//:-..............:.  o- ");
usuarios.push_back("   o-` :.......---......................-:-......./```+: ");
usuarios.push_back("   .+/-:.```````````````````````````````..````````-//+:  ");
usuarios.push_back("                        `````                            ");
usuarios.push_back("                                                         ");





cadenaUsuario.push_back(usuarios);

usuarios.clear();


usuarios.push_back("                                                         ");
usuarios.push_back("                  ..:+osssssso+/:.                       ");
usuarios.push_back("              ./osssssyssssssssssss+-`                   ");
usuarios.push_back("            .+sssssssyssssssssssssssss/.                 ");
usuarios.push_back("           :ossssssssyssssssssssssssssss+`               ");
usuarios.push_back("          /ooossssossysooooooso+oosoooooo+.              ");
usuarios.push_back("         +++osssyosyosyooooo++so//+s++o++++`             ");
usuarios.push_back("        :o/+ss+yy+yh++sy++osso+sso+oso+s+++:             ");
usuarios.push_back("       `s/+sy/oyooyys:+oso+osssosyssoyoos+o+.            ");
usuarios.push_back("       .s+oys/syosy+ooo++sssossssyyyssy+ssoo/            ");
usuarios.push_back("       -sssysoyysss-.osso+os/:/syyyyysysoysoo`           ");
usuarios.push_back("       :yssyysysoy+.``/ssyso+``-oyooysysoysys/           ");
usuarios.push_back("       +yssyhsy+:y+.```-ososs`.-/yo/yyysshsyso:          ");
usuarios.push_back("      -ysosyhhho-+s:--.`.o//s:/+shy+ohhsshss+ .`         ");
usuarios.push_back("     `:. `hsydy+/osmmy/``.:`:+s+dMM++dyoyyss+            ");
usuarios.push_back("          shyho:+yhMNy-``.````.hNmd--hoshssso            ");
usuarios.push_back("          oyhyh/-:ydh:...-```..:+o+:+yoshysss`           ");
usuarios.push_back("          /yyyhh+::/:-..:-```..-::/:yoohyhsss-           ");
usuarios.push_back("          /ysyhhs:::-....:`.``..---+yoyhyhhss+           ");
usuarios.push_back("          +soshyms-....--....--...-ysshyhydyso-          ");
usuarios.push_back("          sooshymmy:.``...--..```.syoyyymydhyo+`         ");
usuarios.push_back("         -s+ssydhmmmy+-.``..``.-/ydsshsdmyddhho/`        ");
usuarios.push_back("        .+oyyyhddmmmmmso+/:-:/osshyodhymmhddhyyo/`       ");
usuarios.push_back("     .-+oyhhhyhdmmmmmms:/+ooso++ohyymyhmmmdddhyo-/.      ");
usuarios.push_back("     -::oyyhhyddmNmmmmh..-:/+/:++hydmshmmmhdhhhy/ ``     ");
usuarios.push_back("       .sshhydddmmmmmmo......./o/syddsydmmhmhdyhs.       ");
usuarios.push_back("      .osyhhhmdmmdhms:......../+./yhyoyssyydhdshs/       ");
usuarios.push_back("     :oyyyhsysoo+/ho.`````....+:.-sh+so/.----:::/:..`    ");
usuarios.push_back("    :++:-..`````.+s.`````````./.`.oyo/s+-.`````........  ");
usuarios.push_back("                                                         ");

cadenaUsuario.push_back(usuarios);

    return cadenaUsuario.at(j);
}


void mostrarLogoPerfil() {
	vector<string>perfil;

perfil.push_back(":::::::::  ::::::::  :::::::::   ::::::::::  ::::::::::  :::     ");        
perfil.push_back(":+:    :+: :+:       :+:    :+:  :+:            :+:      :+:     ");        
perfil.push_back("+:+    +:+ +:+       +:+    +:+  +:+            +:+      +:+     ");        
perfil.push_back("+#++:++#+  +#++:+#   +#++:++#:   :#::+::#       +#+      +#+     ");        
perfil.push_back("+#+        +#+       +#+    +#+  +#+            +#+      +#+     ");        
perfil.push_back("#+#        #+#       #+#    #+#  #+#            #+#      #+#     ");        
perfil.push_back("###        ########  ###    ###  ###         #########   ########"); 



	for (int i = 0; i < perfil.size(); i++)
	{
		Console::SetCursorPosition(3, i+3);
		for (int j = 0; j < perfil.at(i).size(); j++)
		{

			if (perfil.at(i).at(j) == ' ')
			{
				Console::BackgroundColor = ConsoleColor::Gray;
			}
			else {
				Console::BackgroundColor = ConsoleColor::Gray;
				Console::ForegroundColor = ConsoleColor::DarkBlue;
			}

			cout << perfil.at(i).at(j);
		}
		 
	}
		Console::BackgroundColor = ConsoleColor::Gray;
		Console::ForegroundColor = ConsoleColor::Black;

	perfil.clear();
}