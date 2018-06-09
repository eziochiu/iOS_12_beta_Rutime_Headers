/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkEventStats : NSObject {
    unsigned long long  _count;
    unsigned long long  _max;
    unsigned long long  _mean;
    unsigned long long  _median;
    unsigned long long  _min;
    unsigned long long  _percentile95;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long mean;
@property (nonatomic) unsigned long long median;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long percentile95;

- (unsigned long long)count;
- (id)initWithValues:(id)arg1;
- (unsigned long long)max;
- (unsigned long long)mean;
- (unsigned long long)median;
- (unsigned long long)min;
- (unsigned long long)percentile95;
- (void)setCount:(unsigned long long)arg1;
- (void)setMax:(unsigned long long)arg1;
- (void)setMean:(unsigned long long)arg1;
- (void)setMedian:(unsigned long long)arg1;
- (void)setMin:(unsigned long long)arg1;
- (void)setPercentile95:(unsigned long long)arg1;

@end
