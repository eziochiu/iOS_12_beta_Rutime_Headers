/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerReorderItemsCommand : _MPCPlayerCommand <MPCPlayerReorderItemsCommand>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canMoveItem:(id)arg1;
- (id)moveItem:(id)arg1 afterItem:(id)arg2;

@end
