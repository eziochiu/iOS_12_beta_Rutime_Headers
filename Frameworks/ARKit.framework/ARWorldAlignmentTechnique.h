/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldAlignmentTechnique : ARTechnique {
    long long  _alignment;
    long long  _cameraPosition;
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _deviceOrientationAlignment;
    ARDeviceOrientationData * _deviceOrientationData;
    bool  _deviceOrientationReferenced;
    bool  _imageMirrored;
    long long  _lastTrackingStateReason;
    ARWorldAlignmentData * _relocalizedAlignmentData;
    bool  _relocalizing;
    bool  _trackingReferenced;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) long long cameraPosition;

- (void).cxx_destruct;
- (id)_deviceOrientationPoseData;
- (void)_handleTrackingStateChanges:(id)arg1 initialized:(bool*)arg2 relocalized:(bool*)arg3;
- (void)_referenceDeviceOrientation;
- (id)_worldAlignmentDataWithTrackingData:(id)arg1;
- (long long)alignment;
- (long long)cameraPosition;
- (id)initWithAlignment:(long long)arg1;
- (id)initWithAlignment:(long long)arg1 cameraPosition:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;

@end
