/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <UIScrollViewDelegate> {
    bool  _didFirstLayout;
    OBBuddyPaneHeaderView * _headerView;
    NSArray * _identifiers;
    OBPrivacySplashController * _initialSplashController;
    OBPrivacyCombinedTableViewController * _tableViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)arg1;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)updateBackgroundColor;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
