/* made by EzioChiu.
 */

@protocol RESectionDelegate <NSObject>

@required

- (void)section:(RESection *)arg1 didInsertElement:(NSString *)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (void)section:(RESection *)arg1 didMoveElement:(NSString *)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4 wantsSubsectionPositionUpdate:(bool)arg5;
- (void)section:(RESection *)arg1 didRemoveElement:(NSString *)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (REElementGroup *)section:(RESection *)arg1 groupForIdentifier:(NSString *)arg2;

@end
