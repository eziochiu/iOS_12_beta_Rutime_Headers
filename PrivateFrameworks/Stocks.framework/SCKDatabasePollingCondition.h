/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCKDatabasePollingCondition : NSObject {
    double  _minIntervalSinceLastSync;
}

@property (nonatomic, readonly) double minIntervalSinceLastSync;

- (id)initWithMinIntervalSinceLastSync:(double)arg1;
- (double)minIntervalSinceLastSync;

@end
