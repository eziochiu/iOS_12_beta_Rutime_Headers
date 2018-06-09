/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFrame : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _anchors;
    ARPlaneData * _cachedHorizontalPlaneData;
    NSArray * _cachedPointClouds;
    ARPlaneData * _cachedVerticalPlaneData;
    ARCamera * _camera;
    NSDate * _captureDate;
    AVDepthData * _capturedDepthData;
    double  _capturedDepthDataTimestamp;
    struct __CVBuffer { } * _capturedImage;
    ARFaceData * _faceData;
    ARPointCloud * _featurePoints;
    ARLightEstimate * _lightEstimate;
    ARRawSceneUnderstandingData * _rawSceneUnderstandingData;
    ARPointCloud * _referenceFeaturePoints;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceOriginDelta;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceOriginTransform;
    long long  _renderFramesPerSecond;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _sessionOriginTransform;
    bool  _shouldRestrictFrameRate;
    double  _timestamp;
    ARFrameTimingData * _timingData;
    unsigned long long  _transformFlags;
    struct { 
        long long state; 
        long long reason; 
        bool majorRelocalization; 
        bool minorRelocalization; 
        bool poseGraphUpdated; 
        int vioTrackingState; 
    }  _vioStateInformation;
    long long  _worldAlignment;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldAlignmentTransform;
    long long  _worldMappingStatus;
    ARWorldTrackingErrorData * _worldTrackingErrorData;
    NSDictionary * _worldTrackingStateDetails;
}

@property (nonatomic, copy) NSArray *anchors;
@property (nonatomic, retain) NSArray *cachedPointClouds;
@property (nonatomic, readonly, copy) ARCamera *camera;
@property (nonatomic, retain) NSDate *captureDate;
@property (nonatomic, retain) AVDepthData *capturedDepthData;
@property (nonatomic) double capturedDepthDataTimestamp;
@property (nonatomic) struct __CVBuffer { }*capturedImage;
@property (nonatomic, retain) ARFaceData *faceData;
@property (nonatomic, retain) ARPointCloud *featurePoints;
@property (nonatomic, retain) ARLightEstimate *lightEstimate;
@property (nonatomic, readonly) ARPointCloud *rawFeaturePoints;
@property (nonatomic, retain) ARRawSceneUnderstandingData *rawSceneUnderstandingData;
@property (nonatomic, retain) ARPointCloud *referenceFeaturePoints;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginDelta;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic) long long renderFramesPerSecond;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } sessionOriginTransform;
@property (nonatomic) bool shouldRestrictFrameRate;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, retain) ARFrameTimingData *timingData;
@property (nonatomic) struct { long long x1; long long x2; bool x3; bool x4; bool x5; int x6; } vioStateInformation;
@property (nonatomic) long long worldAlignment;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldAlignmentTransform;
@property (nonatomic) long long worldMappingStatus;
@property (nonatomic, retain) ARWorldTrackingErrorData *worldTrackingErrorData;
@property (nonatomic, copy) NSDictionary *worldTrackingStateDetails;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_hitTestEstimatedPlanesFromOrigin:(void *)arg1 withDirection:(void *)arg2 planeAlignment:(void *)arg3; // needs 3 arg types, found 1: long long
- (id)_hitTestFromOrigin:(void *)arg1 withDirection:(void *)arg2 types:(void *)arg3; // needs 3 arg types, found 1: unsigned long long
- (id)_horizontalPlaneEstimateFromFeaturePointfromOriginwithDirection;
- (id)anchors;
- (id)cachedPointClouds;
- (id)camera;
- (id)captureDate;
- (id)capturedDepthData;
- (double)capturedDepthDataTimestamp;
- (struct __CVBuffer { }*)capturedImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })displayTransformForOrientation:(long long)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)faceData;
- (id)featurePoints;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })gravityAlignedReferenceOriginTransform;
- (unsigned long long)hash;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 types:(unsigned long long)arg2;
- (id)initWithCamera:(id)arg1 timestamp:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lightEstimate;
- (id)rawFeaturePoints;
- (id)rawSceneUnderstandingData;
- (id)referenceFeaturePoints;
- (bool)referenceOriginChanged;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginDelta;
- (bool)referenceOriginDeltaAvailable;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (bool)referenceOriginTransformAvailable;
- (bool)referenceOriginTransformUpdated;
- (long long)renderFramesPerSecond;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })sessionOriginTransform;
- (bool)sessionOriginTransformAvailable;
- (void)setAnchors:(id)arg1;
- (void)setCachedPointClouds:(id)arg1;
- (void)setCaptureDate:(id)arg1;
- (void)setCapturedDepthData:(id)arg1;
- (void)setCapturedDepthDataTimestamp:(double)arg1;
- (void)setCapturedImage:(struct __CVBuffer { }*)arg1;
- (void)setFaceData:(id)arg1;
- (void)setFeaturePoints:(id)arg1;
- (void)setLightEstimate:(id)arg1;
- (void)setRawSceneUnderstandingData:(id)arg1;
- (void)setReferenceFeaturePoints:(id)arg1;
- (void)setReferenceOriginChanged:(bool)arg1;
- (void)setReferenceOriginDelta:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setReferenceOriginTransformUpdated:(bool)arg1;
- (void)setRenderFramesPerSecond:(long long)arg1;
- (void)setSessionOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setShouldRestrictFrameRate:(bool)arg1;
- (void)setTimingData:(id)arg1;
- (void)setVioStateInformation:(struct { long long x1; long long x2; bool x3; bool x4; bool x5; int x6; })arg1;
- (void)setWorldAlignment:(long long)arg1;
- (void)setWorldAlignmentTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldMappingStatus:(long long)arg1;
- (void)setWorldTrackingErrorData:(id)arg1;
- (void)setWorldTrackingStateDetails:(id)arg1;
- (bool)shouldRestrictFrameRate;
- (double)timestamp;
- (id)timingData;
- (struct { long long x1; long long x2; bool x3; bool x4; bool x5; int x6; })vioStateInformation;
- (long long)worldAlignment;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldAlignmentTransform;
- (bool)worldAlignmentTransformAvailable;
- (long long)worldMappingStatus;
- (id)worldTrackingErrorData;
- (id)worldTrackingStateDetails;

@end
