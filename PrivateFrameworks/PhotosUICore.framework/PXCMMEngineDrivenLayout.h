/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMEngineDrivenLayout : PXEngineDrivenAssetsTilingLayout {
    PXCMMAssetStatusBadgeTileUserData * __copiedUserData;
    PXCMMAssetStatusBadgeTileUserData * __inProgressUserData;
    double  _bannerHeight;
    double  _footerBottomInset;
    bool  _hasFloatingSectionHeaders;
    double  _headerFooterSideInset;
    double  _headerHeight;
    double  _headerTopInset;
    long long  _layoutType;
    long long  _placeholderMode;
    PXBasicTileUserData * _placeholderTileUserData;
    double  _sendBackFooterHeight;
    double  _statusFooterHeight;
}

@property (nonatomic, readonly) PXCMMAssetStatusBadgeTileUserData *_copiedUserData;
@property (nonatomic, readonly) PXCMMAssetStatusBadgeTileUserData *_inProgressUserData;
@property (nonatomic, readonly) double bannerHeight;
@property (nonatomic) <PXCMMEngineDrivenLayoutDelegate> *delegate;
@property (nonatomic) double footerBottomInset;
@property (nonatomic) bool hasFloatingSectionHeaders;
@property (nonatomic) double headerFooterSideInset;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic) double headerTopInset;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic) long long placeholderMode;
@property (nonatomic, readonly) double sendBackFooterHeight;
@property (nonatomic, readonly) double statusFooterHeight;

+ (id)_additionalTileKinds;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bannerFrame;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })_bannerTileIdentifier;
- (id)_copiedUserData;
- (unsigned long long)_editorialGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (unsigned long long)_generatorGeometryKindForTileKind:(unsigned long long)arg1;
- (bool)_getAdditionalTileIdentifierForEditorial:(out struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(out unsigned long long*)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4;
- (bool)_getAdditionalTileIdentifierForGrid:(out struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(out unsigned long long*)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4;
- (bool)_getAssetStatusTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 outGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 group:(unsigned long long*)arg3 userData:(id*)arg4 forContentTileGeometry:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg5 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg6;
- (bool)_getDuplicateTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 outGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 group:(unsigned long long*)arg3 userData:(id*)arg4 forContentTileGeometry:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg5 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg6;
- (unsigned long long)_gridGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_headerFrame;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })_headerTileIdentifier;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })_identifierForUniqueTileWithKind:(unsigned long long)arg1;
- (id)_inProgressUserData;
- (void)_invalidateAssetStatusBadgeTiles;
- (void)_invalidateBanner;
- (void)_invalidateHeader;
- (void)_invalidateSectionHeaders;
- (void)_invalidateSendBackFooter;
- (void)_invalidateStatusFooter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_placeholderFrame;
- (struct CGSize { double x1; double x2; })_placeholderSize;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })_placeholderTileIdentifier;
- (struct CGSize { double x1; double x2; })_preferredSelectionBadgeSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sendBackFooterFrame;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })_sendBackFooterTileIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusFooterFrame;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })_statusFooterTileIdentifier;
- (void)adjustGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3;
- (double)bannerHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (double)footerBottomInset;
- (bool)getAdditionalAccessoryTileIdentifier:(out struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 outGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forTileKind:(unsigned long long)arg5 contentTileGeometry:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg6 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg7;
- (bool)getAdditionalTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(unsigned long long*)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4;
- (bool)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg4;
- (bool)hasFloatingSectionHeaders;
- (double)headerFooterSideInset;
- (double)headerHeight;
- (double)headerTopInset;
- (id)initWithDataSource:(id)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1 configuration:(id)arg2;
- (long long)layoutType;
- (long long)placeholderMode;
- (double)sendBackFooterHeight;
- (void)setFooterBottomInset:(double)arg1;
- (void)setHasFloatingSectionHeaders:(bool)arg1;
- (void)setHeaderFooterSideInset:(double)arg1;
- (void)setHeaderTopInset:(double)arg1;
- (void)setPlaceholderMode:(long long)arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (double)statusFooterHeight;
- (void)updateAssetStatusBadgeTiles;
- (double)zPositionOffsetForKind:(unsigned long long)arg1;

@end
