/* made by EzioChiu.
 */

@protocol SVPlayerItemLoadingStateContext <NFStateMachineContextType>

@required

- (NSError *)error;
- (AVPlayerItem *)item;

@end
