/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFAnalytics : NSObject {
    SFAnalyticsSQLiteStore * _database;
    unsigned int  _disableLogging;
    NSMutableDictionary * _multisamplers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _samplers;
}

@property (nonatomic, retain) SFAnalyticsSQLiteStore *database;

+ (void)addOSVersionToEvent:(id)arg1;
+ (id)databasePath;
+ (id)defaultAnalyticsDatabasePath:(id)arg1;
+ (long long)fuzzyDaysSinceDate:(id)arg1;
+ (id)logger;

- (void).cxx_destruct;
- (id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(id /* block */)arg3;
- (id)addMetricSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(id /* block */)arg3;
- (id)database;
- (id)datePropertyForKey:(id)arg1;
- (id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3;
- (id)existingMetricSamplerForName:(id)arg1;
- (id)existingMultiSamplerForName:(id)arg1;
- (id)init;
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2 oncePerReport:(bool)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSuccessForEventNamed:(id)arg1;
- (id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(id /* block */)arg2;
- (void)noteEventNamed:(id)arg1;
- (void)removeMetricSamplerForName:(id)arg1;
- (void)removeMultiSamplerForName:(id)arg1;
- (void)removeState;
- (void)setDatabase:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;

@end
