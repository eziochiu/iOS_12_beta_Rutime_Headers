/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIAutoLoopStabVideoNode : NURenderNode {
    NSDictionary * _bakedRecipe;
}

@property (nonatomic, readonly) NSDictionary *bakedRecipe;

+ (id)nodeWithInput:(id)arg1 recipe:(id)arg2 error:(out id*)arg3;

- (void).cxx_destruct;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)bakedRecipe;
- (id)initWithInput:(id)arg1 settings:(id)arg2 bakedRecipe:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
