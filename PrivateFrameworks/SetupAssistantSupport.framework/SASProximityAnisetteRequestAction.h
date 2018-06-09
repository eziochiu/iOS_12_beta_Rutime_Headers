/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximityAnisetteRequestAction : SASProximityAction <AKAnisetteServiceProtocol> {
    AKAnisetteData * _anisetteData;
    NSString * _dsid;
    long long  _request;
    bool  _shouldProvision;
    NSData * _sim;
    bool  _success;
}

@property (retain) AKAnisetteData *anisetteData;
@property (retain) NSString *dsid;
@property long long request;
@property bool shouldProvision;
@property (retain) NSData *sim;
@property bool success;

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)anisetteData;
- (id)dsid;
- (void)eraseAnisetteWithCompletion:(id /* block */)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasResponse;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)provisionAnisetteWithCompletion:(id /* block */)arg1;
- (long long)request;
- (id)requestPayload;
- (id)responsePayload;
- (void)setAnisetteData:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setRequest:(long long)arg1;
- (void)setResponseFromData:(id)arg1;
- (void)setShouldProvision:(bool)arg1;
- (void)setSim:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)shouldProvision;
- (id)sim;
- (bool)success;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(id /* block */)arg2;

@end
