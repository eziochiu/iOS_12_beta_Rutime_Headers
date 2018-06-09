/* made by EzioChiu.
 */

@protocol CPSPanEventDelegate <NSObject>

@required

- (void)panBeganWithDirection:(unsigned long long)arg1;
- (void)panEndedWithDirection:(unsigned long long)arg1;
- (void)panWithDirection:(unsigned long long)arg1;

@end
