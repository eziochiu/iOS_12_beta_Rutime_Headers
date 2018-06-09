/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARRawSceneUnderstandingData : NSObject <ARResultData> {
    struct CV3DSceneUnderstandingResult { struct CV3DSceneUnderstandingImage {} *x1; long long x2; } * _resultRef;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CV3DSceneUnderstandingResult { struct CV3DSceneUnderstandingImage {} *x1; long long x2; }*resultRef;
@property (nonatomic, readonly) void*sceneUnderstandingResultRef;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void)dealloc;
- (id)initWithTimestamp:(double)arg1 resultRef:(struct CV3DSceneUnderstandingResult { struct CV3DSceneUnderstandingImage {} *x1; long long x2; }*)arg2;
- (struct CV3DSceneUnderstandingResult { struct CV3DSceneUnderstandingImage {} *x1; long long x2; }*)resultRef;
- (void*)sceneUnderstandingResultRef;
- (double)timestamp;

@end
