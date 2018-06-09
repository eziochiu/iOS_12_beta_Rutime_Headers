/* made by EzioChiu.
 */

@protocol NTKTimeView <NSObject>

@required

- (bool)isFrozen;
- (void)setFrozen:(bool)arg1;
- (void)setOverrideDate:(NSDate *)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;

@end
