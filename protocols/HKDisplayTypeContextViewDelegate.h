/* made by EzioChiu.
 */

@protocol HKDisplayTypeContextViewDelegate <NSObject>

@required

- (void)contextView:(HKDisplayTypeContextView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)contextView:(HKDisplayTypeContextView *)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;

@end
