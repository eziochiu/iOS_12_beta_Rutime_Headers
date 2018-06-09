/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULivePhotoTrimScrubber : UIView <UIGestureRecognizerDelegate> {
    double  __contentAspectRatio;
    bool  __photoLoupeHidden;
    long long  __trackingElement;
    bool  __trimControlsHidden;
    AVAsset * _asset;
    bool  _canEditKeyTime;
    long long  _changeDepth;
    <PULivePhotoTrimScrubberDelegate> * _delegate;
    struct { 
        bool respondsToDidBeginInteractivelyEditingElement; 
        bool respondsToCanBeginInteractivelyEditingElement; 
        bool respondsToDidEndInteractivelyEditingElement; 
        bool respondsToDidChangeTimeForElement; 
        bool respondsToAssetDurationDidChange; 
        bool respondsToDidChangeLoupeRect; 
    }  _delegateFlags;
    PUFilmstripView * _filmstripView;
    bool  _hasPresentedControls;
    double  _horizontalInset;
    UIImpactFeedbackGenerator * _impactGenerator;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _keyTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minimumTrimLength;
    UIPanGestureRecognizer * _panGesture;
    PULivePhotoTrimScrubberLoupeView * _photoLoupe;
    long long  _photoLoupeHideRequestCounter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTrimBuffer;
    UIView * _postTrimOverlayView;
    UIView * _preTrimOverlayView;
    NSArray * _snapKeyTimes;
    NSArray * _snappingControllers;
    UITapGestureRecognizer * _tapGesture;
    long long  _trimControlsHideRequestCounter;
    UIImageView * _trimEndHandle;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trimEndTime;
    UIImageView * _trimStartHandle;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trimStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _untrimmedDuration;
    AVVideoComposition * _videoComposition;
}

@property (setter=_setContentAspectRatio:, nonatomic) double _contentAspectRatio;
@property (getter=_isPhotoLoupeHidden, setter=_setPhotoLoupeHidden:, nonatomic) bool _photoLoupeHidden;
@property (setter=_setTrackingElement:, nonatomic) long long _trackingElement;
@property (getter=_areTrimControlsHidden, setter=_setTrimControlsHidden:, nonatomic) bool _trimControlsHidden;
@property (nonatomic, copy) AVAsset *asset;
@property (getter=isAssetDurationLoaded, nonatomic, readonly) bool assetDurationLoaded;
@property (nonatomic) bool canEditKeyTime;
@property (nonatomic, readonly) long long currentlyInteractingElement;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PULivePhotoTrimScrubberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalInset;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } keyTime;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } loupeRect;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, copy) NSArray *snapKeyTimes;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } trimEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } trimStartTime;
@property (nonatomic, readonly) long long trimStatus;
@property (setter=_setUntrimmedDuration:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } untrimmedDuration;
@property (nonatomic, copy) AVVideoComposition *videoComposition;
@property (nonatomic, retain) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (void)_PULivePhotoTrimScrubber_commonInit;
- (bool)_areTrimControlsHidden;
- (void)_assetDidLoadValues;
- (double)_contentAspectRatio;
- (void)_handleBeginPanGesture:(id)arg1;
- (void)_handleChangePanGesture:(id)arg1;
- (void)_handleEndPanGesture:(bool)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (bool)_isPhotoLoupeHidden;
- (double)_offsetForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_presentControlsIfNeeded;
- (void)_setContentAspectRatio:(double)arg1;
- (void)_setPhotoLoupeHidden:(bool)arg1;
- (void)_setPhotoLoupeHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setPhotoLoupeHidden:(bool)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)_setPhotoLoupeHidden:(bool)arg1 animated:(bool)arg2 withRequstID:(long long)arg3;
- (void)_setTrackingElement:(long long)arg1;
- (void)_setTrimControlsHidden:(bool)arg1;
- (void)_setTrimControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setTrimControlsHidden:(bool)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)_setTrimControlsHidden:(bool)arg1 animated:(bool)arg2 withRequstID:(long long)arg3;
- (void)_setUntrimmedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_timeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_trackingElement;
- (void)_trimHandleDidReachBounds;
- (void)_updateContentAspectRatio;
- (void)_updateSnappingControllers;
- (id)asset;
- (bool)canEditKeyTime;
- (long long)currentlyInteractingElement;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)horizontalInset;
- (double)horizontalOffsetForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAssetDurationLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })keyTime;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })loupeRect;
- (void)performAnimatedChanges:(id /* block */)arg1;
- (id)placeholderImage;
- (void)reloadThumbnails;
- (void)setAsset:(id)arg1;
- (void)setCanEditKeyTime:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalInset:(double)arg1;
- (void)setKeyTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setSnapKeyTimes:(id)arg1;
- (void)setTrimEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrimStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (id)snapKeyTimes;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeForElement:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trimEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trimStartTime;
- (long long)trimStatus;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })untrimmedDuration;
- (id)videoComposition;
- (id)videoPlayer;

@end
