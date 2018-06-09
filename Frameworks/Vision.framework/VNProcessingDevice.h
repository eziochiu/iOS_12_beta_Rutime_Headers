/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (id)defaultCPUDevice;
+ (id)defaultDevice;
+ (id)defaultLabradorDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)arg1;
+ (id)directLabradorDevice;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)metalDevice;
- (bool)targetsCPU;
- (bool)targetsGPU;
- (bool)targetsLabrador;

@end
