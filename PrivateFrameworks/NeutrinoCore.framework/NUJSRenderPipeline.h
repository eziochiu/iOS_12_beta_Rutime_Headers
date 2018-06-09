/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSRenderPipeline : NURenderPipeline {
    NSUUID * _identifier;
    NUScript * _script;
}

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

+ (id)extractFilterParams:(id)arg1 withPipelineState:(id)arg2 error:(out id*)arg3;
+ (struct NSDictionary { Class x1; }*)extractTransforms:(id)arg1 inputImages:(id)arg2 error:(out id*)arg3;
+ (id)renderPipelineWithJavaScript:(id)arg1;

- (void).cxx_destruct;
- (id)_pipelineFunctionInContext:(id)arg1 error:(out id*)arg2;
- (id)_pipelineFunctionWithJavaScript:(id)arg1 sourceURL:(id)arg2 context:(id)arg3;
- (id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 context:(id)arg4 error:(out id*)arg5;
- (id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (id)init;
- (id)initWithScript:(id)arg1;
- (void)setUpContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)newPhotosPipeline:(out id*)arg1;
+ (id)newPhotosPipelineAtSourceURL:(id)arg1 error:(out id*)arg2;

@end
