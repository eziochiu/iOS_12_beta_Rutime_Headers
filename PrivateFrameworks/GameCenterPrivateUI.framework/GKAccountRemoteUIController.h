/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKAccountRemoteUIController : GKRemoteUIController {
    bool  _authenticatePlayerOnCompletion;
    NSArray * _availableExternalServices;
    long long  _mode;
    NSDictionary * _postBody;
    NSURL * _url;
}

@property (nonatomic) bool authenticatePlayerOnCompletion;
@property (nonatomic, retain) NSArray *availableExternalServices;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NSDictionary *postBody;
@property (nonatomic, retain) NSURL *url;

+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(id /* block */)arg5;

- (bool)authenticatePlayerOnCompletion;
- (id)availableExternalServices;
- (id)bagKey;
- (void)dealloc;
- (id)fallbackURL;
- (void)fireCompletionHandler;
- (id)initWithMode:(long long)arg1;
- (id)initWithMode:(long long)arg1 player:(id)arg2;
- (long long)mode;
- (id)postBody;
- (id)postBodyForInitialLoad;
- (void)setAuthenticatePlayerOnCompletion:(bool)arg1;
- (void)setAvailableExternalServices:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setPostBody:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(id /* block */)arg2;
- (id)url;

@end
