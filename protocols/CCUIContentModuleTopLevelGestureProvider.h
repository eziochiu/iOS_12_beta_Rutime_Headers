/* made by EzioChiu.
 */

@protocol CCUIContentModuleTopLevelGestureProvider <NSObject>

@optional

- (NSArray *)topLevelBlockingGestureRecognizers;
- (NSArray *)topLevelGestureRecognizers;

@end
