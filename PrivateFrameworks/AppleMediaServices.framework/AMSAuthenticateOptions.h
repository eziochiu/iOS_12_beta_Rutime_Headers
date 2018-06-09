/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthenticateOptions : NSObject <NSCopying> {
    bool  _allowSecondaryCredentialSource;
    bool  _allowServerDialogs;
    unsigned long long  _authenticationType;
    NSDictionary * _createAccountQueryParams;
    unsigned long long  _credentialSource;
    NSString * _defaultButtonString;
    NSString * _logKey;
    NSString * _mediaType;
    id  _presentingViewController;
    NSString * _promptTitle;
    NSString * _proxyAppBundleID;
    NSString * _proxyAppName;
    NSString * _reason;
    bool  _remoteProxyAuthentication;
    NSString * _userAgent;
}

@property (nonatomic) bool allowSecondaryCredentialSource;
@property (nonatomic) bool allowServerDialogs;
@property (nonatomic, readonly) bool allowSilentAuthentication;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic, retain) NSDictionary *createAccountQueryParams;
@property (nonatomic) unsigned long long credentialSource;
@property (nonatomic, retain) NSString *defaultButtonString;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic, readonly) NSDictionary *optionsDictionaryForRemoteProxyAuthentication;
@property (nonatomic, retain) id presentingViewController;
@property (nonatomic, retain) NSString *promptTitle;
@property (nonatomic, retain) NSString *proxyAppBundleID;
@property (nonatomic, retain) NSString *proxyAppName;
@property (nonatomic, retain) NSString *reason;
@property (getter=isRemoteProxyAuthentication, nonatomic, readonly) bool remoteProxyAuthentication;
@property (nonatomic, retain) NSString *userAgent;

- (void).cxx_destruct;
- (bool)allowSecondaryCredentialSource;
- (bool)allowServerDialogs;
- (bool)allowSilentAuthentication;
- (unsigned long long)authenticationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAccountQueryParams;
- (unsigned long long)credentialSource;
- (id)defaultButtonString;
- (id)description;
- (id)init;
- (id)initWithOptionsDictionary:(id)arg1;
- (bool)isRemoteProxyAuthentication;
- (id)logKey;
- (id)mediaType;
- (id)optionsDictionary;
- (id)optionsDictionaryForRemoteProxyAuthentication;
- (id)presentingViewController;
- (id)promptTitle;
- (id)proxyAppBundleID;
- (id)proxyAppName;
- (id)reason;
- (void)setAllowSecondaryCredentialSource:(bool)arg1;
- (void)setAllowServerDialogs:(bool)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setCreateAccountQueryParams:(id)arg1;
- (void)setCredentialSource:(unsigned long long)arg1;
- (void)setDefaultButtonString:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPromptTitle:(id)arg1;
- (void)setProxyAppBundleID:(id)arg1;
- (void)setProxyAppName:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end
