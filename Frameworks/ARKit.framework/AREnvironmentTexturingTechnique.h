/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface AREnvironmentTexturingTechnique : ARTechnique <AREnvironmentTextureProvider> {
    ARCubemapGenerator * _cubemapGenerator;
    NSObject<OS_dispatch_queue> * _cubemapQueue;
    bool  _isReady;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastCameraTransform;
    ARImageData * _lastImageData;
    NSObject<OS_dispatch_queue> * _planeUpdateQueue;
    ARPlaneWorld * _planeWorld;
    AREnvironmentProbeManager * _probeManager;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    long long  _texturingMode;
}

@property bool isReady;
@property (retain) AREnvironmentProbeManager *probeManager;

- (void).cxx_destruct;
- (void)environmentTextureWithTransform:(void *)arg1 extent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 2: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, id /* block */
- (id)initWithOptions:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReady;
- (id)probeManager;
- (id)processData:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (void)setIsReady:(bool)arg1;
- (void)setProbeManager:(id)arg1;
- (void)updateTextureForPlanes:(id)arg1 imageData:(id)arg2 poseData:(id)arg3;

@end
