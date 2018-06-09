/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageBlurScoreRequest : VNImageBasedRequest {
    unsigned long long  _blurDeterminationMethod;
    unsigned long long  _maximumIntermediateSideLength;
}

@property (nonatomic) unsigned long long blurDeterminationMethod;
@property (nonatomic) unsigned long long maximumIntermediateSideLength;

+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (void)applyConfigurationOfRequest:(id)arg1;
- (unsigned long long)blurDeterminationMethod;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (unsigned long long)maximumIntermediateSideLength;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setBlurDeterminationMethod:(unsigned long long)arg1;
- (void)setMaximumIntermediateSideLength:(unsigned long long)arg1;

@end
