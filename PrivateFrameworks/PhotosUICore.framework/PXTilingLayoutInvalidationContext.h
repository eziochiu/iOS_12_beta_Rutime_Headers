/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingLayoutInvalidationContext : NSObject {
    bool  _invalidatedAllTiles;
    bool  _invalidatedContentBounds;
    bool  _invalidatedScrollBounds;
    bool  _invalidatedScrollInfo;
    NSMutableIndexSet * _invalidatedTileGroups;
    NSMutableArray * _invalidatedTileIdentifiers;
    bool  _invalidatedVisibleRect;
    NSString * _tag;
}

@property (nonatomic, readonly) bool invalidatedAllTiles;
@property (nonatomic, readonly) bool invalidatedContentBounds;
@property (nonatomic, readonly) bool invalidatedScrollBounds;
@property (nonatomic, readonly) bool invalidatedScrollInfo;
@property (nonatomic, readonly) NSIndexSet *invalidatedTileGroups;
@property (nonatomic, readonly) bool invalidatedVisibleRect;
@property (nonatomic, copy) NSString *tag;

- (void).cxx_destruct;
- (id)description;
- (void)enumerateInvalidatedTileIdentifiersUsingBlock:(id /* block */)arg1;
- (void)invalidateAllTiles;
- (void)invalidateContentBounds;
- (void)invalidateEverything;
- (void)invalidateScrollBounds;
- (void)invalidateScrollInfo;
- (void)invalidateTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (void)invalidateTilesInGroup:(unsigned long long)arg1;
- (void)invalidateVisibleRect;
- (bool)invalidatedAllTiles;
- (bool)invalidatedContentBounds;
- (bool)invalidatedScrollBounds;
- (bool)invalidatedScrollInfo;
- (id)invalidatedTileGroups;
- (bool)invalidatedVisibleRect;
- (void)setTag:(id)arg1;
- (id)tag;

@end
