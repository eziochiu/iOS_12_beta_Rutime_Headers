/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFGeolocationPermissionManager : NSObject {
    UIWebGeolocationPolicyDecider * _policyDecider;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(id /* block */)arg4;

@end