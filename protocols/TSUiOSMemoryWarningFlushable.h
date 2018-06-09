/* made by EzioChiu.
 */

@protocol TSUiOSMemoryWarningFlushable <NSObject>

@required

- (void)flush;

@optional

- (int)flushCost;
- (int)reloadCost;
- (void)setFlushingManager:(TSUFlushingManager *)arg1;

@end
