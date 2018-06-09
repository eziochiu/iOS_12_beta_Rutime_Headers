/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATArbitrator : NSObject {
    NSMutableDictionary * mRegistrationByKey;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (void)registerResource:(id)arg1 forKey:(id)arg2;
- (void)registerResource:(id)arg1 forKey:(id)arg2 maxConcurrentCount:(unsigned long long)arg3;
- (id)resourceForKey:(id)arg1 exclusive:(bool)arg2;
- (id)resourcesForKeys:(id)arg1 exclusive:(bool)arg2;
- (void)stopWaiting:(id)arg1;
- (unsigned long long)unregisterResourceForKey:(id)arg1;
- (id)waitForResourcesForKeys:(id)arg1 exclusive:(bool)arg2 delegateQueue:(id)arg3 completionBlock:(id /* block */)arg4;

@end
