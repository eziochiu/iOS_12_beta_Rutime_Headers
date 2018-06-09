/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiagnosticManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _objects;
}

+ (id)sharedDiagnosticManager;

- (void).cxx_destruct;
- (id)_diagnosticsForKeys:(id)arg1 shouldLog:(bool)arg2;
- (id)_diagnosticsOverview;
- (void)addObject:(id)arg1;
- (id)diagnosticsForKeys:(id)arg1;
- (id)init;
- (void)logAllDiagnostics;
- (void)removeObject:(id)arg1;

@end
