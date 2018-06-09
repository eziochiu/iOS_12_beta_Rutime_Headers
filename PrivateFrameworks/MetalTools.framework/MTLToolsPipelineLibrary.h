/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI> {
    MTLToolsPointerArray * _computePipelineStates;
    MTLToolsPointerArray * _pipelineStates;
}

@property (nonatomic, readonly) MTLToolsPointerArray *computePipelineStates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property bool disableRunTimeCompilation;
@property (nonatomic, readonly) <MTLPipelineCache> *functionCache;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (nonatomic, readonly) <MTLPipelineCache> *pipelineCache;
@property (readonly) NSArray *pipelineNames;
@property (nonatomic, readonly) MTLToolsPointerArray *pipelineStates;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (id)computePipelineStates;
- (void)dealloc;
- (id)device;
- (bool)disableRunTimeCompilation;
- (id)functionCache;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)label;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)pipelineCache;
- (id)pipelineNames;
- (id)pipelineStates;
- (void)setDisableRunTimeCompilation:(bool)arg1;
- (void)setLabel:(id)arg1;

@end
