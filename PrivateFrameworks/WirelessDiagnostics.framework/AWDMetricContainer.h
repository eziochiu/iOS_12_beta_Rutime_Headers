/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDMetricContainer : NSObject {
    PBCodable * _metric;
    unsigned int  _metricId;
}

@property (nonatomic, retain) PBCodable *metric;
@property (nonatomic, readonly) unsigned int metricId;

- (void).cxx_destruct;
- (id)initWithMetricId:(unsigned int)arg1;
- (id)metric;
- (unsigned int)metricId;
- (void)setMetric:(id)arg1;

@end
