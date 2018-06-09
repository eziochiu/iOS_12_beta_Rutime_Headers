/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDataAnalyticsLogListViewController : HUItemTableViewController <HUDataAnalyticsModuleControllerDelegate> {
    HUActivityLoadingView * _activityLoadingView;
    HUDataAnalyticsModuleController * _analyticsModuleController;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) HUActivityLoadingView *activityLoadingView;
@property (nonatomic, readonly) HUDataAnalyticsModuleController *analyticsModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_kickoffReload;
- (void)_watchForReload;
- (id)activityLoadingView;
- (id)analyticsModuleController;
- (bool)bypassInitialItemUpdateReload;
- (void)dataAnalyticsModuleController:(id)arg1 didSelectItem:(id)arg2;
- (id)hu_preloadContent;
- (id)init;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)itemModuleControllers;
- (id)mediaProfileContainer;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
