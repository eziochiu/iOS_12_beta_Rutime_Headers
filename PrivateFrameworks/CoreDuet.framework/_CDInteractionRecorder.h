/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {
    NSXPCConnection * _connection;
    bool  _enforceDataLimits;
    bool  _enforcePrivacy;
    _CDInteractionPolicies * _policies;
}

@property bool enforceDataLimits;
@property bool enforcePrivacy;

+ (id)interactionRecorder;

- (void).cxx_destruct;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2;
- (void)countContactsUsingPredicate:(id)arg1 synchronous:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 synchronous:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 synchronous:(bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(bool)arg2 account:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(bool)arg2 domainIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)enforceDataLimits;
- (bool)enforcePrivacy;
- (id)initWithServiceName:(id)arg1;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (void)queryContactsUsingPredicate:(id)arg1 synchronous:(bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (void)queryInteractionsUsingPredicate:(id)arg1 synchronous:(bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (bool)recordInteraction:(id)arg1;
- (bool)recordInteractions:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)recordInteractions:(id)arg1 synchronous:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setEnforceDataLimits:(bool)arg1;
- (void)setEnforcePrivacy:(bool)arg1;

@end
