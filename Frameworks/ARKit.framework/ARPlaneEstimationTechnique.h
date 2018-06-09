/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneEstimationTechnique : ARTechnique {
    struct CV3DVIOSurfaceDetectionRuntimeConfiguration { 
        int desiredOrientations; 
        int desiredExtentType; 
        double minVergenceAngle; 
        bool lineTrackingAlwaysOn; 
    }  _configuration;
    bool  _configured;
    struct CV3DMLModel { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct CV3DMLModelData {} *x2; } * _mlModel;
    ARPlaneEstimationOptions * _options;
    struct CV3DSurfaceDetectionParameters { 
        unsigned int minDetections; 
        unsigned int minimumSupportHorizontal; 
        unsigned int minimumSupportVertical; 
    }  _parameters;
    ARPlaneData * _planeResultData;
    ARRawSceneUnderstandingData * _rawSceneUnderstandingData;
    NSObject<OS_dispatch_semaphore> * _semaphoreResult;
    ARWorldTrackingTechnique * _trackingTechnique;
}

@property (getter=isConfigured) bool configured;
@property (nonatomic, readonly) ARPlaneEstimationOptions *options;
@property (retain) ARWorldTrackingTechnique *trackingTechnique;

+ (id)_detectPlanesWithDetector:(struct CV3DSurfaceDetectionContext { }*)arg1 types:(unsigned long long)arg2 camera:(id)arg3 featurePoints:(id)arg4 inVisionCoordinates:(bool)arg5 singleShot:(bool)arg6;
+ (id)detectPlanes:(unsigned long long)arg1 withFrame:(id)arg2;

- (void).cxx_destruct;
- (void)_sceneUnderstandingCallback:(struct CV3DSceneUnderstandingResult { struct CV3DSceneUnderstandingImage {} *x1; long long x2; }*)arg1 timestamp:(double)arg2;
- (void)_surfacesDetected:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1 timestamp:(double)arg2;
- (void)dealloc;
- (id)initWithTrackingTechnique:(id)arg1 options:(id)arg2;
- (bool)isConfigured;
- (bool)isEqual:(id)arg1;
- (void)loadSurfaceData:(id)arg1;
- (id)options;
- (id)processData:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)resultDataClasses;
- (id)serializeSurfaceData;
- (void)setConfigured:(bool)arg1;
- (void)setTrackingTechnique:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (id)trackingTechnique;

@end
