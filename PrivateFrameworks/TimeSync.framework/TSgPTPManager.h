/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPManager : NSObject {
    unsigned int  _connection;
    TSgPTPClock * _systemDomain;
    unsigned long long  _systemDomainClockIdentifier;
    NSObject<OS_dispatch_queue> * _systemDomainQueue;
}

@property (nonatomic, readonly, retain) TSgPTPClock *systemDomain;
@property (nonatomic, readonly) unsigned long long systemDomainClockIdentifier;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)arg1;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1;

- (bool)addDomain:(unsigned long long*)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;
- (bool)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (id)systemDomain;
- (unsigned long long)systemDomainClockIdentifier;

@end
