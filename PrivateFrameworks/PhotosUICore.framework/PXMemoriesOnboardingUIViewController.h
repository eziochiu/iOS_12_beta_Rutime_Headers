/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesOnboardingUIViewController : UIViewController <PXChangeObserver> {
    unsigned long long  __stage;
    PXPhotoAnalysisStatusController * __statusController;
    PXOnboardingStatusUIView * __statusView;
    PXOnboardingWelcomeUIView * __welcomeView;
    <PXMemoriesOnboardingViewControllerDelegate> * _delegate;
    struct { 
        bool views; 
        bool stage; 
        bool progress; 
    }  _needsUpdateFlags;
}

@property (setter=_setStage:, nonatomic) unsigned long long _stage;
@property (nonatomic, readonly) PXPhotoAnalysisStatusController *_statusController;
@property (setter=_setStatusView:, nonatomic) PXOnboardingStatusUIView *_statusView;
@property (setter=_setWelcomeView:, nonatomic) PXOnboardingWelcomeUIView *_welcomeView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXMemoriesOnboardingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_constraintsForMaximizingView:(id)arg1;
- (void)_invalidateProgress;
- (void)_invalidateStage;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_setStage:(unsigned long long)arg1;
- (void)_setStatusView:(id)arg1;
- (void)_setWelcomeView:(id)arg1;
- (unsigned long long)_stage;
- (id)_statusController;
- (id)_statusView;
- (void)_tearDownViews;
- (void)_updateIfNeeded;
- (void)_updateProgressIfNeeded;
- (void)_updateStageIfNeeded;
- (void)_updateViews;
- (id)_welcomeView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)delegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDelegate:(id)arg1;
- (void)startButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end