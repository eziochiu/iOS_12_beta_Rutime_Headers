/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHeartRateIntervalPair : NSObject {
    double  _endInterval;
    double  _startInterval;
}

@property (nonatomic, readonly) double endInterval;
@property (nonatomic, readonly) double startInterval;

- (double)endInterval;
- (id)initWithStartInterval:(double)arg1 endInterval:(double)arg2;
- (double)startInterval;

@end
