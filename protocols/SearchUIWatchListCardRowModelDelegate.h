/* made by EzioChiu.
 */

@protocol SearchUIWatchListCardRowModelDelegate

@required

- (void)didUpdateRowModel:(SearchUIWatchListCardRowModel *)arg1 withText:(NSString *)arg2 buttonState:(long long)arg3;
- (void)didUpdateRowModel:(SearchUIWatchListCardRowModel *)arg1 withText:(NSString *)arg2 buttonState:(long long)arg3 image:(SFImage *)arg4;

@end
