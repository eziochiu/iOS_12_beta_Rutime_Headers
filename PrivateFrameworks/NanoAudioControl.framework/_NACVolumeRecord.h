/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface _NACVolumeRecord : NSObject <NSSecureCoding> {
    float  _EUVolumeLimit;
    bool  _muted;
    NSMutableSet * _observers;
    bool  _volumeControlAvailable;
    float  _volumeValue;
    bool  _volumeWarningEnabled;
}

@property (nonatomic) float EUVolumeLimit;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, readonly) NSMutableSet *observers;
@property (getter=isVolumeControlAvailable, nonatomic) bool volumeControlAvailable;
@property (nonatomic) float volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic) bool volumeWarningEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (id)observers;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeWarningEnabled:(bool)arg1;
- (float)volumeValue;

@end
