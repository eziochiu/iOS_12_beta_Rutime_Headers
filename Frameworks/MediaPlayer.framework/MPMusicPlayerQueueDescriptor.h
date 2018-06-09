/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding> {
    NSDictionary * _endTimes;
    long long  _repeatType;
    long long  _shuffleType;
    NSDictionary * _startTimes;
}

@property (nonatomic, readonly) NSDictionary *endTimes;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long shuffleType;
@property (nonatomic, readonly) NSDictionary *startTimes;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2;
- (void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimes;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)repeatType;
- (void)setRepeatType:(long long)arg1;
- (void)setShuffleType:(long long)arg1;
- (long long)shuffleType;
- (id)startTimes;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackContext;

@end
