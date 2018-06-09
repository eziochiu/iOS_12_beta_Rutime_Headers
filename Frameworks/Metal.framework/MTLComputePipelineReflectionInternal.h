/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {
    NSArray * _arguments;
    NSArray * _builtInArguments;
    NSArray * _constantSamplerDescriptors;
    NSArray * _constantSamplerUniqueIdentifiers;
    struct { 
        unsigned int kernelRegisterSpill : 1; 
        unsigned int threadgroupBarrier : 1; 
        unsigned int deviceMemoryAtomics : 1; 
        unsigned int threadgroupMemoryAtomics : 1; 
        unsigned int reserved : 60; 
    }  _flags;
    NSDictionary * _performanceStatistics;
    unsigned int  _traceBufferIndex;
}

- (id)arguments;
- (id)builtInArguments;
- (id)constantSamplerDescriptors;
- (id)constantSamplerUniqueIdentifiers;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 60; })arg4;
- (id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 60; })arg5;
- (id)performanceStatistics;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;
- (void)setPerformanceStatistics:(id)arg1;
- (unsigned int)traceBufferIndex;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 60; })usageFlags;

@end
