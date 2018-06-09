/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUPasswordPickerViewController : UINavigationController {
    id /* block */  _completionHandler;
    NSArray * _domainHintStrings;
    bool  _forUserNamesOnly;
    NSArray * _hintStrings;
    long long  _minimumNumberOfCredentialsToShowLikelyMatchesSection;
    _WBUPasswordPicker * _picker;
    NSString * _prompt;
    NSArray * _serviceNameHintStrings;
    bool  _shouldDismissOnCompletion;
    bool  _shouldShowIcons;
}

@property (nonatomic, readonly, copy) NSArray *domainHintStrings;
@property (nonatomic, readonly) bool forUserNamesOnly;
@property (nonatomic, readonly, copy) NSArray *hintStrings;
@property (nonatomic, readonly) long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic, readonly, copy) NSString *prompt;
@property (nonatomic, readonly, copy) NSArray *serviceNameHintStrings;
@property (nonatomic) bool shouldDismissOnCompletion;
@property (nonatomic, readonly) bool shouldShowIcons;

+ (bool)_preventsAppearanceProxyCustomization;
+ (struct CGSize { double x1; double x2; })preferredIconSize;

- (void).cxx_destruct;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_cancel;
- (void)_pickSavedPassword:(id)arg1;
- (bool)_viewControllerUnderlapsStatusBar;
- (id)backgroundColorForDomain:(id)arg1;
- (void)dealloc;
- (id)domainHintStrings;
- (bool)forUserNamesOnly;
- (id)hintStrings;
- (void)iconDidUpdateForDomain:(id)arg1;
- (id)iconForDomain:(id)arg1;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 appName:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg7 shouldDismissOnCompletion:(bool)arg8 shouldShowIcons:(bool)arg9 completionHandler:(id /* block */)arg10;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg7 shouldDismissOnCompletion:(bool)arg8 shouldShowIcons:(bool)arg9 completionHandler:(id /* block */)arg10;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(bool)arg2 hintStrings:(id)arg3 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg4 shouldDismissOnCompletion:(bool)arg5 completionHandler:(id /* block */)arg6;
- (long long)minimumNumberOfCredentialsToShowLikelyMatchesSection;
- (id)prompt;
- (id)serviceNameHintStrings;
- (void)setShouldDismissOnCompletion:(bool)arg1;
- (bool)shouldDismissOnCompletion;
- (bool)shouldShowIcons;

@end
