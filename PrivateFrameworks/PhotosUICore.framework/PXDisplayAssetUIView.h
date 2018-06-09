/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDisplayAssetUIView : UIView <PXChangeObserver, PXReusableObject> {
    <PXDisplayAsset> * _asset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    UIView * _contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    bool  _displayLoadingIndicator;
    NSError * _error;
    PXLoadingFailureBadgeView * _failureView;
    UIImage * _image;
    PXImageRequester * _imageRequester;
    bool  _isDisplayingFullQualityContent;
    PXUIMediaProvider * _mediaProvider;
    NSArray * _placeholderImageFilters;
    long long  _playbackStyle;
    PXRoundProgressView * _progressView;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic, readonly) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayLoadingIndicator;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) PXLoadingFailureBadgeView *failureView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (nonatomic) bool isDisplayingFullQualityContent;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic, copy) NSArray *placeholderImageFilters;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, retain) PXRoundProgressView *progressView;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

+ (void)checkInView:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1 withPlaybackStyle:(long long)arg2;
+ (id)viewPool;

- (void).cxx_destruct;
- (void)_loadContentView;
- (void)_updateFailureView;
- (void)_updateIfNeeded;
- (void)_updateProgressView;
- (void)_updateTargetSize;
- (id)asset;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (void)contentsRectDidChange;
- (id)currentImage;
- (void)didMoveToWindow;
- (bool)displayLoadingIndicator;
- (id)error;
- (id)failureView;
- (id)image;
- (void)imageDidChange;
- (id)imageRequester;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)layoutSubviews;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)placeholderImageFilters;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;
- (void)prepareForReuse;
- (id)progressView;
- (void)setAsset:(id)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisplayLoadingIndicator:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setFailureView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageRequester:(id)arg1;
- (void)setIsDisplayingFullQualityContent:(bool)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setNeedsUpdateContent;
- (void)setPlaceholderImageFilters:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (void)updateContent;

@end
