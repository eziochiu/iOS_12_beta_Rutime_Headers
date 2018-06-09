/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDClientAuthorizationOracle : NSObject {
    HDXPCClient * _client;
    bool  _clientHasPrivateEntitlement;
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (id)additionalAuthorizationPredicateForObjectType:(id)arg1 error:(id*)arg2;
- (id)client;
- (id)filteredObjectsForReadAuthorization:(id)arg1 anchor:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithClient:(id)arg1 profile:(id)arg2;
- (id)profile;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2;

@end
