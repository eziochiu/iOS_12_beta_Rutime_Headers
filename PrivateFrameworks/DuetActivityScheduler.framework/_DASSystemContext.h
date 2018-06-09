/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASSystemContext : NSObject {
    <_CDLocalContext> * _context;
    NSObject<OS_os_log> * _dasSystemContextLog;
    long long  _inexpensiveNetworkPathStatus;
    long long  _networkPathStatus;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (nonatomic, retain) NSObject<OS_os_log> *dasSystemContextLog;
@property (nonatomic) long long inexpensiveNetworkPathStatus;
@property (nonatomic) long long networkPathStatus;

+ (id)initWithContext:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowDiscretionaryWorkForBackgroundTask:(id)arg1 withParameters:(id)arg2;
- (bool)allowDiscretionaryWorkForUtilityTask:(id)arg1 withParameters:(id)arg2;
- (bool)allowsDiscretionaryWorkForTask:(id)arg1 withPriority:(unsigned long long)arg2 withParameters:(id)arg3;
- (id)context;
- (id)dasSystemContextLog;
- (long long)inexpensiveNetworkPathStatus;
- (id)init;
- (bool)isInexpensiveNetworkAvailable;
- (bool)isNetworkAvailable;
- (long long)networkPathStatus;
- (void)setContext:(id)arg1;
- (void)setDasSystemContextLog:(id)arg1;
- (void)setInexpensiveNetworkPathStatus:(long long)arg1;
- (void)setNetworkPathStatus:(long long)arg1;

@end
