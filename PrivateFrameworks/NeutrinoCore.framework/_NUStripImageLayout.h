/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUStripImageLayout : NUImageLayout {
    long long  _stripCount;
    long long  _stripHeight;
}

- (struct { long long x1; long long x2; })borderSize;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })contentRectForTileAtIndex:(long long)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })frameRectForTileAtIndex:(long long)arg1;
- (id)initWithImageSize:(struct { long long x1; long long x2; })arg1 stripHeight:(long long)arg2;
- (bool)isEqualToLayout:(id)arg1;
- (long long)tileCount;
- (struct { long long x1; long long x2; })tileCounts;
- (id)tileInfoAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; })tileSize;

@end
