/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationResult : NSObject {
    NSURL * _URL;
    LSAppLink * _appLink;
    LSApplicationProxy * _externalApplication;
    long long  _externalApplicationCategory;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) LSAppLink *appLink;
@property (nonatomic, readonly) bool appliesOneTimeUserInitiatedActionPolicy;
@property (nonatomic, readonly) LSApplicationProxy *externalApplication;
@property (nonatomic, readonly) long long externalApplicationCategory;
@property (nonatomic, readonly) bool isRedirectToAppStore;
@property (nonatomic, readonly) long long type;

+ (id)resultOfLoadingRequest:(id)arg1 isMainFrame:(bool)arg2 disallowRedirectToExternalApps:(bool)arg3 preferredApplicationBundleIdentifier:(id)arg4;
+ (id)resultOfType:(long long)arg1 withURL:(id)arg2;
+ (id)resultWithAppLink:(id)arg1;
+ (id)resultWithRedirectToExternalURL:(id)arg1 preferredApplicationBundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3 appLink:(id)arg4;
- (id)appLink;
- (bool)appliesOneTimeUserInitiatedActionPolicy;
- (id)externalApplication;
- (long long)externalApplicationCategory;
- (bool)isRedirectToAppStore;
- (bool)shouldPromptWithPolicy:(long long)arg1 telephonyNavigationPolicy:(id)arg2 userAction:(id)arg3;
- (long long)type;

@end
