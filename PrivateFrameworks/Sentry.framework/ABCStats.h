/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
 */

@interface ABCStats : NSObject {
    NSMutableDictionary * _abcStats;
    NSMutableDictionary * _appStats;
    NSDate * _initializedTimestamp;
    NSObject<OS_os_log> * _logHandle;
    NSMutableDictionary * _scenarioGroupStats;
    NSMutableDictionary * _scenarioIdStats;
    NSObject<OS_dispatch_source> * _source;
}

@property (retain) NSMutableDictionary *abcStats;
@property (retain) NSMutableDictionary *appStats;
@property (retain) NSDate *initializedTimestamp;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSMutableDictionary *scenarioGroupStats;
@property (retain) NSMutableDictionary *scenarioIdStats;
@property (retain) NSObject<OS_dispatch_source> *source;

- (void).cxx_destruct;
- (id)abcStats;
- (id)appStats;
- (void)armTimer;
- (long long)counterValue:(id)arg1 :(id)arg2;
- (void)incrementCounter:(id)arg1 :(id)arg2;
- (id)init;
- (id)initializedTimestamp;
- (id)logHandle;
- (void)printStats:(bool)arg1;
- (id)scenarioGroupStats;
- (id)scenarioIdStats;
- (void)setAbcStats:(id)arg1;
- (void)setAppStats:(id)arg1;
- (void)setInitializedTimestamp:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setScenarioGroupStats:(id)arg1;
- (void)setScenarioIdStats:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
