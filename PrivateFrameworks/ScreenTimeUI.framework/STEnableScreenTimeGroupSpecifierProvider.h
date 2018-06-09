/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {
    UIViewController * _rootViewController;
    PSSpecifier * _setupScreenTimeSpecifier;
}

@property (retain) UIViewController *rootViewController;
@property (retain) PSSpecifier *setupScreenTimeSpecifier;

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)rootViewController;
- (void)saveValuesForModel:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setSetupScreenTimeSpecifier:(id)arg1;
- (void)setupScreenTime:(id)arg1;
- (id)setupScreenTimeSpecifier;

@end
