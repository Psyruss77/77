#pragma once

#include <string>

std::string wycheproof_ed25519() {
  return
      R"abcd({
  "algorithm" : "EDDSA",
  "generatorVersion" : "0.4.12",
  "notes" : {
    "SignatureMalleability" : "EdDSA signatures are non-malleable, if implemented accordingly. Failing to check the range of S allows to modify signatures. See RFC 8032, Section 5.2.7 and Section 8.4."
  },
  "numberOfTests" : 111,
  "header" : [],
  "testGroups" : [
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "7d4d0e7f6153a69b6242b522abbee685fda4420f8834b108c3bdae369ef549fa",
        "sk" : "add4bb8103785baf9ac534258e8aaf65f5f1adb5ef5f3df19bb80ab989c4d64b",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b65700321007d4d0e7f6153a69b6242b522abbee685fda4420f8834b108c3bdae369ef549fa",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAfU0Of2FTpptiQrUiq77mhf2kQg+INLEIw72uNp71Sfo=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 1,
          "comment" : "",
          "msg" : "",
          "sig" : "d4fbdb52bfa726b44d1786a8c0d171c3e62ca83c9e5bbe63de0bb2483f8fd6cc1429ab72cafc41ab56af02ff8fcc43b99bfe4c7ae940f60f38ebaa9d311c4007",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 2,
          "comment" : "",
          "msg" : "78",
          "sig" : "d80737358ede548acb173ef7e0399f83392fe8125b2ce877de7975d8b726ef5b1e76632280ee38afad12125ea44b961bf92f1178c9fa819d020869975bcbe109",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 3,
          "comment" : "",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 4,
          "comment" : "",
          "msg" : "48656c6c6f",
          "sig" : "1c1ad976cbaae3b31dee07971cf92c928ce2091a85f5899f5e11ecec90fc9f8e93df18c5037ec9b29c07195ad284e63d548cd0a6fe358cc775bd6c1608d2c905",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 5,
          "comment" : "",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2bf0cf5b3a289976458a1be6277a5055545253b45b07dcc1abd96c8b989c00f301",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 6,
          "comment" : "",
          "msg" : "000000000000000000000000",
          "sig" : "d46543bfb892f84ec124dcdfc847034c19363bf3fc2fa89b1267833a14856e52e60736918783f950b6f1dd8d40dc343247cd43ce054c2d68ef974f7ed0f3c60f",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 7,
          "comment" : "",
          "msg" : "6161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161",
          "sig" : "879350045543bc14ed2c08939b68c30d22251d83e018cacbaf0c9d7a48db577e80bdf76ce99e5926762bc13b7b3483260a5ef63d07e34b58eb9c14621ac92f00",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 8,
          "comment" : "",
          "msg" : "202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f60",
          "sig" : "7bdc3f9919a05f1d5db4a3ada896094f6871c1f37afc75db82ec3147d84d6f237b7e5ecc26b59cfea0c7eaf1052dc427b0f724615be9c3d3e01356c65b9b5109",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 9,
          "comment" : "",
          "msg" : "ffffffffffffffffffffffffffffffff",
          "sig" : "5dbd7360e55aa38e855d6ad48c34bd35b7871628508906861a7c4776765ed7d1e13d910faabd689ec8618b78295c8ab8f0e19c8b4b43eb8685778499e943ae04",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 10,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 11,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "00000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 12,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "0000000000000000000000000000000000000000000000000000000000000000ecd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 13,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "0000000000000000000000000000000000000000000000000000000000000000edd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 14,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "0000000000000000000000000000000000000000000000000000000000000000edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7f",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 15,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "01000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 16,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "01000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 17,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "0100000000000000000000000000000000000000000000000000000000000000ecd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 18,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "0100000000000000000000000000000000000000000000000000000000000000edd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 19,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "0100000000000000000000000000000000000000000000000000000000000000edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7f",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 20,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edd3f55c1a631258d69cf7a2def9de14000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 21,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edd3f55c1a631258d69cf7a2def9de14000000000000000000000000000000100100000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 22,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010ecd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 23,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010edd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 24,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7f",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 25,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7f0000000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 26,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7f0100000000000000000000000000000000000000000000000000000000000000",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 27,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7fecd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 28,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7fedd3f55c1a631258d69cf7a2def9de1400000000000000000000000000000010",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 29,
          "comment" : "special values for r and s",
          "msg" : "3f",
          "sig" : "edffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7fedffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff7f",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 30,
          "comment" : "empty signature",
          "msg" : "54657374",
          "sig" : "",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 31,
          "comment" : "s missing",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab0",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 32,
          "comment" : "signature too short",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 33,
          "comment" : "signature too long",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d2020",
          "result" : "invalid",
          "flags" : []
        },)abcd"
      R"abcd(
        {
          "tcId" : 34,
          "comment" : "include pk in signature",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d7d4d0e7f6153a69b6242b522abbee685fda4420f8834b108c3bdae369ef549fa",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 35,
          "comment" : "prepending 0 byte to signature",
          "msg" : "54657374",
          "sig" : "007c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 36,
          "comment" : "prepending 0 byte to s",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab0007a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 37,
          "comment" : "appending 0 byte to signature",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d00",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 38,
          "comment" : "removing 0 byte from signature",
          "msg" : "546573743137",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b3",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 39,
          "comment" : "removing 0 byte from signature",
          "msg" : "54657374313236",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab09155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 40,
          "comment" : "removing leading 0 byte from signature",
          "msg" : "546573743530",
          "sig" : "38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 41,
          "comment" : "dropping byte from signature",
          "msg" : "54657374333437",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab09155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b30d",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 42,
          "comment" : "modified bit 0 in R",
          "msg" : "313233343030",
          "sig" : "647c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2b1d125e5538f38afbcc1c84e489521083041d24bc6240767029da063271a1ff0c",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 43,
          "comment" : "modified bit 1 in R",
          "msg" : "313233343030",
          "sig" : "677c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2bc108ca4b87a49c9ed2cf383aecad8f54a962b2899da891e12004d7993a627e01",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 44,
          "comment" : "modified bit 2 in R",
          "msg" : "313233343030",
          "sig" : "617c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2b9ce23fc6213ed5b87912e9bbf92f5e2c780eae26d15c50a112d1e97d2ea33c06",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 45,
          "comment" : "modified bit 7 in R",
          "msg" : "313233343030",
          "sig" : "e57c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2bbb3eb51cd98dddb235a5f46f2bded6af184a58d09cce928bda43f41d69118a03",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 46,
          "comment" : "modified bit 8 in R",
          "msg" : "313233343030",
          "sig" : "657d1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2bcd237dda9a116501f67a5705a854b9adc304f34720803a91b324f2c13e0f5a09",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 47,
          "comment" : "modified bit 16 in R",
          "msg" : "313233343030",
          "sig" : "657c1592402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2b6b167bbdc0d881cc04d28905552c1876f3709851abc5007376940cc8a435c300",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 48,
          "comment" : "modified bit 31 in R",
          "msg" : "313233343030",
          "sig" : "657c1412402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2b7fd2ac7da14afffcceeb13f2a0d6b887941cb1a5eb57a52f3cb131a16cce7b0e",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 49,
          "comment" : "modified bit 32 in R",
          "msg" : "313233343030",
          "sig" : "657c1492412ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2b7373ba13ebbef99cd2a8ead55ce735c987d85a35320925a8e871702dc7c5c40d",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 50,
          "comment" : "modified bit 63 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab54e03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2bd35bd331c03f0855504ca1cab87b83c36a028425a3cf007ede4f4254c261cb00",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 51,
          "comment" : "modified bit 64 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce02e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2bcb35101f73cf467deac8c1a03b6c3dc35af544132734b7e57ab20c89b2e4750d",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 52,
          "comment" : "modified bit 97 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f2384d051b9cf3570f1207fc78c1bcc98c281c2bb58d2e8878290bff8d3355fdd4ea381924ee578752354eb6dee678ab4011c301",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 53,
          "comment" : "modified bit 127 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d851b9cf3570f1207fc78c1bcc98c281c2bb978c866187ffb1cc7b29a0b4045aefc08768df65717194ff0c6e63f4dea0d02",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 54,
          "comment" : "modified bit 240 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281d2b0576ecf8eaf675f00f3dfbe19f75b83b7607a6c96414f6821af920a2498d0305",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 55,
          "comment" : "modified bit 247 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c289c2be5241a345c7b5428054c74b7c382fa10d4a5f1e8f8b79a71d3fdea2254f1ff0e",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 56,
          "comment" : "modified bit 248 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c2a63950c85cd6dc96364e768de50ff7732b538f8a0b1615d799190ab600849230e",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 57,
          "comment" : "modified bit 253 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c0b543bd3da0a56a8c9c152f59c9fec12f31fa66434d48b817b30d90cb4efa8b501",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 58,
          "comment" : "modified bit 254 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281c6b8da07efd07a6dafb015ed6a32fe136319a972ffbc341f3a0beae97ccf8136505",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 59,
          "comment" : "modified bit 255 in R",
          "msg" : "313233343030",
          "sig" : "657c1492402ab5ce03e2c3a7f0384d051b9cf3570f1207fc78c1bcc98c281cab227aedf259f910f0f3a759a335062665217925d019173b88917eae294f75d40f",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 60,
          "comment" : "R==0",
          "msg" : "313233343030",
          "sig" : "0000000000000000000000000000000000000000000000000000000000000000e0b8e7770d51c7a36375d006c5bffd6af43ff54aaf47e4330dc118c71d61ec02",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 61,
          "comment" : "invalid R",
          "msg" : "313233343030",
          "sig" : "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff463a1908382e7eb7693acef9884f7cf931a215e0791876be22c631a59881fd0e",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 62,
          "comment" : "all bits flipped in R",
          "msg" : "313233343030",
          "sig" : "9a83eb6dbfd54a31fc1d3c580fc7b2fae4630ca8f0edf803873e433673d7e3d40e94254586cb6188c5386c3febed477cb9a6cb29e3979adc4cb27cf5278fb70a",
          "result" : "invalid",
          "flags" : []
        },
        {
          "tcId" : 63,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab067654bce3832c2d76f8f6f5dafc08d9339d4eef676573336a5c51eb6f946b31d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        },
        {
          "tcId" : 64,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab05439412b5395d42f462c67008eba6ca839d4eef676573336a5c51eb6f946b32d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        },
        {
          "tcId" : 65,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab02ee12ce5875bf9dff26556464bae2ad239d4eef676573336a5c51eb6f946b34d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        },
        {
          "tcId" : 66,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab0e2300459f1e742404cd934d2c595a6253ad4eef676573336a5c51eb6f946b38d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        },
        {
          "tcId" : 67,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b32d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        },)abcd"
      R"abcd(
        {
          "tcId" : 68,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b34d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        },
        {
          "tcId" : 69,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab07a9155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b38d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        },
        {
          "tcId" : 70,
          "comment" : "checking malleability ",
          "msg" : "54657374",
          "sig" : "7c38e026f29e14aabd059a0f2db8b0cd783040609a8be684db12f82a27774ab0679155711ecfaf7f99f277bad0c6ae7e39d4eef676573336a5c51eb6f946b38d",
          "result" : "invalid",
          "flags" : [
            "SignatureMalleability"
          ]
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "a12c2beb77265f2aac953b5009349d94155a03ada416aad451319480e983ca4c",
        "sk" : "0a23a20072891237aa0864b5765139514908787878cd77135a0059881d313f00",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100a12c2beb77265f2aac953b5009349d94155a03ada416aad451319480e983ca4c",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAoSwr63cmXyqslTtQCTSdlBVaA62kFqrUUTGUgOmDykw=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 71,
          "comment" : "",
          "msg" : "",
          "sig" : "5056325d2ab440bf30bbf0f7173199aa8b4e6fbc091cf3eb6bc6cf87cd73d992ffc216c85e4ab5b8a0bbc7e9a6e9f8d33b7f6e5ac0ffdc22d9fcaf784af84302",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 72,
          "comment" : "",
          "msg" : "78",
          "sig" : "481fafbf4364d7b682475282f517a3ac0538c9a6b6a562e99a3d8e5afb4f90a559b056b9f07af023905753b02d95eb329a35c77f154b79abbcd291615ce42f02",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 73,
          "comment" : "",
          "msg" : "54657374",
          "sig" : "8a9bb4c465a3863abc9fd0dd35d80bb28f7d33d37d74679802d63f82b20da114b8d765a1206b3e9ad7cf2b2d8d778bb8651f1fa992db293c0039eacb6161480f",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 74,
          "comment" : "",
          "msg" : "48656c6c6f",
          "sig" : "d839c20abfda1fd429531831c64f813f84b913e9928540310cf060b44c3dbf9457d44a7721fdc0d67724ff81cb450dd39b10cfb65db15dda4b8bf09d26bd3801",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 75,
          "comment" : "",
          "msg" : "313233343030",
          "sig" : "9bbb1052dcfa8ad2715c2eb716ae4f1902dea353d42ee09fd4c0b4fcb8b52b5219e2200016e1199d0061891c263e31b0bc3b55673c19610c4e0fa5408004160b",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 76,
          "comment" : "",
          "msg" : "000000000000000000000000",
          "sig" : "f63b5c0667c7897fc283296416f7f60e84bbde9cbd832e56be463ed9f568069702b17a2f7c341ebf590706a6388ac76ac613c1675ec0f2c7118f2573422a500b",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 77,
          "comment" : "",
          "msg" : "6161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161616161",
          "sig" : "1bc44d7001e6b5b9090fef34b2ca480f9786bbefa7d279353e5881e8dfb91b803ccd46500e270ef0109bfd741037558832120bc2a4f20fbe7b5fb3c3aaf23e08",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 78,
          "comment" : "",
          "msg" : "202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f60",
          "sig" : "ea8e22143b02372e76e99aece3ed36aec529768a27e2bb49bdc135d44378061e1f62d1ac518f33ebf37b2ee8cc6dde68a4bd7d4a2f4d6cb77f015f71ca9fc30d",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 79,
          "comment" : "",
          "msg" : "ffffffffffffffffffffffffffffffff",
          "sig" : "8acd679e1a914fc45d5fa83d3021f0509c805c8d271df54e52f43cfbd00cb6222bf81d58fe1de2de378df67ee9f453786626961fe50a9b05f12b6f0899ebdd0a",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "d75a980182b10ab7d54bfed3c964073a0ee172f3daa62325af021a68f707511a",
        "sk" : "9d61b19deffd5a60ba844af492ec2cc44449c5697b326919703bac031cae7f60",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100d75a980182b10ab7d54bfed3c964073a0ee172f3daa62325af021a68f707511a",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEA11qYAYKxCrfVS/7TyWQHOg7hcvPapiMlrwIaaPcHURo=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 80,
          "comment" : "draft-josefsson-eddsa-ed25519-02: Test 1",
          "msg" : "",
          "sig" : "e5564300c360ac729086e2cc806e828a84877f1eb8e5d974d873e065224901555fb8821590a33bacc61e39701cf9b46bd25bf5f0595bbe24655141438e7a100b",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "3d4017c3e843895a92b70aa74d1b7ebc9c982ccf2ec4968cc0cd55f12af4660c",
        "sk" : "4ccd089b28ff96da9db6c346ec114e0f5b8a319f35aba624da8cf6ed4fb8a6fb",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b65700321003d4017c3e843895a92b70aa74d1b7ebc9c982ccf2ec4968cc0cd55f12af4660c",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAPUAXw+hDiVqStwqnTRt+vJyYLM8uxJaMwM1V8Sr0Zgw=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 81,
          "comment" : "draft-josefsson-eddsa-ed25519-02: Test 2",
          "msg" : "72",
          "sig" : "92a009a9f0d4cab8720e820b5f642540a2b27b5416503f8fb3762223ebdb69da085ac1e43e15996e458f3613d0f11d8c387b2eaeb4302aeeb00d291612bb0c00",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "fc51cd8e6218a1a38da47ed00230f0580816ed13ba3303ac5deb911548908025",
        "sk" : "c5aa8df43f9f837bedb7442f31dcb7b166d38535076f094b85ce3a2e0b4458f7",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100fc51cd8e6218a1a38da47ed00230f0580816ed13ba3303ac5deb911548908025",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEA/FHNjmIYoaONpH7QAjDwWAgW7RO6MwOsXeuRFUiQgCU=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 82,
          "comment" : "draft-josefsson-eddsa-ed25519-02: Test 3",
          "msg" : "af82",
          "sig" : "6291d657deec24024827e69c3abe01a30ce548a284743a445e3680d7db5ac3ac18ff9b538d16f290ae67f760984dc6594a7c15e9716ed28dc027beceea1ec40a",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "278117fc144c72340f67d0f2316e8386ceffbf2b2428c9c51fef7c597f1d426e",
        "sk" : "f5e5767cf153319517630f226876b86c8160cc583bc013744c6bf255f5cc0ee5",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100278117fc144c72340f67d0f2316e8386ceffbf2b2428c9c51fef7c597f1d426e",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAJ4EX/BRMcjQPZ9DyMW6Dhs7/vyskKMnFH+98WX8dQm4=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 83,
          "comment" : "draft-josefsson-eddsa-ed25519-02: Test 1024",
          "msg" : "08b8b2b733424243760fe426a4b54908632110a66c2f6591eabd3345e3e4eb98fa6e264bf09efe12ee50f8f54e9f77b1e355f6c50544e23fb1433ddf73be84d879de7c0046dc4996d9e773f4bc9efe5738829adb26c81b37c93a1b270b20329d658675fc6ea534e0810a4432826bf58c941efb65d57a338bbd2e26640f89ffbc1a858efcb8550ee3a5e1998bd177e93a7363c344fe6b199ee5d02e82d522c4feba15452f80288a821a579116ec6dad2b3b310da903401aa62100ab5d1a36553e06203b33890cc9b832f79ef80560ccb9a39ce767967ed628c6ad573cb116dbefefd75499da96bd68a8a97b928a8bbc103b6621fcde2beca1231d206be6cd9ec7aff6f6c94fcd7204ed3455c68c83f4a41da4af2b74ef5c53f1d8ac70bdcb7ed185ce81bd84359d44254d95629e9855a94a7c1958d1f8ada5d0532ed8a5aa3fb2d17ba70eb6248e594e1a2297acbbb39d502f1a8c6eb6f1ce22b3de1a1f40cc24554119a831a9aad6079cad88425de6bde1a9187ebb6092cf67bf2b13fd65f27088d78b7e883c8759d2c4f5c65adb7553878ad575f9fad878e80a0c9ba63bcbcc2732e69485bbc9c90bfbd62481d9089beccf80cfe2df16a2cf65bd92dd597b0707e0917af48bbb75fed413d238f5555a7a569d80c3414a8d0859dc65a46128bab27af87a71314f318c782b23ebfe808b82b0ce26401d2e22f04d83d1255dc51addd3b75a2b1ae0784504df543af8969be3ea7082ff7fc9888c144da2af58429ec96031dbcad3dad9af0dcbaaaf268cb8fcffead94f3c7ca495e056a9b47acdb751fb73e666c6c655ade8297297d07ad1ba5e43f1bca32301651339e22904cc8c42f58c30c04aafdb038dda0847dd988dcda6f3bfd15c4b4c4525004aa06eeff8ca61783aacec57fb3d1f92b0fe2fd1a85f6724517b65e614ad6808d6f6ee34dff7310fdc82aebfd904b01e1dc54b2927094b2db68d6f903b68401adebf5a7e08d78ff4ef5d63653a65040cf9bfd4aca7984a74d37145986780fc0b16ac451649de6188a7dbdf191f64b5fc5e2ab47b57f7f7276cd419c17a3ca8e1b939ae49e488acba6b965610b5480109c8b17b80e1b7b750dfc7598d5d5011fd2dcc5600a32ef5b52a1ecc820e308aa342721aac0943bf6686b64b2579376504ccc493d97e6aed3fb0f9cd71a43dd497f01f17c0e2cb3797aa2a2f256656168e6c496afc5fb93246f6b1116398a346f1a641f3b041e989f7914f90cc2c7fff357876e506b50d334ba77c225bc307ba537152f3f1610e4eafe595f6d9d90d11faa933a15ef1369546868a7f3a45a96768d40fd9d03412c091c6315cf4fde7cb68606937380db2eaaa707b4c4185c32eddcdd306705e4dc1ffc872eeee475a64dfac86aba41c0618983f8741c5ef68d3a101e8a3b8cac60c905c15fc910840b94c00a0b9d0",
          "sig" : "0aab4c900501b3e24d7cdf4663326a3a87df5e4843b2cbdb67cbf6e460fec350aa5371b1508f9f4528ecea23c436d94b5e8fcd4f681e30a6ac00a9704a188a03",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "8fd659b77b558ed93882c1157438450ac86ec62d421d568e98ee236f3810295a",
        "sk" : "d7ad3f1f6bbe0477c3c357a806a19eb41ae3f94025035bc87f281f8ee9fc0e34",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b65700321008fd659b77b558ed93882c1157438450ac86ec62d421d568e98ee236f3810295a",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAj9ZZt3tVjtk4gsEVdDhFCshuxi1CHVaOmO4jbzgQKVo=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 84,
          "comment" : "Random test failure 1",
          "msg" : "b0729a713593a92e46b56eaa66b9e435f7a09a8e7de03b078f6f282285276635f301e7aaafe42187c45d6f5b13f9f16b11195cc125c05b90d24dfe4c",
          "sig" : "7db17557ac470c0eda4eedaabce99197ab62565653cf911f632ee8be0e5ffcfc88fb94276b42e0798fd3aa2f0318be7fc6a29fae75f70c3dcdc414a0ad866601",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "2a606bf67ac770c607038b004101b325edb569efd3413d2d1f2c3e6b4e6e3082",
        "sk" : "ad9b22793336fcdac10e136c4deea599be187a38eef91c1cf7c7a4ec884dda08",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b65700321002a606bf67ac770c607038b004101b325edb569efd3413d2d1f2c3e6b4e6e3082",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAKmBr9nrHcMYHA4sAQQGzJe21ae/TQT0tHyw+a05uMII=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 85,
          "comment" : "Random test failure 2",
          "msg" : "a8546e50ba31cae3234310d32672447be213fad91a227a19669c53d309b959782b0e6b71f8791fdb470043b58122003157d2d96a43a6cbd7d3a8d86bf4c97391883e268d50af80e1e6e12939c2bd50ca746cdadfad4edf1bda875299740724148efb1ebe73fb60088cda890317658627a5f7ab5a0c075d9d8f3f97b6492b35519e50ff6b38377432a7081f9176bb1c29a862deac1336ca20b097a47829cec10a6a7cec178eda2d12f6dc6c87f910454af0123555ba184e68804d9cced60fd5c8c90943e56599c8f0ba59a38491ba5e5a53460682474c07e40ca142983314fd762856bb1093f359da6eb0a756bd93a3160c10dd8feea6b97e7c6a17cb54bd5d7649c05c66d7bdee056671dfdaf689fa3945bb8e29a429f4bd5d355dce9687b06f01d5e33e3999f0e8",
          "sig" : "67d84d4c3945aaf06e06d524be63acbfb5dbb1988c4aea96a5ee9f7a9b9eecc29df4f66b8aa1d9e8607a58fb1ef0c2ad69aac005b4f58e34103344a9c8871a09",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 86,
          "comment" : "Random test failure 24",
          "msg" : "b477b0480bb84642608b908d29a51cf2fce63f24ee95",
          "sig" : "28fafbb62b4d688fa79e1ac92851f46e319b161f801d4dc09acc21fdd6780a2c4292b8c1003c61c2bcebe7f3f88ccc4bb26d407387c5f27cb8c94cf6ce810405",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "c9c946cbc5544ac74eef491f07c5881c16faf7ec31ce4aa91bb60ae7b4539051",
        "sk" : "04a6553d68a9baef78a2175af375458eaa01cdb77350c61e282ef5f0c7116599",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100c9c946cbc5544ac74eef491f07c5881c16faf7ec31ce4aa91bb60ae7b4539051",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAyclGy8VUSsdO70kfB8WIHBb69+wxzkqpG7YK57RTkFE=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 87,
          "comment" : "Random test failure 3",
          "msg" : "cd2212eddb0706f62c995cef958634f0cb7793444cbf4d30e81c27c41ebea6cb02607510131f9c015692dfd521b148841e9a2d3564d20ac401f6cb8e40f520fe0cafbeaa88840b83013369d879f013463fe52a13267aa0c8c59c45cde9399cd1e6be8cc64cf48315ac2eb31a1c567a4fb7d601746d1f63b5ac020712adbbe07519bded6f",
          "sig" : "24087d47f3e20af51b9668ae0a88ce76586802d0ec75d8c0f28fc30962b5e1d1a1d509571a1624ed125a8df92a6e963728d6b5de99200b8e285f70feb6f05207",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 88,
          "comment" : "Random test failure 20",
          "msg" : "27d465bc632743522aefa23c",
          "sig" : "c2656951e2a0285585a51ff0eda7e9a23c2dfd2ffa273aee7808f4604e8f9a8c8ea49e9fce4eb2d8d75d36b7238fe6fc13b6c5d9427dd58f8c6615d033c0bd0f",
          "result" : "valid",
          "flags" : []
        }
      ]
    },)abcd"
      R"abcd(
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "32ad026f693d0d2afe7f4388d91c4c964426fcb9e3665c3ebd8650009b815c8e",
        "sk" : "c367c8d2ebeeecd70c1e8985b70c3808b75657f243b21ba4f322792540e92257",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b657003210032ad026f693d0d2afe7f4388d91c4c964426fcb9e3665c3ebd8650009b815c8e",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAMq0Cb2k9DSr+f0OI2RxMlkQm/LnjZlw+vYZQAJuBXI4=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 89,
          "comment" : "Random test failure 4",
          "msg" : "ec5c7cb078",
          "sig" : "d920d421a5956b69bfe1ba834c025e2babb6c7a6d78c97de1d9bb1116dfdd1185147b2887e34e15578172e150774275ea2aad9e02106f7e8ca1caa669a066f0c",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 90,
          "comment" : "Random test failure 5",
          "msg" : "4668c6a76f0e482190a7175b9f3806a5fe4314a004fa69f988373f7a",
          "sig" : "4f62daf7f7c162038552ad7d306e195baa37ecf6ca7604142679d7d1128e1f8af52e4cb3545748c44ef1ff1c64e877e4f4d248259b7f6eb56e3ef72097dc8e0c",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 91,
          "comment" : "Random test failure 8",
          "msg" : "5dc9bb87eb11621a93f92abe53515697d2611b2eef73",
          "sig" : "deecafb6f2ede73fec91a6f10e45b9c1c61c4b9bfbe6b6147e2de0b1df6938971f7896c3ab83851fb5d9e537037bff0fca0ccb4a3cc38f056f91f7d7a0557e08",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 92,
          "comment" : "Random test failure 10",
          "msg" : "7dcfe60f881e1285676f35b68a1b2dbcdd7be6f719a288ababc28d36e3a42ac3010a1ca54b32760e74",
          "sig" : "7f8663cf98cbd39d5ff553f00bcf3d0d520605794f8866ce75714d77cc51e66c91818b657d7b0dae430a68353506edc4a714c345f5ddb5c8b958ba3d035f7a01",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 93,
          "comment" : "Random test failure 12",
          "msg" : "58e456064dff471109def4ca27fa8310a1df32739655b624f27e6418d34b7f007173f3faa5",
          "sig" : "6aab49e5c0bc309b783378ee03ffda282f0185cdf94c847701ff307a6ee8d0865411c44e0a8206f6a5f606107451940c2593af790ce1860f4c14ab25b2deae08",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 94,
          "comment" : "Random test failure 15",
          "msg" : "a1",
          "sig" : "1a74ed2cbdc7d8f3827014e8e6ecf8fd2698ac8f86833acccdd400df710fe0d6b0543c9cfa00d52bf024ab7ce0d91981944097233ec134d5c7abbd44bfd32d0d",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 95,
          "comment" : "Random test failure 19",
          "msg" : "11cb1eafa4c42a8402c4193c4696f7b2e6d4585e4b42dcf1a8b67a80b2da80bc9d4b649fb2f35eaf1f56c426fd0b",
          "sig" : "14ceb2eaf4688d995d482f44852d71ad878cd7c77b41e60b0065fd01a59b054ee74759224187dbde9e59a763a70277c960892ef89fba997aba2576b2c54ba608",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 96,
          "comment" : "Random test failure 25",
          "msg" : "aa365b442d12b7f3c925",
          "sig" : "83c40ce13d483cc58ff65844875862d93df4bd367af77efa469ec06a8ed9e6d7905a04879535708ddf225567a815c9b941d405c98e918fd0c151165cea7fb101",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 97,
          "comment" : "Random test failure 28",
          "msg" : "475f",
          "sig" : "71a4a06a34075f2fd47bc3abf4714d46db7e97b08cb6180d3f1539ac50b18ce51f8af8ae95ed21d4fa0daab7235925631ecea1fd9d0d8a2ba7a7583fd04b900c",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "c29ec1894e06d27b4e40486b4fa5063d66a746c7f9c323b12203c03b72b8b78a",
        "sk" : "56c1e22d616cbb6dea869288b4b1c02bb98696583c2f6e650013a03e17049c62",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100c29ec1894e06d27b4e40486b4fa5063d66a746c7f9c323b12203c03b72b8b78a",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAwp7BiU4G0ntOQEhrT6UGPWanRsf5wyOxIgPAO3K4t4o=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 98,
          "comment" : "Random test failure 6",
          "msg" : "0f325ffd87e58131ffa23c05ea4579513b287fdba87b44",
          "sig" : "6669acf94667c5b541afe5307bde9476b13ae7e0e6058a772101ac8eb0a94331428eb4db0a2c68a9b6c1763b8624dab259b0876cdcfaeacc17b21a18e3fc010a",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 99,
          "comment" : "Random test failure 21",
          "msg" : "5ffa",
          "sig" : "931e5152fcef078c22cc5d6a3a65f06e396289f6f5f2d1efa6340254a53526ef5dc6874eeddf35c3f50991c53cd02bf06313e37d93ee1f7022128ffa3b8f300b",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "cfda5b899e35764c5229e59295fe1222b7ddce176643697c29e46ecbba10cf10",
        "sk" : "b7d2f64276df417fed27d8e15b4e90f6fd93dace707294c338bd32bc4bbd8fdb",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100cfda5b899e35764c5229e59295fe1222b7ddce176643697c29e46ecbba10cf10",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAz9pbiZ41dkxSKeWSlf4SIrfdzhdmQ2l8KeRuy7oQzxA=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 100,
          "comment" : "Random test failure 7",
          "msg" : "ec5c7cb078",
          "sig" : "30490c28f806298225df62103521dcee047153912c33ab8ab8bbdd1ffabd70fd4fdb360f05be535b067d1cf4e78c2cb432206bf280aab3bd21aaa1cb894c5b06",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 101,
          "comment" : "Random test failure 9",
          "msg" : "67484059b2490b1a0a4f8dee77979e26",
          "sig" : "4cd4f77ed473a6647387f3163541c67a1708a3c3bd1673247cb87f0cb68b3c56f04bfa72970c8a483efe659c87009ab4020b590b6641316b3deddb5450544e02",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 102,
          "comment" : "Random test failure 11",
          "msg" : "a020a4381dc9141f47ee508871ab7a8b5a3648727c4281ae9932376f23a8e1bcda0626b7129197d864178631ec89c4332dbb18",
          "sig" : "1e41a24fe732bd7cab14c2a2f5134ee8c87fcbd2e987e60957ed9239e5c32404d56977e1b4282871896cb10625a1937468e4dc266e16a9c1b8e9891177eca802",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 103,
          "comment" : "Random test failure 14",
          "msg" : "a25176b3afea318b2ec11ddacb10caf7179c0b3f8eabbfa2895581138d3c1e0e",
          "sig" : "2a833aadecd9f28235cb5896bf3781521dc71f28af2e91dbe1735a61dce3e31ac15ca24b3fc47817a59d386bbbb2ce60a6adc0a2703bb2bdea8f70f91051f706",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 104,
          "comment" : "Random test failure 18",
          "msg" : "a9e6d94870a67a9fe1cf13b1e6f9150cdd407bf6480ec841ea586ae3935e9787163cf419c1",
          "sig" : "c97e3190f83bae7729ba473ad46b420b8aad735f0808ea42c0f898ccfe6addd4fd9d9fa3355d5e67ee21ab7e1f805cd07f1fce980e307f4d7ad36cc924eef00c",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "529919c9c780985a841c42ba6c180ff2d67a276ccfbe281080e47ab71a758f56",
        "sk" : "7d597c3b7283929d07ed8f01f31d2596823e5e46ab226c7be4234d1a9dcaef37",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100529919c9c780985a841c42ba6c180ff2d67a276ccfbe281080e47ab71a758f56",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAUpkZyceAmFqEHEK6bBgP8tZ6J2zPvigQgOR6txp1j1Y=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 105,
          "comment" : "Random test failure 13",
          "msg" : "e1cbf2d86827825613fb7a85811d",
          "sig" : "01abfa4d6bbc726b196928ec84fd03f0c953a4fa2b228249562ff1442a4f63a7150b064f3712b51c2af768d2c2711a71aabf8d186833e941a0301b82f0502905",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 106,
          "comment" : "Random test failure 22",
          "msg" : "25",
          "sig" : "e4ae21f7a8f4b3b325c161a8c6e53e2edd7005b9c2f8a2e3b0ac4ba94aa80be6f2ee22ac8d4a96b9a3eb73a825e7bb5aff4a3393bf5b4a38119e9c9b1b041106",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "2252b3d57c74cbf8bc460dc2e082847926bc022f09ab6ae95756362bfd1167c1",
        "sk" : "f401cee4bfb1732f0e9b8d8ba79469565c3115296141dbdf7e9c311a0ac1823b",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b65700321002252b3d57c74cbf8bc460dc2e082847926bc022f09ab6ae95756362bfd1167c1",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAIlKz1Xx0y/i8Rg3C4IKEeSa8Ai8Jq2rpV1Y2K/0RZ8E=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 107,
          "comment" : "Random test failure 16",
          "msg" : "975ef941710071a9e1e6325a0c860becd7c695b5117c3107b686e330e5",
          "sig" : "af0fd9dda7e03e12313410d8d8844ebb6fe6b7f65141f22d7bcba5695a25414a9e54326fb44d59fb14707899a8aae70857b23d4080d7ab2c396ef3a36d45ce02",
          "result" : "valid",
          "flags" : []
        },
        {
          "tcId" : 108,
          "comment" : "Random test failure 23",
          "msg" : "80fdd6218f29c8c8f6bd820945f9b0854e3a8824",
          "sig" : "e097e0bd0370bff5bde359175a11b728ee9639095d5df8eda496395565616edfe079977f7d4dc8c75d6113a83d6a55e6e1676408c0967a2906339b43337dcb01",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "c0a773110f975de3732355bb7ec7f0c41c091c0252966070205516693b992a4a",
        "sk" : "3d658956410377d0644676d2599542412a4f3b0e4eadfb7f3f836615f42b18bc",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b6570032100c0a773110f975de3732355bb7ec7f0c41c091c0252966070205516693b992a4a",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAwKdzEQ+XXeNzI1W7fsfwxBwJHAJSlmBwIFUWaTuZKko=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 109,
          "comment" : "Random test failure 17",
          "msg" : "",
          "sig" : "0280427e713378f49d478df6373c6cac847b622b567daa2376c839e7ac10e22c380ab0fa8617c9dcfe76c4d9db5459b21dc1413726e46cc8f387d359e344f407",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "54cda623245759ad6d43e620a606908befc633d60792bc7798447a0ef38e7311",
        "sk" : "bccb61323840c2a96fc36f7e54ea6c8e55f9d221f7f05791ed60025e06064439",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b657003210054cda623245759ad6d43e620a606908befc633d60792bc7798447a0ef38e7311",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAVM2mIyRXWa1tQ+YgpgaQi+/GM9YHkrx3mER6DvOOcxE=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 110,
          "comment" : "Random test failure 26",
          "msg" : "27e792b28b2f1702",
          "sig" : "14d9b497c19b91d43481c55bb6f5056de252d9ecb637575c807e58e9b4c5eac8b284089d97e2192dc242014363208e2c9a3435edf8928fb1d893553e9be4c703",
          "result" : "valid",
          "flags" : []
        }
      ]
    },
    {
      "key" : {
        "curve" : "edwards25519",
        "keySize" : 255,
        "pk" : "2362bac514d5fad33802642e979a1e82de6eb6f1bcbf6a5b304f2bb02b9e57fe",
        "sk" : "f2d3023b9c19e241748bc4039a7a43c595701f23675505015213a8a2a0274c1b",
        "type" : "EDDSAKeyPair"
      },
      "keyDer" : "302a300506032b65700321002362bac514d5fad33802642e979a1e82de6eb6f1bcbf6a5b304f2bb02b9e57fe",
      "keyPem" : "-----BEGIN PUBLIC KEY-----\nMCowBQYDK2VwAyEAI2K6xRTV+tM4AmQul5oegt5utvG8v2pbME8rsCueV/4=\n-----END PUBLIC KEY-----\n",
      "type" : "EDDSAVer",
      "tests" : [
        {
          "tcId" : 111,
          "comment" : "Random test failure 27",
          "msg" : "eef3bb0f617c17d0420c115c21c28e3762edc7b7fb048529b84a9c2bc6",
          "sig" : "242ddb3a5d938d07af690b1b0ef0fa75842c5f9549bf39c8750f75614c712e7cbaf2e37cc0799db38b858d41aec5b9dd2fca6a3c8e082c10408e2cf3932b9d08",
          "result" : "valid",
          "flags" : []
        }
      ]
    }
  ]
})abcd";
}
