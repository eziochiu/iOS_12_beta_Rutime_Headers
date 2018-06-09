/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAffineTransformNode : NUTransformNode {
    NUImageTransformAffine * _transform;
}

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (id)initWithAffineTransform:(id)arg1 input:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

@end
