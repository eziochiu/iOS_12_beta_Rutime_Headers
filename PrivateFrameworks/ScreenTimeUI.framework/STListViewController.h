/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STListViewController : PSListController <STGroupSpecifierProviderDelegate> {
    PSSpecifier * _showingPinSpecifier;
    id  _showingPinTarget;
    NSArray * _specifierProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSSpecifier *showingPinSpecifier;
@property (nonatomic, retain) id showingPinTarget;
@property (nonatomic, copy) NSArray *specifierProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserversForSpecifierProvider:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserversForSpecifierProvider:(id)arg1;
- (void)setShowingPinSpecifier:(id)arg1;
- (void)setShowingPinTarget:(id)arg1;
- (void)setSpecifierProviders:(id)arg1;
- (id)showingPinSpecifier;
- (id)showingPinTarget;
- (void)specifierProvider:(id)arg1 reloadSpecifier:(id)arg2 animated:(bool)arg3;
- (void)specifierProvider:(id)arg1 showConfirmationViewForSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 showController:(id)arg2 animated:(bool)arg3;
- (id)specifierProviders;
- (id)specifiers;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)visibleSpecifierProviders;

@end
