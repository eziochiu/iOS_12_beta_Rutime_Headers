/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding> {
    VNCanceller * _canceller;
    bool  _returnAllResults;
    bool  _useCenterTileOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool returnAllResults;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;
@property (nonatomic) bool useCenterTileOnly;

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)hasCancellationHook;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalCancelInContext:(id)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)observationsCacheKey;
- (bool)returnAllResults;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setReturnAllResults:(bool)arg1;
- (void)setUseCenterTileOnly:(bool)arg1;
- (id)supportedImageSizeSet;
- (bool)useCenterTileOnly;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
