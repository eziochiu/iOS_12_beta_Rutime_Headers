/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCropNode : NUTransformNode {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _cropRect;
    bool  _resetCleanAperture;
    NUImageTransformAffine * _transform;
}

@property struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } cropRect;
@property (readonly) bool resetCleanAperture;
@property (retain) NUImageTransformAffine *transform;

- (void).cxx_destruct;
- (id)_evaluateDepthData:(out id*)arg1;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (bool)canPropagateOriginalDepthData;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cropRect;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 input:(id)arg2;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 input:(id)arg2 resetCleanAperture:(bool)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (bool)resetCleanAperture;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setCropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setTransform:(id)arg1;
- (id)transform;

@end
