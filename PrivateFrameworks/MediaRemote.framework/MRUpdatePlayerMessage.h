/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUpdatePlayerMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (id)initWithPlayerPath:(id)arg1;
- (id)playerPath;
- (unsigned long long)type;

@end
