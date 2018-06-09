/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHeartRateDisplayTypeContextResult : NSObject {
    long long  _context;
    HKStatistics * _statistics;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) HKStatistics *statistics;

- (void).cxx_destruct;
- (long long)context;
- (id)debugDescription;
- (id)initWithContext:(long long)arg1 statistics:(id)arg2;
- (void)setContext:(long long)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;

@end
