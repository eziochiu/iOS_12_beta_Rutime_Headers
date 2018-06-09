/* made by EzioChiu.
 */

@protocol TSUFlushable <NSObject>

@required

- (void)flush;

@optional

- (int)flushCost;
- (int)reloadCost;
- (void)setFlushingManager:(OITSUFlushingManager *)arg1;

@end
