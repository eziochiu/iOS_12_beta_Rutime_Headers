/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDiagnosticsCurationViewCell : UICollectionViewCell {
    double  _aestheticScore;
    PXScoreView * _aestheticScoreView;
    PXTextSymbolView * _blurryBadgeView;
    NSString * _clusterState;
    PXStateBadgeView * _clusterStateBadgeView;
    double  _contentScore;
    PXScoreView * _contentScoreView;
    NSDictionary * _debugInfo;
    PXSymbolBadgeView * _dedupedSymbolBadgeView;
    NSNumber * _dedupedSymbolIndex;
    PXDedupingBadgeView * _dedupingBadgeView;
    NSString * _dedupingType;
    PXTextSymbolView * _favoriteBadgeView;
    UIImageView * _imageView;
    unsigned long long  _index;
    PXIndexView * _indexView;
    bool  _isBlurry;
    bool  _isFavorite;
    bool  _isSDOFOrHDR;
    bool  _isUtility;
    NSString * _representedAssetIdentifier;
    PXTextSymbolView * _sdofOrHDRBadgeView;
    NSString * _state;
    PXStateBadgeView * _stateBadgeView;
    PXSymbolBadgeView * _symbolBadgeView;
    NSNumber * _symbolIndex;
    UIImage * _thumbnailImage;
    PXTextSymbolView * _utilityBadgeView;
}

@property (nonatomic) double aestheticScore;
@property (getter=isBlurry, nonatomic) bool blurry;
@property (nonatomic, retain) NSString *clusterState;
@property (nonatomic) double contentScore;
@property (nonatomic, retain) NSDictionary *debugInfo;
@property (nonatomic, retain) NSNumber *dedupedSymbolIndex;
@property (nonatomic, retain) NSString *dedupingType;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSString *representedAssetIdentifier;
@property (getter=isSDOFOrHDR, setter=setSDOFOrHDR:, nonatomic) bool sdofOrHDR;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) NSNumber *symbolIndex;
@property (nonatomic, retain) UIImage *thumbnailImage;
@property (getter=isUtility, nonatomic) bool utility;

+ (double)cellHeightWithCellWidth:(double)arg1;

- (void).cxx_destruct;
- (double)aestheticScore;
- (id)clusterState;
- (double)contentScore;
- (id)debugInfo;
- (id)dedupedSymbolIndex;
- (id)dedupingType;
- (unsigned long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlurry;
- (bool)isFavorite;
- (bool)isSDOFOrHDR;
- (bool)isUtility;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)representedAssetIdentifier;
- (void)setAestheticScore:(double)arg1;
- (void)setBlurry:(bool)arg1;
- (void)setClusterParity:(unsigned long long)arg1;
- (void)setClusterState:(id)arg1;
- (void)setContentScore:(double)arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setDedupedSymbolIndex:(id)arg1;
- (void)setDedupingType:(id)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setRepresentedAssetIdentifier:(id)arg1;
- (void)setSDOFOrHDR:(bool)arg1;
- (void)setState:(id)arg1;
- (void)setSymbolIndex:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setUtility:(bool)arg1;
- (id)state;
- (id)symbolIndex;
- (id)thumbnailImage;

@end
