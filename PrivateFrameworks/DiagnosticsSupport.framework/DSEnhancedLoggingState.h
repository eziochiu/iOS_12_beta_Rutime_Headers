/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSEnhancedLoggingState : NSObject {
    NSUserDefaults * _defaults;
    DSEnhancedLoggingStateSnapshot * _snapshot;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) DSEnhancedLoggingStateSnapshot *snapshot;
@property (nonatomic, readonly) NSArray *whitelist;

+ (id)sharedState;

- (void).cxx_destruct;
- (void)beginUpdates;
- (void)commitBatchTransaction:(id)arg1;
- (bool)commitConsentTransaction:(id)arg1;
- (bool)commitDatesTransaction:(id)arg1;
- (bool)commitMetadataTransaction:(id)arg1;
- (bool)commitQueueTransaction:(id)arg1;
- (bool)commitStatusTransaction:(id)arg1;
- (void)connectWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)defaults;
- (void)flush;
- (void)flushWithCompletion:(id /* block */)arg1;
- (void)getBugSessionActivityWithCompletion:(id /* block */)arg1;
- (id)initSingleton;
- (bool)object:(id)arg1 isEqualToObject:(id)arg2;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (void)setDefaults:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;
- (void)transactionWithBlock:(id /* block */)arg1;
- (void)transactionWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)whitelist;
- (id)whitelistEntryForBundleIdentifier:(id)arg1;
- (id)whitelistEntryForParameterName:(id)arg1;

@end
