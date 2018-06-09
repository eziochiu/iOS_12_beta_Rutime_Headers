/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTransportButton : MPButton {
    MPAVController * player;
}

@property (nonatomic, retain) MPAVController *player;

- (void).cxx_destruct;
- (id)_automationID;
- (id)player;
- (void)setPlayer:(id)arg1;

@end
