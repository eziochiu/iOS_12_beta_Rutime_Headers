/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements {
    bool  _deviceOriented;
    long long  _videoContentMode;
}

@property (nonatomic) bool deviceOriented;
@property (nonatomic) long long videoContentMode;

+ (id)defaultEspressoFormatRequirementsWithWidth:(long long)arg1 height:(long long)arg2;

- (bool)deviceOriented;
- (void)setDeviceOriented:(bool)arg1;
- (void)setVideoContentMode:(long long)arg1;
- (long long)videoContentMode;

@end
