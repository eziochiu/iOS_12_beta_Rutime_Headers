/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebGeolocationPolicyDecider : NSObject {
    NSMapTable * _activeChallenges;
    NSMutableArray * _challenges;
    NSMutableDictionary * _sites;
}

+ (void)initialize;
+ (id)sharedPolicyDecider;

- (void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)_executeNextChallenge;
- (bool)_getAuthorizationStatusForToken:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3;
- (long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2;
- (bool)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3;
- (void)_load;
- (void)_save;
- (id)_siteFile;
- (id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearAllCaches;
- (void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2;
- (void)clearCache;
- (void)dealloc;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)didAuthorizeGeolocationForPromptInfo:(id)arg1;
- (void)didDenyGeolocationForPromptInfo:(id)arg1;
- (bool)getAuthorizationStatusForOrigin:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3;
- (id)init;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;

@end
