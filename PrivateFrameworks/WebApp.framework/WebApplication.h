/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@interface WebApplication : UIApplication <UIApplicationDelegate> {
    WebAppViewController * _webApp;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_showWebApplicationAtURL:(id)arg1;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (bool)applicationSuspendWithSettings:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1;

@end
