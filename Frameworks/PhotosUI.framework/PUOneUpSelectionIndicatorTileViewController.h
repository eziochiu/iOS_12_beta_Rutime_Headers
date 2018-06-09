/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpSelectionIndicatorTileViewController : PUTileViewController <PXChangeObserver> {
    UIButton * __button;
    bool  __buttonVisible;
    bool  __needsUpdateButton;
    bool  __performingChanges;
    PUAssetActionManager * _actionManager;
    PUAssetReference * _assetReference;
    PUBrowsingViewModel * _browsingViewModel;
}

@property (setter=_setButton:, nonatomic, retain) UIButton *_button;
@property (getter=_isButtonVisible, setter=_setButtonVisible:, nonatomic) bool _buttonVisible;
@property (setter=_setNeedsUpdateButton:, nonatomic) bool _needsUpdateButton;
@property (getter=_isPerformingChanges, setter=_setPerformingChanges:, nonatomic) bool _performingChanges;
@property (nonatomic, retain) PUAssetActionManager *actionManager;
@property (nonatomic, retain) PUAssetReference *assetReference;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_button;
- (void)_handleButton:(id)arg1;
- (void)_invalidateButton;
- (bool)_isButtonVisible;
- (bool)_isPerformingChanges;
- (bool)_needsUpdate;
- (bool)_needsUpdateButton;
- (id)_reviewActionManager;
- (id)_selectionManager;
- (void)_setButton:(id)arg1;
- (void)_setButtonVisible:(bool)arg1;
- (void)_setButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateButton:(bool)arg1;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_updateButtonIfNeeded;
- (void)_updateIfNeeded;
- (id)actionManager;
- (id)assetReference;
- (void)becomeReusable;
- (id)browsingViewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)setActionManager:(id)arg1;
- (void)setAssetReference:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)viewDidLoad;

@end