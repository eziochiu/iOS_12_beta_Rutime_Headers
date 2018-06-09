/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPRadioStation * _radioStation;
}

@property (nonatomic, readonly) MPRadioStation *radioStation;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadioStation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)radioStation;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackContext;

@end
