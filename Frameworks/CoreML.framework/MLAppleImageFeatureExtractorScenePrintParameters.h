/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLAppleImageFeatureExtractorScenePrintParameters : NSObject {
    long long  _scenePrintVersion;
}

@property long long scenePrintVersion;

- (id)initWithSpec:(const struct VisionFeaturePrint { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; union VisionFeaturePrintTypeUnion { struct VisionFeaturePrint_Scene {} *x_3_1_1; } x3; int x4; unsigned int x5[1]; }*)arg1 error:(id*)arg2;
- (long long)scenePrintVersion;
- (void)setScenePrintVersion:(long long)arg1;

@end
