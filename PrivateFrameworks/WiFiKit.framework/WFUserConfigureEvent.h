/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFUserConfigureEvent : NSObject <WFAWDEvent> {
    PBCodable * _metric;
    unsigned int  _metricIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PBCodable *metric;
@property (nonatomic) unsigned int metricIdentifier;
@property (readonly) Class superclass;

+ (id)configureEventWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3;

- (void).cxx_destruct;
- (unsigned int)_metricIdForType:(long long)arg1;
- (id)initWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3;
- (id)metric;
- (unsigned int)metricIdentifier;
- (void)setMetric:(id)arg1;
- (void)setMetricIdentifier:(unsigned int)arg1;

@end
