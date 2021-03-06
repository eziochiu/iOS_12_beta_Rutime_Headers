/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceVideoFormat : NSObject <NSCopying> {
    bool  _deviceOriented;
    BWVideoFormat * _underlyingVideoFormat;
    long long  _videoContentMode;
}

@property (nonatomic, readonly) int colorSpaceProperties;
@property (nonatomic, readonly) bool deviceOriented;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic, readonly) unsigned int pixelFormat;
@property (nonatomic, readonly) BWVideoFormat *underlyingVideoFormat;
@property (nonatomic, readonly) long long videoContentMode;
@property (nonatomic, readonly) unsigned long long width;

+ (id)formatByResolvingRequirements:(id)arg1;

- (int)colorSpaceProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)deviceOriented;
- (unsigned long long)hash;
- (unsigned long long)height;
- (id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(bool)arg2 videoContentMode:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)pixelBufferAttributes;
- (unsigned int)pixelFormat;
- (id)underlyingVideoFormat;
- (long long)videoContentMode;
- (unsigned long long)width;

@end
