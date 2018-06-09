/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDBrowsableContentNavigationController : UITabBarController <MCDPCContainerDelegate, UITabBarControllerDelegate> {
    NSString * _bundleID;
    MCDPCContainer * _container;
    bool  _didFinishInitialLoad;
    bool  _didFinishInitialViewAppear;
    AVExternalDevice * _externalDevice;
    bool  _hasCarScreen;
    UITabBarController * _hostTabBarController;
    MCDPCModel * _model;
    UIButton * _nowPlayingButton;
    NSObject<OS_dispatch_queue> * _serialQueue;
    UITabBarController * _tabBarController;
    bool  _visible;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) MCDPCContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFinishInitialLoad;
@property (nonatomic) bool didFinishInitialViewAppear;
@property (nonatomic, retain) AVExternalDevice *externalDevice;
@property (nonatomic) bool hasCarScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITabBarController *hostTabBarController;
@property (nonatomic, retain) MCDPCModel *model;
@property (nonatomic, retain) UIButton *nowPlayingButton;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITabBarController *tabBarController;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_appRegisteredForContent:(id)arg1;
- (id)_hostTabAtIndex:(unsigned long long)arg1 dummyTab:(bool)arg2;
- (void)_loadAllHostTabs;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_nowPlayingDidChange:(id)arg1;
- (void)_updateNowPlayingButtonVisibility;
- (id)bundleID;
- (id)container;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (bool)didFinishInitialLoad;
- (bool)didFinishInitialViewAppear;
- (id)externalDevice;
- (bool)hasCarScreen;
- (id)hostTabBarController;
- (id)initWithBundleID:(id)arg1 model:(id)arg2;
- (void)invalidateAndReloadTabsWithCompletion:(id /* block */)arg1;
- (id)model;
- (id)nowPlayingButton;
- (id)serialQueue;
- (void)setBundleID:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDidFinishInitialLoad:(bool)arg1;
- (void)setDidFinishInitialViewAppear:(bool)arg1;
- (void)setExternalDevice:(id)arg1;
- (void)setHasCarScreen:(bool)arg1;
- (void)setHostTabBarController:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNowPlayingButton:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setTabBarController:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)tabBarController;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleAndTabBarItemsAtIndexes:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)visible;

@end
