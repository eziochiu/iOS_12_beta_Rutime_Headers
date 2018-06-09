/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookAuthenticationWebViewController : MSCLOAuthWebViewController {
    NSString * _clientID;
    NSArray * _writePermissions;
}

@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly, copy) NSArray *writePermissions;

+ (id)_authenticationURLWithClientID:(id)arg1 permissions:(id)arg2;
+ (id)authTokenFromRedirectURL:(id)arg1;

- (void).cxx_destruct;
- (id)clientID;
- (id)initWithClientID:(id)arg1 writePermissions:(id)arg2;
- (id)writePermissions;

@end
