/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCoreMLRequest : VNImageBasedRequest {
    unsigned long long  _imageCropAndScaleOption;
    VNCoreMLModel * _model;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (nonatomic, readonly) VNCoreMLModel *model;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)model;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;

@end
