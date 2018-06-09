/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMLKitApplication : NSObject <_TVMLKitApplication> {
    bool  _headless;
    NSDictionary * _javaScriptLaunchOptions;
    <UITraitEnvironment> * _keyTraitEnvironment;
    UIWindow * _keyWindow;
    TVApplicationControllerContext * _launchContext;
    IKAppDataStorage * _localDataStorage;
    _TVRootMenuBarController * _menuBarController;
    _TVAppNavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool headless;
@property (nonatomic, copy) NSDictionary *javaScriptLaunchOptions;
@property (nonatomic) <UITraitEnvironment> *keyTraitEnvironment;
@property (nonatomic) UIWindow *keyWindow;
@property (nonatomic) TVApplicationControllerContext *launchContext;
@property (nonatomic) IKAppDataStorage *localDataStorage;
@property (nonatomic) _TVRootMenuBarController *menuBarController;
@property (nonatomic) _TVAppNavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeDocument;
- (id)appIdentifier;
- (bool)appIsPrivileged;
- (bool)appIsTrusted;
- (id)appJSCachePath;
- (id)appJSURL;
- (id)appLaunchParams;
- (id)appLocalJSURL;
- (id)appTraitCollection;
- (id)bagBootURLKey;
- (bool)headless;
- (id)initWithLaunchContext:(id)arg1;
- (id)javaScriptLaunchOptions;
- (id)keyTraitEnvironment;
- (id)keyWindow;
- (id)launchContext;
- (id)localDataStorage;
- (id)localStorage;
- (id)menuBarController;
- (id)navigationController;
- (id)offlineJSURL;
- (void)setHeadless:(bool)arg1;
- (void)setJavaScriptLaunchOptions:(id)arg1;
- (void)setKeyTraitEnvironment:(id)arg1;
- (void)setKeyWindow:(id)arg1;
- (void)setLaunchContext:(id)arg1;
- (void)setLocalDataStorage:(id)arg1;
- (void)setMenuBarController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (bool)shouldIgnoreJSValidation;
- (id)userDefaultsStorage;
- (id)vendorIdentifier;
- (id)vendorStorage;

@end