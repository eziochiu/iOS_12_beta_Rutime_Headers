/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFHealthUIEvent : NSObject <WFAWDEvent> {
    PBCodable * _metric;
    unsigned int  _metricIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PBCodable *metric;
@property (nonatomic) unsigned int metricIdentifier;
@property (readonly) Class superclass;

+ (id)detailEventWithIssues:(id)arg1 ssid:(id)arg2;
+ (id)subtitleEventWithIssues:(id)arg1 ssid:(id)arg2;
+ (id)tapLinkEventWithIssues:(id)arg1 ssid:(id)arg2;

- (void).cxx_destruct;
- (id)initWithEventType:(long long)arg1 issues:(id)arg2 ssid:(id)arg3;
- (id)metric;
- (unsigned int)metricIdentifier;
- (void)setMetric:(id)arg1;
- (void)setMetricIdentifier:(unsigned int)arg1;

@end
