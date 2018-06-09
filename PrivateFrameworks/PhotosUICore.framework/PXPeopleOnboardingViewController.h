/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate> {
    unsigned long long  _onboardStatus;
    PXPeopleSectionedDataSource * _peopleDataSource;
    PXPeopleProgressManager * _progressManager;
    PXPeopleStatusViewController * _statusViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long onboardStatus;
@property (nonatomic, retain) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic, retain) PXPeopleProgressManager *progressManager;
@property (nonatomic, retain) PXPeopleStatusViewController *statusViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_progressChanged:(id)arg1;
- (void)_pushToPeopleHome:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateStatusViewForStatus:(unsigned long long)arg1 progress:(double)arg2;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;
- (unsigned long long)onboardStatus;
- (id)peopleDataSource;
- (id)peopleHomeController;
- (id)progressManager;
- (void)setOnboardStatus:(unsigned long long)arg1;
- (void)setPeopleDataSource:(id)arg1;
- (void)setProgressManager:(id)arg1;
- (void)setStatusViewController:(id)arg1;
- (id)statusViewController;
- (void)statusViewControllerEnterButtonTapped:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
