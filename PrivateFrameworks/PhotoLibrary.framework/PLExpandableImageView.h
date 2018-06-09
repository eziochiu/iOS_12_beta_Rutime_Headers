/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLExpandableImageView : PLExpandableView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  _centerOffset;
    float  _currentAngle;
    struct { 
        unsigned int isRotating : 1; 
        unsigned int didTrack : 1; 
        unsigned int updateFrame : 1; 
        unsigned int didLayout : 1; 
        unsigned int alwaysDoLayout : 1; 
        unsigned int didComputeCenterOffset : 1; 
        unsigned int imageIsFullScreen : 1; 
    }  _exImageFlags;
    int  _imageID;
    double  _imageRotationAngle;
    PLImageView * _imageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialExpandingFrame;
    double  _originalAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    double  _originalWidth;
    PLManagedAsset * _photo;
    double  _pinchAngle;
    double  _pinchScale;
    double  _pinchWidth;
}

@property (getter=isBorderAndAccessoriesVisible, nonatomic) bool borderAndAccessoriesVisible;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) PLManagedAsset *photo;
@property (nonatomic, readonly) bool showsPlaceholder;
@property (nonatomic, retain) PLVideoView *videoView;

+ (double)imageBorderWidth;

- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_contentView;
- (float)_currentScale;
- (float)_expandedScale;
- (float)_expansionFraction;
- (struct CGSize { double x1; double x2; })_newSizeFromSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setOriginalSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snappedExpandedFrame;
- (void)_updateBorderAndAccessoriesAlpha;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint { double x1; double x2; })arg1 rightPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)beginTrackingPinch:(id)arg1;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (float)continueTrackingPinch:(id)arg1;
- (void)dealloc;
- (void)finishTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfImage;
- (id)image;
- (double)imageRotationAngle;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameStyle:(int)arg2 withBorder:(bool)arg3;
- (bool)isBeingManipulated;
- (bool)isBorderAndAccessoriesVisible;
- (bool)isShadowEnabled;
- (void)layoutSubviews;
- (id)name;
- (id)photo;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setBorderAndAccessoriesVisible:(bool)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 orientation:(long long)arg3;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 isFullscreen:(bool)arg2;
- (void)setName:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setShadowEnabled:(bool)arg1;
- (void)setShowsPlaceholder:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 angle:(float)arg2;
- (void)setTextBadgeString:(id)arg1;
- (void)setTransformAndCenterForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)setVideoView:(id)arg1;
- (bool)showsPlaceholder;
- (void)stateDidChangeFrom:(int)arg1;
- (double)transitionProgress;
- (id)videoView;

@end
