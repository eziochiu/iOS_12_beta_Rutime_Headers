/* made by EzioChiu.
 */

@protocol BKDevicePearlDelegate <NSObject>

@optional

- (void)device:(BKDevice *)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(BKDevice *)arg1 pearlStateChanged:(long long)arg2;

@end
