/* made by EzioChiu.
 */

@protocol REElementQueueDelegate <NSObject>

@required

- (void)elementQueue:(REElementQueue *)arg1 didInsertElement:(NSString *)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (void)elementQueue:(REElementQueue *)arg1 didMoveElement:(NSString *)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4 wantsSubsectionPositionUpdate:(bool)arg5;
- (void)elementQueue:(REElementQueue *)arg1 didRemoveElement:(NSString *)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;

@end
