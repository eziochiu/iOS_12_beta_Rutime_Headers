/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowThemeViewController : UIViewController <PUViewControllerSpecChangeObserver, UITableViewDataSource, UITableViewDelegate> {
    bool  __needsUpdateBackgroundView;
    bool  __needsUpdateSpec;
    bool  __needsUpdateTableView;
    OKProducerPreset * _currentPreset;
    <PUSlideshowThemeDelegate> * _delegate;
    NSArray * _presets;
    bool  _shouldHideTableViewWhenViewWillDisappear;
    PUSlideshowSettingsViewControllerSpec * _spec;
    UITableView * _tableView;
}

@property (setter=_setNeedsUpdateBackgroundView:, nonatomic) bool _needsUpdateBackgroundView;
@property (setter=_setNeedsUpdateSpec:, nonatomic) bool _needsUpdateSpec;
@property (setter=_setNeedsUpdateTableView:, nonatomic) bool _needsUpdateTableView;
@property (nonatomic, retain) OKProducerPreset *currentPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSlideshowThemeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFinish;
- (void)_didPickPreset:(id)arg1;
- (void)_invalidateBackgroundView;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (bool)_needsUpdate;
- (bool)_needsUpdateBackgroundView;
- (bool)_needsUpdateSpec;
- (bool)_needsUpdateTableView;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBackgroundView:(bool)arg1;
- (void)_setNeedsUpdateSpec:(bool)arg1;
- (void)_setNeedsUpdateTableView:(bool)arg1;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTableViewIfNeeded;
- (id)currentPreset;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)pu_wantsNavigationBarVisible;
- (void)setCurrentPreset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
