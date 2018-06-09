/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMLightingFrameCache : NSObject {
    NSIndexSet * __availableAbsoluteAngles;
    NSDictionary * __backgroundFrameMapsByLightingType;
    NSMutableDictionary * __foregroundFramesByAvailableAngle;
}

@property (nonatomic, readonly) NSIndexSet *_availableAbsoluteAngles;
@property (nonatomic, retain) NSDictionary *_backgroundFrameMapsByLightingType;
@property (nonatomic, retain) NSMutableDictionary *_foregroundFramesByAvailableAngle;
@property (nonatomic, readonly) unsigned long long angleCount;

- (void).cxx_destruct;
- (id)_appearanceForLightingType:(long long)arg1;
- (id)_availableAbsoluteAngles;
- (id)_backgroundFrameMapsByLightingType;
- (id)_foregroundFramesByAvailableAngle;
- (bool)_needsBackgroundFrame;
- (bool)_needsForegroundFrames;
- (id)_renderBackgroundFramesForAbsoluteAngles:(id)arg1 lightingType:(long long)arg2 scale:(double)arg3;
- (id)_renderForegroundFramesForAbsoluteAngles:(id)arg1 scale:(double)arg2;
- (id)_renderFrameForAngle:(long long)arg1 scale:(double)arg2 components:(long long)arg3 appearance:(id)arg4;
- (unsigned long long)angleCount;
- (long long)angleOfAvailableFrameForAngle:(long long)arg1;
- (id)backgroundFrameForAngle:(long long)arg1 lightingType:(long long)arg2;
- (id)foregroundFrameForAngle:(long long)arg1;
- (id)init;
- (void)preloadBackgroundFrames;
- (void)preloadForegroundFrames;
- (void)set_backgroundFrameMapsByLightingType:(id)arg1;
- (void)set_foregroundFramesByAvailableAngle:(id)arg1;

@end
