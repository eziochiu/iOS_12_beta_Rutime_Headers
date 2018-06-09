/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPurchaseCommand : MPRemoteCommand {
    long long  _state;
}

@property (nonatomic) long long state;

- (id)_mediaRemoteCommandInfoOptions;
- (void)setState:(long long)arg1;
- (long long)state;

@end
