/* made by EzioChiu.
 */

@protocol _SFBarManagerDelegate <NSObject>

@optional

- (bool)barManager:(_SFBarManager *)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didRecieveLongPressForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didRecieveTapForBarItem:(long long)arg2;

@end
