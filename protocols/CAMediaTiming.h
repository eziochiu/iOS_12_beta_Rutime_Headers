/* made by EzioChiu.
 */

@protocol CAMediaTiming

@required

- (bool)autoreverses;
- (double)beginTime;
- (double)duration;
- (NSString *)fillMode;
- (float)repeatCount;
- (double)repeatDuration;
- (void)setAutoreverses:(bool)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFillMode:(NSString *)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (float)speed;
- (double)timeOffset;

@end
