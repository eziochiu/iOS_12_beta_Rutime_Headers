/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPStatisticsTimingToken : NSObject {
    bool  _isTiming;
    NSString * _metricKey;
    unsigned long long  _startTime;
}

- (void).cxx_destruct;
- (id)initWithMetric:(id)arg1;
- (void)stopTiming;

@end
