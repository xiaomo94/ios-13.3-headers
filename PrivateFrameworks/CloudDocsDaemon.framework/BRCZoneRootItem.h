/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (struct BRCDirectoryItem { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; unsigned int x11; id x12; unsigned long long x13; id x14; bool x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; id x19; }*)asFSRoot;
- (id)fileID;
- (id)initWithZoneRootItemID:(id)arg1 session:(id)arg2;
- (bool)isFSRoot;
- (bool)isShareableItem;
- (bool)isZoneRoot;
- (id)parentItemID;
- (id)parentItemOnFS;
- (bool)saveToDB;
- (id)st;

@end
