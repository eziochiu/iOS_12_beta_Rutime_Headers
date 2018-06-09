/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PURedeyeToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate> {
    bool  _failureAnimationIsInProgress;
    PUPhotoEditOverlayBadge * _failureLabel;
    NSArray * _failureLabelConstraints;
    PUPhotoEditOverlayBadge * _instructionLabel;
    NSArray * _instructionLabelConstraints;
    bool  _isModelChangeLocal;
    NSMutableArray * _knownCorrections;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PURedeyeToolControllerSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateFailureAppearance;
- (void)_animateInstructionAppearance;
- (void)_correctRedEyeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_extractRedEyePointFromCorrectionDictionary:(id)arg1;
- (void)_handleRedeyeButton:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_loadCorrectionsFromModelAnimated:(bool)arg1;
- (bool)_removeCorrectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint { double x1; double x2; })arg1 isFailure:(bool)arg2;
- (void)dealloc;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (void)flashAutoRedEyeCorrections;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)localizedName;
- (void)photoEditModelDidChange;
- (id)selectedToolbarIcon;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsSecondaryToolbarVisible;
- (bool)wantsZoomAndPanEnabled;

@end
