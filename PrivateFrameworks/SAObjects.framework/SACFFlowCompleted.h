/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) SACFProvideContext *updateContext;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)flowCompleted;
+ (id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)domain;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDomain:(id)arg1;
- (void)setUpdateContext:(id)arg1;
- (id)updateContext;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)clientFlowCompletedWithRefId:(id)arg1 domain:(id)arg2 status:(long long)arg3 context:(id)arg4 contextVersion:(id)arg5 logs:(id)arg6;
+ (id)failureResponseWithAceId:(id)arg1 logs:(id)arg2;
+ (id)successResponseWithAceId:(id)arg1 logs:(id)arg2;

@end