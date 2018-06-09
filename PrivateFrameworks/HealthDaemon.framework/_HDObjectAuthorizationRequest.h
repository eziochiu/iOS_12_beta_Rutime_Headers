/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDObjectAuthorizationRequest : NSObject {
    NSArray * _authorizationRecords;
    id /* block */  _completion;
    NSUUID * _identifier;
    NSArray * _samples;
}

@property (nonatomic, retain) NSArray *authorizationRecords;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSArray *samples;
@property (nonatomic, readonly, copy) NSArray *samplesRequiringAuthorization;

- (void).cxx_destruct;
- (id)authorizationRecords;
- (id /* block */)completion;
- (id)identifier;
- (id)initForSamples:(id)arg1 completion:(id /* block */)arg2;
- (void)invokeCompletionHandlerWithAuthorizedSamples:(id)arg1 error:(id)arg2;
- (void)invokeCompletionWithSuccess:(bool)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id)arg4;
- (id)samples;
- (id)samplesRequiringAuthorization;
- (void)setAuthorizationRecords:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
