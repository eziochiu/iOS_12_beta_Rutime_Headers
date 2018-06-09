/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioDeviceController : NSObject {
    id  _delegate;
}

@property (nonatomic) id delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (bool)wirelessRouteIsPicked;

@end
