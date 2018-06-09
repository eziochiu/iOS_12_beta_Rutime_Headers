/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {
    BWInferenceVideoFormat * _videoFormat;
}

@property (nonatomic, readonly) BWInferenceVideoFormat *videoFormat;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAttachedMediaKey:(id)arg1;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2;
- (id)initWithVideoRequirement:(id)arg1;
- (bool)isSatisfiedByRequirement:(id)arg1;
- (unsigned long long)satisfactionHash;
- (id)videoFormat;

@end
