#include"engine32/PPSSPP.h"
#include"engine32/LovaGame.h"
#include"engine32/PCSX2.h"
#include"engine32/VanillawareGC.h"
#include"engine32/V8.h"
#include"engine32/cef.h"
#include"engine32/KISS.h"
#include"engine32/mono.h"
#include"engine32/Tarte.h"
#include"engine32/sakanagl.h"
#include"engine32/LCScript.h"
#include"engine32/ONScripterru.h"
#include"engine32/GSX.h"
#include"engine32/pchooks.h"
#include"engine32/Sprite.h"
#include"engine32/PONScripter.h"
#include"engine32/Ruf.h"
#include"engine32/SYSD.h"
#include"engine32/Renpy.h"
#include"engine32/RPGMakerRGSS3.h"
#include"engine32/RUNE.h"
#include"engine32/Lightvn.h"
#include"engine32/KiriKiri.h"
#include"engine32/Bishop.h"
#include"engine32/HXP.h"
#include"engine32/morning.h"
#include"engine32/IGScript.h"
#include"engine32/TSSystem.h"
#include"engine32/ScrPlayer.h"
#include"engine32/Aksys.h"
#include"engine32/utawarerumono.h"
#include"engine32/SideB.h"
#include"engine32/BGI.h"
#include"engine32/Bootup.h"
#include"engine32/Troy.h"
#include"engine32/Tomato.h"
#include"engine32/shyakunage.h"
#include"engine32/Eushully.h"
#include"engine32/Majiro.h"
#include"engine32/Elf.h"
#include"engine32/Silkys.h"
#include"engine32/Speed.h"
#include"engine32/FVP.h"
#include"engine32/Interlude.h"
#include"engine32/CMVS.h"
#include"engine32/Wolf.h"
#include"engine32/Circus1.h"
#include"engine32/Circus2.h"
#include"engine32/Cotopha.h"
#include"engine32/Xbangbang.h"
#include"engine32/Unknown.h"
#include"engine32/Artemis.h"
#include"engine32/CatSystem.h"
#include"engine32/Atelier.h"
#include"engine32/BKEngine.h"
#include"engine32/VitaminSoft.h"
#include"engine32/Abalone.h"
#include"engine32/Tenco.h"
#include"engine32/QLIE.h"
#include"engine32/sakusesu.h"
#include"engine32/Anisetta.h"
#include"engine32/Regista.h"
#include"engine32/Pal.h"
#include"engine32/Footy2.h"
#include"engine32/NeXAS.h"
#include"engine32/Interheart.h"
#include"engine32/LunaSoft.h"
#include"engine32/Unicorn.h"
#include"engine32/Rejet.h"
#include"engine32/AdobeAir.h"
#include"engine32/Retouch.h"
#include"engine32/Malie.h"
#include"engine32/Live.h"
#include"engine32/Jellyfish.h"
#include"engine32/Nexton.h"
#include"engine32/Lucifen.h"
#include"engine32/Waffle.h"
#include"engine32/Sakuradog.h"
#include"engine32/TinkerBell.h"
#include"engine32/Jisatu101.h"
#include"engine32/TerraLunar.h"
#include"engine32/Palette.h"
#include"engine32/SystemAoi.h"
#include"engine32/Nijyuei.h"
#include"engine32/MBLMED.h"
#include"engine32/NNNConfig.h"
#include"engine32/Yuris.h"
#include"engine32/Nitroplus.h"
#include"engine32/Bruns.h"
#include"engine32/XUSE.h"
#include"engine32/EME.h"
#include"engine32/RRE.h"
#include"engine32/Candy.h"
#include"engine32/AIL2.h"
#include"engine32/ApricoT.h"
#include"engine32/Triangle.h"
#include"engine32/GASTRO.h"
#include"engine32/AB2Try.h"
#include"engine32/GameMaker.h"
#include"engine32/DxLib.h"
#include"engine32/CodeX.h"
#include"engine32/Purple.h"
#include"engine32/Minori.h"
#include"engine32/SRPGStudio.h"
#include"engine32/RpgmXP.h"
#include"engine32/littlecheese.h"
#include"engine32/Eagls.h"
#include"engine32/Debonosu.h"
#include"engine32/C4.h"
#include"engine32/WillPlus.h"
#include"engine32/Tanuki.h"
#include"engine32/hibiki.h"
#include"engine32/GXP.h"
#include"engine32/Giga.h"
#include"engine32/AOS.h"
#include"engine32/Mink.h"
#include"engine32/AGS.h"
#include"engine32/YukaSystem2.h"
#include"engine32/Exp.h"
#include"engine32/Syuntada.h"
#include"engine32/Pensil.h"
#include"engine32/Anim.h"
#include"engine32/Nitroplus2.h"
#include"engine32/Reallive.h"
#include"engine32/jukujojidai.h"
#include"engine32/Siglus.h"
#include"engine32/Taskforce2.h"
#include"engine32/RUGP.h"
#include"engine32/IronGameSystem.h"
#include"engine32/Anex86.h"
#include"engine32/ShinyDaysGame.h"
#include"engine32/MarineHeart.h"
#include"engine32/ShinaRio.h"
#include"engine32/CaramelBox.h"
#include"engine32/Escude.h"
#include"engine32/Ryokucha.h"   
#include"engine32/Alice.h"
#include"engine32/System4x.h"
#include"engine32/Abel.h"
#include"engine32/5pb.h"
#include"engine32/HorkEye.h"
#include"engine32/Ohgetsu.h"
#include"engine32/OVERDRIVE.h"
#include"engine32/Leaf.h"
#include"engine32/Nekopack.h"
#include"engine32/AdobeFlash10.h"
#include"engine32/FocasLens.h"
#include"engine32/Tamamo.h"
#include"engine32/Suika2.h"
#include"engine32/Overflow.h"
#include"engine32/Ages3ResT.h"
#include"engine32/AXL.h"
#include"engine32/lua51.h"
#include"engine32/UnisonShift.h"
#include"NoEngine.h"
#include"engine32/EntisGLS.h"
#include"engine32/Ciel.h"
#include"engine32/ACTGS.h"
std::vector<ENGINE*> check_engines(){ 
    return  { 
        new LovaGame,
        new PPSSPP,
        new PCSX2,
        new VanillawareGC,
        new V8,
        new cef,
        new mono,
        new sakanagl,
        new pchooks,
        new PONScripter,
        new Renpy,
        new Lightvn,
        new KiriKiri,
        new morning,
        new utawarerumono,
        new SideB,
        new BGI,
        new Bootup,
        new shyakunage,
        new Eushully,
        new Majiro,
        new Elf,
        new Elf2,
        new Silkys,
        new SilkysOld,
        new CMVS,
        new Wolf,
        new Circus1,
        new Circus2,
        new Cotopha,
        new Artemis,
        new CatSystem,
        new Atelier,
        new Atelier2,
        new Tenco,
        new QLIE,
        new sakusesu,
        new Regista,
        new Pal,
        new Footy2,
        new NeXAS,
        new LunaSoft,
        new Unicorn,
        new Unicorn_Anesen,
        new Rejet,
        new AdobeAir,
        new Retouch,
        new Malie,
        new Live,
        new Nexton,
        new Lucifen, 
        new Waffle,
        new TinkerBell,
        new TinkerBellold,
        new SystemAoi,
        new MBLMED,
        new NNNConfig,
        new Yuris,
        new Nitroplus,
        new Bruns,
        new XUSE,
        new EME,
        new RRE,
        new Candy,
        new WillowSoft,
        new AIL2,
        new ApricoT,
        new Triangle2,
        new Triangle,
        new AB2Try,
        new UnisonShift2,
        new GameMaker,
        new DxLib,
        new CodeX,
        new _5pb_2,
        new Minori,
        new RpgmXP,
        new littlecheese,
        new Eagls,
        new Debonosu,
        new C4,
        new WillPlus,
        new Tanuki,
        new GXP,
        new AOS,
        new Mink,
        new Mink2,
        new YukaSystem2,
        new Exp,
        new Syuntada,
        new Pensil,
        new Anim,
        new Nitroplus2,
        new Reallive,
        new Siglus,
        new Taskforce2,
        new RUGP,
        new IronGameSystem,
        new Anex86,
        new ShinyDaysGame,
        new MarineHeart,
        new CaramelBox,
        new CaramelBoxMilkAji,
        new Escude,
        new Ryokucha,
        new Ryokucha2,
        new Ryokuchaold,
        new Alice,
        new System4x,
        new Ages3ResT,
        new AXL,
        new lua51,
        new Ciel,
        new ACTGS,
        new Nijyuei,
        new Xbangbang,
        new Unknown,
        new TSSystem,
        new Troy,
        new Tomato,
        new TerraLunar,
        new Tarte,
        new Bishop,
        new Bishop2,
        new Sprite,
        new Speed,
        new FVP,
        new RUNE,
        new Ruf,
        new Purple,
        new Purple2,
        new OVERDRIVE,
        new Ohgetsu,
        new HXP,
        new ONScripterru,
        new TriangleM,
        new SRPGStudio,
        new Overflow,
        new BKEngine,
        new Nitroplusplus,
        new Jellyfish,
        new SYSD,
        new IGScript,
        new ScrPlayer,
        new ElfFunClubFinal,
        new Aksys,
        new Siglusold,
        new Willold,
        new GSX,
        new GASTRO
    };
     
}

std::vector<ENGINE*> ignore_engines(){
    return{
         
        new oldSystem40ini,
        new AdvPlayerHD,
        new DPM, 
        new Escude_ignore,
        new Chartreux,
    };
}
std::vector<ENGINE*> unsafe_check_atlast(){ 
    // Put the patterns that might break other games at last

    return{ 
        new UnisonShift,
        new Interheart,
        new Abalone,
        new Jisatu101,
        new AGS,
        new hibiki,
        new Tanuki_last,
        new Abel,
        new _5pb,
        new ScenarioPlayer_last,
        new HorkEye,
        new Nexton1,
        new ApricoTlast,
        new Leaf,
        new Nekopack,
        new AdobeFlash10,
        new Giga,
        new FocasLens,
        new Tamamo,
        new jukujojidai,
        new Anisetta,
        new VitaminSoft,
        new Interlude,
        new Sakuradog,
        new Palette,
        new LCScript,
        new RPGMakerRGSS3,
        new Reallive_old,
        new avg3216d,
        new ShinaRio,
        new Suika2,
        new KISS,
        new EntisGLS,
    };
     
}