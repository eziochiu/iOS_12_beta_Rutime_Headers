/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVolumeConfiguration : NSObject <SVVolumeConfiguration> {
    bool  _muted;
    double  _volume;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool muted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double volume;

- (id)initWithVolume:(double)arg1 muted:(bool)arg2;
- (bool)muted;
- (double)volume;

@end
