/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMagazineGrid : NSObject {
    long long  _maxRows;
    unsigned long long  _numberOfColumns;
    long long * _table;
    unsigned long long  _tableSizeInBytes;
}

@property (nonatomic, readonly) unsigned long long currentRowsUsed;
@property (nonatomic, readonly) unsigned long long endingType;

- (bool)_hasAnyEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)_hasAnyTilesUsedInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)_isEmptyGrid;
- (long long)_numberOfEmptyTilesAtTheEnd;
- (long long)_numberOfEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (unsigned long long)_rowsUsed;
- (void)clearArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (unsigned long long)currentRowsUsed;
- (void)dealloc;
- (unsigned long long)endingType;
- (void)enlargeTable;
- (id)initWithNumberOfColumns:(long long)arg1 size:(unsigned long long)arg2;
- (bool)isGoodEnding;
- (bool)isPerfectEnding;
- (bool)nextEmptyTileX:(long long*)arg1 Y:(long long*)arg2 maxWidth:(long long*)arg3;
- (void)resetWithSize:(unsigned long long)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setTileIdentifier:(unsigned long long)arg1 forArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;

@end
