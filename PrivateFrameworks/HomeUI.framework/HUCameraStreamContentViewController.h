/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraStreamContentViewController : UIViewController <HFItemManagerDelegate, PGPictureInPictureViewController> {
    HFCameraAudioManager * _cameraAudioManager;
    HUCameraView * _cameraView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _defaultCameraBadgeOffset;
    bool  _displayInterrupted;
    unsigned long long  _displayMode;
    HFItemManager * _itemManager;
    bool  _streaming;
    unsigned long long  _viewAppearanceState;
    unsigned long long  _visibilityState;
}

@property (nonatomic, retain) HFCameraAudioManager *cameraAudioManager;
@property (nonatomic) struct UIOffset { double x1; double x2; } cameraBadgeOffset;
@property (nonatomic, readonly) UIView *cameraOverlaySnapshot;
@property (nonatomic, retain) HUCameraView *cameraView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cameraViewFrame;
@property (nonatomic, readonly) UIView *cameraViewSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIOffset { double x1; double x2; } defaultCameraBadgeOffset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } derivedCameraViewFrame;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayInterrupted, nonatomic) bool displayInterrupted;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItemManager *itemManager;
@property (nonatomic, readonly) bool shouldShowAlternateActionButtonImage;
@property (nonatomic, readonly) bool shouldShowLoadingIndicator;
@property (getter=isStreaming, nonatomic) bool streaming;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewAppearanceState;
@property (nonatomic) unsigned long long visibilityState;

- (void).cxx_destruct;
- (id)_cameraItem;
- (id)_cameraManager;
- (bool)_isStreaming;
- (id)_preferredCameraSource;
- (void)_updateCameraViewsIncludingError:(bool)arg1;
- (void)_updateDigitalZoomState;
- (void)_updateIdleTimer;
- (void)_updatePreferredContentSize;
- (void)_updateStreamingState;
- (void)actionButtonTapped;
- (id)cameraAudioManager;
- (struct UIOffset { double x1; double x2; })cameraBadgeOffset;
- (id)cameraOverlaySnapshot;
- (id)cameraView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cameraViewFrame;
- (id)cameraViewSnapshot;
- (void)dealloc;
- (struct UIOffset { double x1; double x2; })defaultCameraBadgeOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })derivedCameraViewFrame;
- (void)didAnimatePictureInPictureStart;
- (void)didAnimatePictureInPictureStop;
- (unsigned long long)displayMode;
- (id)initWithCameraItem:(id)arg1;
- (bool)isDisplayInterrupted;
- (bool)isStreaming;
- (id)itemManager;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)setCameraAudioManager:(id)arg1;
- (void)setCameraBadgeOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setCameraView:(id)arg1;
- (void)setDefaultCameraBadgeOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setDisplayInterrupted:(bool)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setItemManager:(id)arg1;
- (void)setStreaming:(bool)arg1;
- (void)setViewAppearanceState:(unsigned long long)arg1;
- (void)setVisibilityState:(unsigned long long)arg1;
- (bool)shouldShowAlternateActionButtonImage;
- (unsigned long long)viewAppearanceState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)visibilityState;
- (void)willAnimatePictureInPictureStart;
- (void)willAnimatePictureInPictureStop;

@end
