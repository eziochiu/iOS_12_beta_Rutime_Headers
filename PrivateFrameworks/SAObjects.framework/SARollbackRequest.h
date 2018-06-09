/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *requestId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)rollbackRequest;
+ (id)rollbackRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reason;
- (id)requestId;
- (bool)requiresResponse;
- (void)setReason:(id)arg1;
- (void)setRequestId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (id)siriCore_requestId;
- (void)siriCore_setSessionRequestId:(id)arg1;

@end
