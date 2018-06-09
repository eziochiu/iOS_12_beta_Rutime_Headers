/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedServerZone : BRCServerZone {
    NSString * _ownerName;
}

@property (nonatomic, readonly) BRCSharedClientZone *clientZone;
@property (nonatomic, readonly) bool isPrivateZone;
@property (nonatomic, readonly) bool isSharedZone;

- (void).cxx_destruct;
- (long long)_propagateDeleteToChildrenOfItemID:(id)arg1;
- (bool)_propagateFolderDeletesToTheirChildren;
- (bool)allocateRanks;
- (id)asSharedZone;
- (id)clientZone;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (bool)isPrivateZone;
- (bool)isSharedZone;
- (id)ownerName;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;

@end
