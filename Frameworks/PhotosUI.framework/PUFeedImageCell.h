/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedImageCell : PUFeedCell {
    UIImageView * __centerOverlayImageView;
    UIButton * __commentButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __imageFrame;
    long long  __imageTag;
    UIImageView * __imageView;
    UIView<PXVideoOverlayButton> * __overlayPlayButton;
    PUImageViewExtraction * __overlayPlayButtonBackgroundExtraction;
    UIImageView * __overlayPlayButtonBackgroundImageView;
    PXUIAssetBadgeView * __photoIrisBadgeView;
    bool  __shouldHideCenterOverlayImageView;
    bool  __shouldHideCommentButton;
    bool  __shouldHideOverlayPlayButton;
    bool  __shouldUpdateOverlayPlayButtonBackground;
    long long  _commentCount;
    double  _cornerRadius;
    UIImage * _image;
    long long  _imageAlignment;
    long long  _imageContentMode;
    bool  _imageHidden;
    UIImageView * _likeBadgeView;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumImageSize;
    long long  _overlayOptions;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    bool  _shouldHideLikeBadge;
}

@property (setter=_setCenterOverlayImageView:, nonatomic, retain) UIImageView *_centerOverlayImageView;
@property (setter=_setCommentButton:, nonatomic, retain) UIButton *_commentButton;
@property (setter=_setImageFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _imageFrame;
@property (setter=_setImageTag:, nonatomic) long long _imageTag;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (setter=_setOverlayPlayButton:, nonatomic, retain) UIView<PXVideoOverlayButton> *_overlayPlayButton;
@property (setter=_setOverlayPlayButtonBackgroundExtraction:, nonatomic, retain) PUImageViewExtraction *_overlayPlayButtonBackgroundExtraction;
@property (setter=_setOverlayPlayButtonBackgroundImageView:, nonatomic, retain) UIImageView *_overlayPlayButtonBackgroundImageView;
@property (setter=_setPhotoIrisBadgeView:, nonatomic, retain) PXUIAssetBadgeView *_photoIrisBadgeView;
@property (setter=_setShouldHideCenterOverlayImageView:, nonatomic) bool _shouldHideCenterOverlayImageView;
@property (setter=_setShouldHideCommentButton:, nonatomic) bool _shouldHideCommentButton;
@property (setter=_setShouldHideOverlayPlayButton:, nonatomic) bool _shouldHideOverlayPlayButton;
@property (setter=_setShouldUpdateOverlayPlayButtonBackground:, nonatomic) bool _shouldUpdateOverlayPlayButtonBackground;
@property (nonatomic) long long commentCount;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) long long imageContentMode;
@property (getter=isImageHidden, nonatomic) bool imageHidden;
@property (nonatomic, retain) UIImageView *likeBadgeView;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumImageSize;
@property (nonatomic) long long overlayOptions;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (setter=setShouldHideLikeBadge:, nonatomic) bool shouldHideLikeBadge;

+ (bool)_allowHighQualityVideoOverlayButton;
+ (Class)_contentViewClass;
+ (long long)_videoOverlayButtonStyle;
+ (void)preloadResources;

- (void).cxx_destruct;
- (id)_centerOverlayImageView;
- (id)_commentButton;
- (void)_handleCommentButton:(id)arg1;
- (void)_handlePlayButton:(id)arg1;
- (id)_imageCellDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageFrame;
- (long long)_imageTag;
- (id)_imageView;
- (void)_invalidateOverlayPlayButtonBackground;
- (void)_layoutImageView;
- (id)_overlayPlayButton;
- (id)_overlayPlayButtonBackgroundExtraction;
- (id)_overlayPlayButtonBackgroundImageView;
- (id)_photoIrisBadgeView;
- (void)_setCenterOverlayImageView:(id)arg1;
- (void)_setCommentButton:(id)arg1;
- (void)_setImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setImageTag:(long long)arg1;
- (void)_setImageView:(id)arg1;
- (void)_setOverlayPlayButton:(id)arg1;
- (void)_setOverlayPlayButtonBackgroundExtraction:(id)arg1;
- (void)_setOverlayPlayButtonBackgroundImageView:(id)arg1;
- (void)_setPhotoIrisBadgeView:(id)arg1;
- (void)_setShouldHideCenterOverlayImageView:(bool)arg1;
- (void)_setShouldHideCommentButton:(bool)arg1;
- (void)_setShouldHideOverlayPlayButton:(bool)arg1;
- (void)_setShouldUpdateOverlayPlayButtonBackground:(bool)arg1;
- (bool)_shouldHideCenterOverlayImageView;
- (bool)_shouldHideCommentButton;
- (bool)_shouldHideOverlayPlayButton;
- (bool)_shouldUpdateOverlayPlayButtonBackground;
- (void)_updateCommentButton;
- (void)_updateOverlays;
- (void)_updateRoundedCornersOverlayView;
- (long long)commentCount;
- (double)cornerRadius;
- (id)image;
- (long long)imageAlignment;
- (long long)imageContentMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isImageHidden;
- (void)layoutSubviews;
- (id)likeBadgeView;
- (struct CGSize { double x1; double x2; })maximumImageSize;
- (long long)overlayOptions;
- (void)prepareForReuse;
- (id)roundedCornerOverlayView;
- (void)setCommentCount:(long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withTag:(long long)arg2;
- (void)setImageAlignment:(long long)arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setImageHidden:(bool)arg1;
- (void)setLikeBadgeView:(id)arg1;
- (void)setMaximumImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOverlayOptions:(long long)arg1;
- (void)setParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRoundedCornerOverlayView:(id)arg1;
- (void)setShouldHideLikeBadge:(bool)arg1;
- (bool)shouldHideLikeBadge;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
