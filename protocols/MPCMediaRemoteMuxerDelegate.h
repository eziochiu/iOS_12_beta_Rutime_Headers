/* made by EzioChiu.
 */

@protocol MPCMediaRemoteMuxerDelegate <NSObject>

@required

- (void)updateSupportedCommandsForCommandCenter:(MPRemoteCommandCenter *)arg1 muxer:(MPCMediaRemoteMuxer *)arg2 action:(SEL)arg3;

@end
