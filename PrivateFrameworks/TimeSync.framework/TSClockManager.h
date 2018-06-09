/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSClockManager : NSObject {
    NSMutableArray * _clockPersonalities;
    unsigned int  _connection;
    unsigned long long  _machAbsoluteNanosecondClockIdentifier;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebaseInfo;
}

@property (nonatomic, readonly) unsigned long long machAbsoluteNanosecondClockIdentifier;

+ (id)clockManager;
+ (id)defaultClockPersonalities;
+ (id)diagnosticDescriptionForClockService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)arg1;
+ (id)sharedClockManager;
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)arg1;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;

- (void)addClockPersonality:(id)arg1;
- (bool)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int*)arg2 error:(id*)arg3;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(bool)arg4 error:(id*)arg5;
- (bool)addgPTPServicesWithError:(id*)arg1;
- (id)availableClockIdentifiers;
- (id)clockWithClockIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (bool)getMachAbsoluteClockID:(unsigned long long*)arg1 error:(id*)arg2;
- (id)init;
- (unsigned long long)machAbsoluteNanosecondClockIdentifier;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1;
- (bool)nextAvailableDynamicClockID:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)releaseDynamicClockID:(unsigned long long)arg1 error:(id*)arg2;
- (void)removeClockPersonality:(id)arg1;
- (bool)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removegPTPServicesWithError:(id*)arg1;

@end
