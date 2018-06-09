/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPEffectsAnalyzer : NSObject

+ (bool)isAutoLoopFramworkAvailable;

- (int)analyzeAsset:(id)arg1 onDemand:(bool)arg2 cancel:(id /* block */)arg3 results:(id*)arg4;
- (int)enumerateMatchingScenesOfAsset:(id)arg1 forLongExposureUsingBlock:(id /* block */)arg2;
- (id)matchingNodeForSceneClassification:(id)arg1 inSceneNames:(id)arg2;
- (id)performanSceneClassificationOfImageFileAtURL:(id)arg1;

@end
