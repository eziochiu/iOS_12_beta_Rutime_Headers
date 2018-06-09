/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLInMemoryCachedStore : PMLTrainingStore {
    PMLTrainingStoredSessionBatch * _cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_openDbIfUnlocked;
- (void)_registerUnlockHandler;
- (id)initWithSessionBatch:(id)arg1;
- (void)loadSessionsForModel:(id)arg1 since:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 ignoreIfSingular:(bool)arg7 block:(id /* block */)arg8;
- (void)storeLogEntryForPlan:(struct NSString { Class x1; }*)arg1 model:(id)arg2 serverIteration:(unsigned long long)arg3 timestamp:(double)arg4;

@end
