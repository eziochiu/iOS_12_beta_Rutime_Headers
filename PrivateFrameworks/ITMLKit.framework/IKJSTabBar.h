/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSTabBar : IKJSObject <IKJSTabBar, NSObject, _IKJSTabBar, _IKJSTabBarProxy> {
    IKAppTabBar * _appTabBar;
    NSArray * _tabItems;
}

@property (nonatomic, readonly) IKAppTabBar *appTabBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IKJSTabBarItem *selectedTab;
@property (readonly) Class superclass;
@property (retain) NSArray *tabItems;
@property (nonatomic, readonly) NSArray *tabs;

- (void).cxx_destruct;
- (void)_onSelectSync;
- (void)_setSelectedTabNavigationDocumentOnJSContext:(id)arg1;
- (id)appTabBar;
- (id)asPrivateIKJSTabBar;
- (id)initWithAppContext:(id)arg1 appTabBar:(id)arg2;
- (void)onSelect;
- (id)selectedTab;
- (void)setSelectedTab:(id)arg1;
- (void)setTabItems:(id)arg1;
- (void)setTabs:(id)arg1;
- (id)tabItems;
- (id)tabs;
- (id)transientTab;

@end
