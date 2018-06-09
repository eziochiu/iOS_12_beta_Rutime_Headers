/* made by EzioChiu.
 */

@protocol MPCPlayerReorderItemsCommand <MPCPlayerCommand>

@required

- (bool)canMoveItem:(MPCPlayerResponseItem *)arg1;
- (MPCPlayerCommandRequest *)moveItem:(MPCPlayerResponseItem *)arg1 afterItem:(MPCPlayerResponseItem *)arg2;

@end
