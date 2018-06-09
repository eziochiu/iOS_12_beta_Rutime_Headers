/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCoreMLModel : NSObject <VNObservationsCacheKeyProviding> {
    MLObjectBoundingBoxOutputDescription * _boundingBoxOutputDescription;
    unsigned int  _inputImageFormat;
    unsigned long long  _inputImageHeight;
    NSString * _inputImageKey;
    unsigned long long  _inputImageWidth;
    MLModel * _model;
    int  _modelType;
    NSString * _predictedFeatureKey;
    NSString * _predictedProbabilitiesKey;
    NSString * _uuidStringForCacheIdentifier;
}

@property (readonly) MLObjectBoundingBoxOutputDescription *boundingBoxOutputDescription;
@property (readonly) unsigned int inputImageFormat;
@property (readonly) unsigned long long inputImageHeight;
@property (retain) NSString *inputImageKey;
@property (readonly) unsigned long long inputImageWidth;
@property (retain) MLModel *model;
@property int modelType;
@property (retain) NSString *predictedFeatureKey;
@property (readonly) NSString *predictedProbabilitiesKey;

+ (id)modelForMLModel:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)boundingBoxOutputDescription;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (unsigned int)inputImageFormat;
- (unsigned long long)inputImageHeight;
- (id)inputImageKey;
- (unsigned long long)inputImageWidth;
- (id)model;
- (int)modelType;
- (id)observationsCacheKey;
- (id)predictWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictedFeatureKey;
- (id)predictedProbabilitiesKey;
- (void)setInputImageKey:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelType:(int)arg1;
- (void)setPredictedFeatureKey:(id)arg1;
- (bool)setupInputImageFromModelDescription:(id)arg1;

@end
