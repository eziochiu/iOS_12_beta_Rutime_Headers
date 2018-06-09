/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLOpenUserActivityAction : WFLAction {
    NSString * _appBundleIdentifier;
    NSString * _launchOrigin;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly, copy) NSString *launchOrigin;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (void)createActionWithIntent:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)createActionWithUserActivity:(id)arg1 appBundleIdentifier:(id)arg2 launchOrigin:(id)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (Class)implementationClass;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithUserActivity:(id)arg1 userActivityData:(id)arg2 appBundleIdentifier:(id)arg3 launchOrigin:(id)arg4;
- (id)launchOrigin;
- (id)userActivity;

@end
