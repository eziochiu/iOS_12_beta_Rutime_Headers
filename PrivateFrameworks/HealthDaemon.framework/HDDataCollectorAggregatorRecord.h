/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectorAggregatorRecord : NSObject {
    HDDataAggregator * _aggregator;
    HDDataCollectorConfiguration * _configuration;
    bool  _hasSetLastSensorDatum;
    NSString * _identifier;
    <HDCollectedSensorDatum> * _lastSensorDatum;
}

@property (nonatomic, readonly) HDDataAggregator *aggregator;
@property (nonatomic, retain) HDDataCollectorConfiguration *configuration;
@property (nonatomic, readonly) bool hasSetLastSensorDatum;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) <HDCollectedSensorDatum> *lastSensorDatum;

- (void).cxx_destruct;
- (id)aggregator;
- (id)configuration;
- (bool)hasSetLastSensorDatum;
- (id)identifier;
- (id)initWithAggregator:(id)arg1 identifier:(id)arg2;
- (id)lastSensorDatum;
- (void)setConfiguration:(id)arg1;
- (void)setLastSensorDatum:(id)arg1;

@end
