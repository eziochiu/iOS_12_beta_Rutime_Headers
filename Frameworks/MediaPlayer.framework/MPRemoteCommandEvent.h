/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandEvent : NSObject {
    MPRemoteCommand * _command;
    NSString * _commandID;
    NSString * _contextID;
    NSDictionary * _mediaRemoteOptions;
    double  _timestamp;
}

@property (nonatomic, readonly) MPRemoteCommand *command;
@property (nonatomic, readonly) double timestamp;

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)command;
- (id)commandID;
- (id)contentItemID;
- (id)contextID;
- (id)init;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)mediaRemoteOptions;
- (long long)playbackQueueOffset;
- (double)timestamp;

@end
