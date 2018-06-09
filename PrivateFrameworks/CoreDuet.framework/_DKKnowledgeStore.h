/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeDeleting, _DKKnowledgeQuerying, _DKKnowledgeSaving> {
    NSObject<OS_dispatch_queue> * _defaultQueue;
    NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> * _knowledgeStoreHandle;
    _DKPrivacyPolicyEnforcer * _privacyEnforcer;
    _DKRateLimitPolicyEnforcer * _rateLimitEnforcer;
}

@property (retain) NSObject<OS_dispatch_queue> *defaultQueue;
@property (nonatomic, retain) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *knowledgeStoreHandle;
@property (readonly) _DKPrivacyPolicyEnforcer *privacyEnforcer;
@property (readonly) _DKRateLimitPolicyEnforcer *rateLimitEnforcer;

+ (id)_knowledgeStoreWithStoreDirectory:(id)arg1 readOnly:(bool)arg2;
+ (id)knowledgeStore;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2;
+ (id)knowledgeStoreWithDirectReadWriteAccess;
+ (id)userKnowledgeStore;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;

- (void).cxx_destruct;
- (id)_sanitizeObjectsBeforeSaving:(id)arg1;
- (id)defaultQueue;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)deleteObjects:(id)arg1 error:(id*)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)deleteRemoteState:(id*)arg1;
- (id)executeQuery:(id)arg1 error:(id*)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(bool)arg2;
- (id)knowledgeStoreHandle;
- (id)knowledgeSynchronizingHandleWithError:(id*)arg1;
- (id)privacyEnforcer;
- (id)rateLimitEnforcer;
- (bool)saveObjects:(id)arg1 error:(id*)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setDefaultQueue:(id)arg1;
- (void)setKnowledgeStoreHandle:(id)arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
- (id)sourceDeviceIdentityWithError:(id*)arg1;
- (bool)synchronizeWithError:(id*)arg1;
- (bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;

@end
