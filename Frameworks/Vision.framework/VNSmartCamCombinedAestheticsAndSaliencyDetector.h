/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector

- (id)_classifyAesthetics:(bool)arg1 generateSaliencyHeatMap:(bool)arg2 for32BGRAImageInPixelBuffer:(struct __CVBuffer { }*)arg3 withOptions:(id)arg4 modelInputImageSize:(struct CGSize { double x1; double x2; })arg5 originalImageSize:(struct CGSize { double x1; double x2; })arg6 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 warningRecorder:(id)arg8 error:(id*)arg9;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
