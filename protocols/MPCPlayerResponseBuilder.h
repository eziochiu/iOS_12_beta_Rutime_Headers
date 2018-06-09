/* made by EzioChiu.
 */

@protocol MPCPlayerResponseBuilder <NSObject>

@required

- (MPCMediaRemoteController *)controller:(MPCMediaRemoteController *)arg1 chain:(MPMiddlewareChain *)arg2;
- (bool)playerCommandEnabled:(bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (id)playerCommandOptionValue:(id)arg1 forKey:(NSString *)arg2 command:(unsigned int)arg3 chain:(MPMiddlewareChain *)arg4;
- (bool)playerCommandSupported:(bool)arg1 command:(unsigned int)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })playerItemDuration:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (bool)playerItemIsPlaceholder:(bool)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (MPModelGenericObject *)playerModelObject:(MPModelGenericObject *)arg1 propertySet:(MPPropertySet *)arg2 atIndexPath:(NSIndexPath *)arg3 chain:(MPMiddlewareChain *)arg4;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(MPMiddlewareChain *)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSIndexPath *)playerPlayingItemIndexPath:(NSIndexPath *)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerState:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
- (UIView<MPCVideoView> *)playerVideoView:(UIView<MPCVideoView> *)arg1 chain:(MPMiddlewareChain *)arg2;
- (NSString *)tracklistUniqueIdentifier:(NSString *)arg1 chain:(MPMiddlewareChain *)arg2;

@end
