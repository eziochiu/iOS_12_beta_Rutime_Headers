/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassView : UIView <PKPassFaceDelegate, PKPasscodeLockManagerObserver, UIGestureRecognizerDelegate> {
    PKPassColorProfile * _colorProfile;
    long long  _contentMode;
    unsigned long long  _contentModeToken;
    <WLCardViewDelegate> * _delegate;
    PKPassFrontFaceView * _frontFace;
    double  _modalShadowVisibility;
    bool  _modallyPresented;
    PKPass * _pass;
    PKPasscodeLockManager * _passcodeLockManager;
    long long  _priorContentMode;
    unsigned long long  _suppressedContent;
    NSString * _suppressingIdentifier;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool frontFaceBodyContentCreated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isForcedFrontFaceResized;
@property (nonatomic, readonly) bool isFrontFaceResized;
@property (nonatomic) double modalShadowVisibility;
@property (getter=isModallyPresented, nonatomic) bool modallyPresented;
@property (nonatomic, readonly, retain) PKPass *pass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent;
@property (nonatomic, readonly) NSString *uniqueID;

- (void).cxx_destruct;
- (void)_applyContentMode:(bool)arg1;
- (long long)_frontFaceBackgroundModeForContentMode;
- (unsigned long long)_regionsForCurrentModes;
- (void)_resizePassAnimated:(bool)arg1 notify:(bool)arg2;
- (void)_updateFrontFaceSuppressedContent;
- (void)_updateLayerShadowAnimated:(bool)arg1 withDelay:(double)arg2;
- (void)_updateResizeIfNecessary;
- (bool)_visibleFaceShouldClipForCurrentViewMode:(double*)arg1;
- (bool)canResize;
- (long long)contentMode;
- (void)dealloc;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfVisibleFace;
- (bool)frontFaceBodyContentCreated;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 content:(long long)arg2;
- (id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3;
- (bool)isForcedFrontFaceResized;
- (bool)isFrontFaceResized;
- (bool)isModallyPresented;
- (id)item;
- (void)layoutSubviews;
- (double)modalShadowVisibility;
- (id)pass;
- (bool)passFaceBarcodeButtonEnabled;
- (void)passFaceBarcodeButtonPressed:(id)arg1;
- (bool)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(id)arg1;
- (void)passFaceInfoButtonPressed:(id)arg1;
- (void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(bool)arg2;
- (void)presentDiff:(id)arg1 completion:(id /* block */)arg2;
- (void)resizePassAnimated:(bool)arg1 notify:(bool)arg2;
- (void)setContentMode:(long long)arg1;
- (void)setContentMode:(long long)arg1 animated:(bool)arg2;
- (void)setContentMode:(long long)arg1 animated:(bool)arg2 withDelay:(double)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDimmer:(double)arg1 animated:(bool)arg2;
- (void)setLiveMotionEnabled:(bool)arg1;
- (void)setModalShadowVisibility:(double)arg1;
- (void)setModalShadowVisibility:(double)arg1 animated:(bool)arg2;
- (void)setModalShadowVisibility:(double)arg1 animated:(bool)arg2 withDelay:(double)arg3;
- (void)setModallyPresented:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeOfFront;
- (struct CGSize { double x1; double x2; })sizeOfFrontFace;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotOfFrontFace;
- (id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(bool)arg1;
- (unsigned long long)suppressedContent;
- (void)tapRecognized:(id)arg1;
- (id)uniqueID;
- (void)updateValidityDisplay;

@end
