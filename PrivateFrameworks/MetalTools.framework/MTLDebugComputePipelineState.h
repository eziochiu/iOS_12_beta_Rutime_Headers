/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {
    MTLComputePipelineDescriptor * _descriptor;
    <MTLFunction> * _function;
    struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; } * _imageFilterFunctionInfo;
    NSArray * _imageFilterFunctions;
    unsigned long long  _maxStageInGridOrigin;
    unsigned long long  _maxStageInGridSize;
    unsigned long long  _maxThreadIndexInThreadgroup;
    unsigned long long  _maxThreadPositionInGrid;
    unsigned long long  _maxThreadPositionInThreadgroup;
    unsigned long long  _maxThreadgroupPositionInGrid;
    unsigned long long  _maxThreadgroupsPerGrid;
    unsigned long long  _maxThreadsPerGrid;
    unsigned long long  _maxThreadsPerThreadgroup;
    MTLComputePipelineReflection * _reflection;
}

@property (nonatomic, readonly) MTLComputePipelineDescriptor *descriptor;
@property (nonatomic, readonly) <MTLFunction> *function;
@property (nonatomic, readonly) struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*imageFilterFunctionInfo;
@property (nonatomic, readonly) NSArray *imageFilterFunctions;
@property (nonatomic, readonly) MTLComputePipelineReflection *reflection;

- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)function;
- (id)getParameter:(id)arg1;
- (struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)imageFilterFunctionInfo;
- (id)imageFilterFunctions;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (id)reflection;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2;

@end
