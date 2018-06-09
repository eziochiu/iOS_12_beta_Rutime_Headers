/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectorMultiplexer : NSObject {
    NSDictionary * _aggregatorsByType;
    id * _collector;
    HDProfile * _profile;
    NSMapTable * _recordsByAggregator;
}

- (void).cxx_destruct;
- (id)aggregatorForType:(id)arg1;
- (id)identifierForAggregator:(id)arg1;
- (id)initForCollector:(id)arg1 identifier:(id)arg2 state:(id)arg3 profile:(id)arg4 types:(id)arg5;
- (id)lastDatumForType:(id)arg1;
- (id)mergedConfiguration;
- (void)setConfiguration:(id)arg1 forAggregator:(id)arg2;
- (void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2;

@end
