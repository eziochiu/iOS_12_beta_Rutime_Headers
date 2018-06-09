/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, retain) SAAceClientState *attemptedClientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getSingleClientStateFailed;
+ (id)getSingleClientStateFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSingleClientStateFailedWithErrorCode:(long long)arg1;
+ (id)getSingleClientStateFailedWithReason:(id)arg1;

- (id)attemptedClientState;
- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)initWithErrorCode:(long long)arg1;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (bool)requiresResponse;
- (void)setAttemptedClientState:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setReason:(id)arg1;

@end
