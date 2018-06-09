/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIAssetsScene : PXAssetsScene <PXTilingControllerPreheatHandler> {
    PXDebugAssetBadgeManager * __debugBadgeManager;
    bool  __supressingColorSettings;
    NSMapTable * _imageRequesterByAssetReference;
    struct { 
        bool preheating; 
    }  _needsUpdateFlags;
    NSMutableSet * _tilesInUse;
}

@property (setter=_setDebugBadgeManager:, nonatomic, retain) PXDebugAssetBadgeManager *_debugBadgeManager;
@property (setter=_setSupressingColorSettings:, nonatomic) bool _supressingColorSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXUIScrollViewController *scrollViewController;
@property (readonly) Class superclass;

+ (void)preloadResources;

- (void).cxx_destruct;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3;
- (id)_debugBadgeManager;
- (id)_imageRequesterForAssetReference:(id)arg1;
- (id)_imageRequesterForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 inDataSource:(id)arg2;
- (void)_invalidatePreheating;
- (void)_registerDefaultTiles;
- (void)_setDebugBadgeManager:(id)arg1;
- (void)_setSupressingColorSettings:(bool)arg1;
- (bool)_supressingColorSettings;
- (void)_transitionImageRequestersToDataSource:(id)arg1;
- (void)_updatePreheatingIfNeeded;
- (id)badgeManager;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (void)dealloc;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;
- (bool)needsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (id)scrollViewController;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3 context:(void*)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3 context:(void*)arg4;
- (void)updateIfNeeded;
- (void)willTransitionToDataSource:(id)arg1;

@end
