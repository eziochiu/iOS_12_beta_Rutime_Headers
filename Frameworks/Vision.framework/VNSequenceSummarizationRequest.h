/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSequenceSummarizationRequest : VNImageBasedRequest {
    NSNumber * _frameRate;
    NSNumber * _frameTimeStamp;
    VNSequenceSummarizationObservation * _inputObservation;
}

@property (nonatomic, retain) NSNumber *frameRate;
@property (nonatomic, retain) NSNumber *frameTimeStamp;
@property (nonatomic, retain) VNSequenceSummarizationObservation *inputObservation;

+ (const struct { unsigned long long x1; Class x2; unsigned long long x3; }*)dependentRequestCompatability;
+ (id)supportedFrameRates;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)frameRate;
- (id)frameTimeStamp;
- (id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2;
- (id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputObservation;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)observationsCacheKey;
- (void)setFrameRate:(id)arg1;
- (void)setFrameTimeStamp:(id)arg1;
- (void)setInputObservation:(id)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
