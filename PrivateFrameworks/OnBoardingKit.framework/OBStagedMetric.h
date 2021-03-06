/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBStagedMetric : NSObject {
    PBCodable * _metric;
    unsigned int  _metricId;
}

@property (retain) PBCodable *metric;
@property unsigned int metricId;

- (void).cxx_destruct;
- (void)commit;
- (id)initWithMetricID:(unsigned int)arg1 metric:(id)arg2;
- (id)metric;
- (unsigned int)metricId;
- (void)setMetric:(id)arg1;
- (void)setMetricId:(unsigned int)arg1;

@end
