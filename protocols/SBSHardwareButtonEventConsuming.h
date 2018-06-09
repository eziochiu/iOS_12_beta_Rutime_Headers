/* made by EzioChiu.
 */

@protocol SBSHardwareButtonEventConsuming <NSObject>

@optional

- (void)consumeAnyPressEventForButtonKind:(long long)arg1;
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeLongPressForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)consumeTriplePressUpForButtonKind:(long long)arg1;

@end