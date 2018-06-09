/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVApplicationController : NSObject <IKAppContextInspectorDelegate, IKAppDeviceConfig, _TVAppNavigationControllerDelegate> {
    IKAppContext * _appContext;
    IKAppDataStorage * _appLocalStorage;
    _TVMLKitApplication * _application;
    _TVApplicationInspector * _applicationInspector;
    TVApplicationControllerContext * _context;
    <TVApplicationControllerDelegate> * _delegate;
    bool  _doLaunchOpenURLHandling;
    long long  _interfaceOrientation;
    <UITraitEnvironment> * _keyTraitEnvironment;
    NSDictionary * _launchOpenURLOptions;
    _TVRootMenuBarController * _menuBarController;
    _TVAppNavigationController * _navigationController;
    NSDictionary * _openURLReloadOptions;
    NSDictionary * _openURLResumeOptions;
    bool  _popViewControllerOnBackground;
    bool  _reloadInProgress;
    bool  _reloadOnResume;
    NSDate * _reloadOnResumeBackgroundedDate;
    double  _reloadOnResumeMinInterval;
    NSXPCListener * _serviceListener;
    bool  _suspended;
    IKAppTabBar * _tabBar;
    UIWindow * _window;
}

@property (nonatomic, readonly) UINavigationController *_currentNavigationController;
@property (nonatomic, readonly) TVApplicationControllerContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TVApplicationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UITraitEnvironment> *keyTraitEnvironment;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic) UIView *viewServiceKeyView;
@property (nonatomic, readonly) UIWindow *window;

+ (id)_jsLaunchOptionsWithApplicationOptions:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_appContext;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (id)_currentNavigationController;
- (bool)_hasReloadOnResumeMinIntervalPassed;
- (void)_launchApp;
- (void)_openURLControllerDidDisplay:(id)arg1;
- (void)_openURLControllerHandler:(bool)arg1;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)arg1;
- (void)_reloadControllerDidDisplay:(id)arg1;
- (bool)_shouldReloadOnResume;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (id)activeDocument;
- (void)appContext:(id)arg1 didChangeInspectElementMode:(bool)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (bool)appContext:(id)arg1 highlightViewForElement:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6;
- (bool)appContext:(id)arg1 highlightViewsForElements:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (bool)appNavigationController:(id)arg1 shouldDismissShroudForDocument:(id)arg2;
- (bool)appNavigationController:(id)arg1 shouldIgnoreDismissalForViewController:(id)arg2;
- (bool)appNavigationController:(id)arg1 shouldOverrideModalBehaviorForDocument:(id)arg2 andExistingDocument:(id)arg3;
- (void)applicationDidResume:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (bool)cancelHighlightViewForAppContext:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluateInJavaScriptContext:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3;
- (bool)isTimeZoneSet;
- (bool)jsOpenURL:(id)arg1 options:(id)arg2;
- (id)keyTraitEnvironment;
- (id)modalControllerForContext:(id)arg1;
- (id)navigationController;
- (id)navigationControllerForContext:(id)arg1;
- (bool)openURL:(id)arg1 options:(id)arg2;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (void)reload;
- (id)rootViewController;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setKeyTraitEnvironment:(id)arg1;
- (void)setViewServiceKeyView:(id)arg1;
- (void)stop;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (id)tabBarForContext:(id)arg1;
- (id)timeZone;
- (id)viewServiceKeyView;
- (id)window;

@end
