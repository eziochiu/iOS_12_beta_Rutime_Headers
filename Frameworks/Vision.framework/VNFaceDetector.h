/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)detectorClassForConfigurationOptions:(id)arg1;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (bool)shouldDumpDebugIntermediates;

- (void)purgeIntermediates;

@end
