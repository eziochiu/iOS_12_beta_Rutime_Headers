/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipIntervalCommand : MPRemoteCommand {
    NSArray * _preferredIntervals;
}

@property (nonatomic, copy) NSArray *preferredIntervals;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithInterval:(double)arg1;
- (id)preferredIntervals;
- (void)setPreferredIntervals:(id)arg1;

@end
