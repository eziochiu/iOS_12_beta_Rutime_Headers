/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding> {
    unsigned long long  _credentials;
    NSString * _entitlement;
}

@property (nonatomic, readonly) unsigned long long credentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_errorForCode:(long long)arg1 process:(id)arg2 failedEntitlement:(id)arg3;
+ (id)_processHandleForAuditToken:(id)arg1;
+ (bool)authenticateAuditToken:(id)arg1 forEntitlement:(id)arg2 error:(out id*)arg3;
+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedSystemClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;
+ (bool)validateAuditToken:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (int)_authenticateProcessHandle:(id)arg1 entitlement:(id)arg2 error:(out id*)arg3 withResult:(id /* block */)arg4;
- (bool)authenticateAuditToken:(id)arg1;
- (bool)authenticateAuditToken:(id)arg1 error:(out id*)arg2;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 forEntitlement:(id)arg2 withResult:(id /* block */)arg3;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 withResult:(id /* block */)arg2;
- (bool)authenticateClient:(id)arg1;
- (bool)authenticateClient:(id)arg1 error:(out id*)arg2;
- (int)authenticateClient:(id)arg1 withResult:(id /* block */)arg2;
- (unsigned long long)credentials;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)entitlement;
- (id)init;
- (id)initWithCredentials:(unsigned long long)arg1;
- (id)initWithEntitlement:(id)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
