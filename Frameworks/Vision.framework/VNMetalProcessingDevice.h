/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNMetalProcessingDevice : VNProcessingDevice {
    <MTLDevice> * _metalDevice;
}

+ (id)allDevices;

- (void).cxx_destruct;
- (id)description;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;
- (id)initWithMetalDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metalDevice;
- (bool)targetsGPU;

@end
