/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFunEffectsViewController : UIViewController <CFXReviewViewControllerDelegate, PUOneUpAssetTransitionViewController, PXChangeObserver> {
    PUReviewScreenControlBar * __controlBar;
    CFXReviewViewController * __effectsViewController;
    PUReviewAdjustmentOutput * __exportAdjustmentOutput;
    unsigned long long  __exportCompletion;
    long long  __inputAdjustmentBaseVersion;
    bool  __inputHasKnownAdjustments;
    PUObserverRegistry * __observerRegistry;
    PUProgressIndicatorView * __progressIndicatorView;
    bool  __shouldHideBars;
    PUReviewScreenTopBar * __topBar;
    PUMediaProvider * _mediaProvider;
    PUReviewAsset * _reviewAsset;
    PUReviewScreenBarsModel * _reviewBarsModel;
}

@property (nonatomic, readonly) PUReviewScreenControlBar *_controlBar;
@property (nonatomic, readonly) CFXReviewViewController *_effectsViewController;
@property (nonatomic, retain) PUReviewAdjustmentOutput *_exportAdjustmentOutput;
@property (nonatomic) unsigned long long _exportCompletion;
@property (nonatomic, readonly) long long _inputAdjustmentBaseVersion;
@property (nonatomic, readonly) bool _inputHasKnownAdjustments;
@property (nonatomic, readonly) PUObserverRegistry *_observerRegistry;
@property (setter=_setProgressIndicatorView:, nonatomic, retain) PUProgressIndicatorView *_progressIndicatorView;
@property (setter=_setShouldHideBars:, nonatomic) bool _shouldHideBars;
@property (nonatomic, readonly) PUReviewScreenTopBar *_topBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (nonatomic, retain) PUReviewScreenBarsModel *reviewBarsModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_barControlsForModelControls:(id)arg1 transitioning:(bool)arg2;
- (id)_controlBar;
- (void)_dismissProgressIndicator;
- (id)_effectsViewController;
- (id)_exportAdjustmentOutput;
- (unsigned long long)_exportCompletion;
- (void)_exportWithCompletion:(unsigned long long)arg1;
- (void)_finishExportingWithMediaItem:(id)arg1;
- (void)_handleCompletion:(unsigned long long)arg1;
- (void)_handleDidTapDoneButton:(id)arg1;
- (void)_handleDidTapEditButton:(id)arg1;
- (void)_handleDidTapFunEffectsButton:(id)arg1;
- (void)_handleDidTapMarkupButton:(id)arg1;
- (void)_handleDidTapRetakeButton:(id)arg1;
- (void)_handleDidTapSendButton:(id)arg1;
- (void)_handleDismissCompletion;
- (void)_handleExportWithCompletion:(unsigned long long)arg1;
- (long long)_inputAdjustmentBaseVersion;
- (bool)_inputHasKnownAdjustments;
- (id)_observerRegistry;
- (id)_progressIndicatorView;
- (void)_setProgressIndicatorView:(id)arg1;
- (void)_setShouldHideBars:(bool)arg1;
- (void)_setShouldHideBars:(bool)arg1 animated:(bool)arg2;
- (bool)_shouldHideBars;
- (void)_showProgressIndicator;
- (void)_signalCompletion:(unsigned long long)arg1 withSavedAsset:(id)arg2;
- (id)_topBar;
- (void)_updateBars;
- (void)_updateProgressIndicatorWithProgress:(double)arg1;
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)reviewAsset;
- (id)reviewBarsModel;
- (void)reviewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
- (void)reviewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
- (void)reviewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
- (void)reviewViewControllerDidHideUserInterface:(id)arg1;
- (void)reviewViewControllerDidShowUserInterface:(id)arg1;
- (void)reviewViewControllerEffectsButtonWasTapped:(id)arg1;
- (void)setReviewBarsModel:(id)arg1;
- (void)set_exportAdjustmentOutput:(id)arg1;
- (void)set_exportCompletion:(unsigned long long)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
