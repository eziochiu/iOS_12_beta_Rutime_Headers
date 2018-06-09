/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFAppAccountInfo : NSObject {
    NSString * _appAuthToken;
    long long  _appAuthTokenStatus;
    NSString * _appServerHost;
    NSString * _dsid;
    NSString * _legacyDsid;
    NSString * _legacyUsername;
    NSString * _username;
}

@property (nonatomic, retain) NSString *appAuthToken;
@property (nonatomic) long long appAuthTokenStatus;
@property (nonatomic, retain) NSString *appServerHost;
@property (nonatomic, retain) NSString *dsid;
@property (nonatomic, retain) NSString *legacyDsid;
@property (nonatomic, retain) NSString *legacyUsername;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)appAuthToken;
- (long long)appAuthTokenStatus;
- (id)appServerHost;
- (id)description;
- (id)dsid;
- (id)legacyDsid;
- (id)legacyUsername;
- (void)setAppAuthToken:(id)arg1;
- (void)setAppAuthTokenStatus:(long long)arg1;
- (void)setAppServerHost:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setLegacyDsid:(id)arg1;
- (void)setLegacyUsername:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
