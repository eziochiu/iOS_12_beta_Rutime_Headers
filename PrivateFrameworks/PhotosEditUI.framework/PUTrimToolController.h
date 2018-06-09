/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUTrimToolController : UIViewController <ISChangeObserver, PULivePhotoKeyFrameSelectionViewControllerDelegate, PULivePhotoTrimScrubberDelegate, UIPopoverPresentationControllerDelegate> {
    ISWrappedAVPlayer * __avPlayer;
    PLPhotoEditRenderer * __renderer;
    bool  _canEditStillFrameTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentStillFrameTime;
    bool  _didPerformInitialVideoCompositionUpdate;
    bool  _disabled;
    UIView * _disabledOverlayView;
    PLEditSource * _editSource;
    bool  _lastLivePhotoRenderIncludesVisualChanges;
    PULivePhotoKeyFrameSelectionViewController * _livePhotoKeyFramePicker;
    PHLivePhotoView * _livePhotoView;
    double  _minimumTrimDuration;
    PLPhotoEditMutableModel * _photoEditModel;
    id  _playerTimeObservationToken;
    double  _previouslyOpenedWidth;
    PUPhotoEditSnapStripView * _snapStripView;
    PULivePhotoTrimScrubber * _trimScrubber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _unadjustedStillImageTime;
}

@property (setter=_setAVPlayer:, nonatomic, retain) ISWrappedAVPlayer *_avPlayer;
@property (setter=_setRenderer:, nonatomic, retain) PLPhotoEditRenderer *_renderer;
@property (nonatomic) bool canEditStillFrameTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentStillFrameTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic, retain) PLEditSource *editSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker;
@property (nonatomic, readonly) PHLivePhotoView *livePhotoView;
@property (nonatomic) double minimumTrimDuration;
@property (nonatomic, retain) PLPhotoEditMutableModel *photoEditModel;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, retain) id playerTimeObservationToken;
@property (nonatomic) double previouslyOpenedWidth;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } unadjustedStillImageTime;

- (void).cxx_destruct;
- (id)_avPlayer;
- (void)_avPlayerTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_createRendererIfNeeded;
- (id)_currentLivePhoto;
- (id)_currentVideoAsset;
- (id)_currentVideoPlayerItem;
- (void)_livePhotoKeyFramePickerDidDismiss:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectFromLoupeRect;
- (id)_renderer;
- (void)_resetScrubberToStillPhotoFrame;
- (void)_setAVPlayer:(id)arg1;
- (void)_setRenderer:(id)arg1;
- (void)_updateLivePhotoViewTrim;
- (void)_updatePassivePlayhead;
- (void)_updatePhotoEditModel;
- (void)_updateScrubberContents;
- (void)_updateScrubberTimes;
- (void)_updateSnapStripView;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)canEditStillFrameTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentStillFrameTime;
- (bool)disabled;
- (id)editSource;
- (id)initWithLivePhotoView:(id)arg1;
- (id)livePhotoKeyFramePicker;
- (void)livePhotoRenderDidChange:(bool)arg1;
- (id)livePhotoView;
- (double)minimumTrimDuration;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoEditModel;
- (id)placeholderImage;
- (id)playerTimeObservationToken;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (double)previouslyOpenedWidth;
- (void)setCanEditStillFrameTime:(bool)arg1;
- (void)setCurrentStillFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEditSource:(id)arg1;
- (void)setLivePhotoKeyFramePicker:(id)arg1;
- (void)setMinimumTrimDuration:(double)arg1;
- (void)setPhotoEditModel:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlayerTimeObservationToken:(id)arg1;
- (void)setPreviouslyOpenedWidth:(double)arg1;
- (void)setUnadjustedStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(bool)arg3;
- (void)trimScrubberAssetDurationDidChange:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedStillImageTime;
- (void)userDidRequestToMakeKeyPhoto:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
