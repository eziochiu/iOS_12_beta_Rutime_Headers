/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionGadgetContentView : UIView <PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver> {
    bool  _assetContentHidden;
    PXDisplayAssetUIView * _assetView;
    long long  _badgeCount;
    unsigned long long  _badgeTypes;
    PXUIAssetBadgeView * _badgeView;
    bool  _blursDegradedContent;
    NSString * _caption;
    bool  _forceAssetContentReload;
    PXGadgetSpec * _gadgetSpec;
    <PXDisplayAsset> * _keyAsset;
    PXUIMediaProvider * _mediaProvider;
    PXRoundedCornerOverlayView * _roundedOverlayView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    <PXDisplaySuggestion> * _suggestion;
    NSString * _title;
    UILabel * _titleLabel;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
}

@property (nonatomic) bool assetContentHidden;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } assetContentsRect;
@property (nonatomic, retain) PXDisplayAssetUIView *assetView;
@property (nonatomic) long long badgeCount;
@property (nonatomic) unsigned long long badgeTypes;
@property (nonatomic, retain) PXUIAssetBadgeView *badgeView;
@property (nonatomic) bool blursDegradedContent;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic, readonly) UIImage *currentAssetImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDisplayingFullQualityContent;
@property (nonatomic, retain) <PXDisplayAsset> *keyAsset;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundedOverlayView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, retain) <PXDisplaySuggestion> *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)placeholderFilters;
+ (void)preloadResources;
+ (double)scaledSubtitleBaselineDistance;
+ (double)scaledSuggestionBaselineDistance;
+ (double)scaledTitleBaselineDistance;
+ (double)scaledTitleWithSuggestionBaselineDistance;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withSuggestion:(id)arg2 keyAsset:(id)arg3;
+ (struct UIFont { Class x1; }*)suggestionLabelFont;
+ (struct UIFont { Class x1; }*)titleLabelFont;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_calculateLayoutWithInputSize:(struct CGSize { double x1; double x2; })arg1 apply:(bool)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateAssetView;
- (void)_updateAssetViewPlaceholderFilters;
- (void)_updateBadgeContents;
- (void)_updateBadgeViews;
- (void)_updateFonts;
- (void)_updateIfNeeded;
- (void)_updateLabelsContents;
- (void)_updateRoundedCornerOverlayView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assetContentBoundsInCoordinateSpace:(id)arg1;
- (bool)assetContentHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assetContentsRect;
- (id)assetView;
- (long long)badgeCount;
- (unsigned long long)badgeTypes;
- (id)badgeView;
- (bool)blursDegradedContent;
- (id)caption;
- (id)currentAssetImage;
- (void)dealloc;
- (id)error;
- (id)gadgetSpec;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingFullQualityContent;
- (id)keyAsset;
- (void)layoutSubviews;
- (id)mediaProvider;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)roundedOverlayView;
- (void)setAssetContentHidden:(bool)arg1;
- (void)setAssetView:(id)arg1;
- (void)setBadgeCount:(long long)arg1;
- (void)setBadgeTypes:(unsigned long long)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setBlursDegradedContent:(bool)arg1;
- (void)setCaption:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setRoundedOverlayView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)suggestion;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
