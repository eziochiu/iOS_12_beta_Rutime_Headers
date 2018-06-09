/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationConnectionManager : NSObject <NSURLSessionDataDelegate> {
    NSString * _accessToken;
    NSTimer * _accessTokenInvalidationTimer;
    bool  _accessTokenStatus;
    NSURLSession * _defaultSession;
    <HKOrganDonationConnectionManagerDelegate> * _delegate;
    long long  _managerState;
    NSString * _refreshToken;
    NSMapTable * _taskQueue;
    long long  _tokenRefreshRetryCount;
}

@property (nonatomic, retain) NSString *accessToken;
@property (nonatomic) NSTimer *accessTokenInvalidationTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURLSession *defaultSession;
@property (nonatomic) <HKOrganDonationConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *refreshToken;
@property (readonly) Class superclass;

+ (id)_gatewayHost;
+ (id)_host;
+ (long long)_hostConfiguration;
+ (id)_keychainQueryDictionaryForIdentifier:(id)arg1;
+ (bool)_organDonationDisabled;
+ (id)_port;
+ (id)_scheme;
+ (id)_tokenWithIdentifier:(id)arg1 shouldReturnData:(bool)arg2;
+ (bool)hasStoredRegistrant;
+ (bool)isOrganDonationRegistrationAvailable;
+ (void)openDonateLifeMicroSiteInSafari;
+ (void)organDonationSignificantDate:(id /* block */)arg1;
+ (void)refreshOrganDonationFeatureAvailability;
+ (long long)registrationSubmissionHostConfiguration;
+ (bool)shouldShowStoreDemoOrganDonation;
+ (id)storeDemoModeModifiedDate;

- (void).cxx_destruct;
- (id)_base64URLEncoding:(id)arg1;
- (void)_deleteTokenWithIdentifier:(id)arg1;
- (void)_flushTokenDependentRequestsWithStatus:(long long)arg1;
- (id)_genericJSONDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_getRequestWithURL:(id)arg1 bearerToken:(id)arg2;
- (void)_handleServerErrorWithResponse:(id)arg1 originRequest:(id)arg2 payload:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleURLTaskError:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_invalidateAccessToken:(id)arg1;
- (id)_jsonBodyPostRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3 bearerToken:(id)arg4;
- (id)_jsonObjectWithData:(id)arg1 response:(id)arg2;
- (id)_jwtWithPayload:(id)arg1 grantType:(id)arg2;
- (void)_refreshAccessTokenIfNeeded;
- (id)_refreshBearerTokenJWTWithRefreshToken:(id)arg1;
- (id)_registrationJWTWithRegistrant:(id)arg1;
- (void)_scheduleAccessTokenDependentRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_sendQueuedTokenDependentRequests;
- (void)_transitionToState:(long long)arg1;
- (void)_updateAccessTokenAndScheduleInvalidationTimer:(id)arg1 expiresIn:(double)arg2;
- (void)_upsertTokenInKeychain:(id)arg1 identifier:(id)arg2;
- (id)_urlWithPath:(id)arg1;
- (id)accessToken;
- (id)accessTokenInvalidationTimer;
- (void)cleanUp;
- (id)defaultSession;
- (id)delegate;
- (void)deleteRegistrantWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)jwtHeader;
- (id)jwtPayloadWithRegistrant:(id)arg1;
- (void)openRegisterMeSiteInSafariIfAuthenticated;
- (id)payload;
- (void)refreshBearerTokenWithRefreshToken:(id)arg1 completion:(id /* block */)arg2;
- (id)refreshToken;
- (void)reloadRegistrantWithCompletion:(id /* block */)arg1;
- (void)setAccessToken:(id)arg1;
- (void)setAccessTokenInvalidationTimer:(id)arg1;
- (void)setDefaultSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)submitRegistrant:(id)arg1 completion:(id /* block */)arg2;
- (void)updateRegistrantWithParams:(id)arg1 completion:(id /* block */)arg2;

@end
