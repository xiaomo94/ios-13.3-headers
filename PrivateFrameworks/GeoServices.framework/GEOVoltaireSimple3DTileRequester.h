/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>

+ (unsigned char)tileProviderIdentifier;

- (id)activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })kindForTileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;

@end
