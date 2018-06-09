/* made by EzioChiu.
 */

@protocol CPSPanViewDelegate <NSObject>

@required

- (void)panView:(CPSPanView *)arg1 panBeganWithDirection:(unsigned long long)arg2;
- (void)panView:(CPSPanView *)arg1 panEndedWithDirection:(unsigned long long)arg2;
- (void)panView:(CPSPanView *)arg1 panWithDirection:(unsigned long long)arg2;

@end
