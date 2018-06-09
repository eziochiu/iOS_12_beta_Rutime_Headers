/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLIndirectDrawIndexedPatchesArguments : NSObject {
    unsigned long long  _baseInstance;
    unsigned long long  _controlPointIndexBufferOffset;
    void * _controlPointIndexBufferVirtualAddress;
    unsigned long long  _instanceCount;
    unsigned long long  _numberOfPatchControlPoints;
    unsigned long long  _patchCount;
    unsigned long long  _patchIndexBufferOffset;
    void * _patchIndexBufferVirtualAddress;
    unsigned long long  _patchStart;
}

@property (nonatomic) unsigned long long baseInstance;
@property (nonatomic) void*controlPointIndexBufferVirtualAddress;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long numberOfPatchControlPoints;
@property (nonatomic) unsigned long long patchCount;
@property (nonatomic) void*patchIndexBufferVirtualAddress;
@property (nonatomic) unsigned long long patchStart;

- (unsigned long long)baseInstance;
- (void*)controlPointIndexBufferVirtualAddress;
- (unsigned long long)instanceCount;
- (unsigned long long)numberOfPatchControlPoints;
- (unsigned long long)patchCount;
- (void*)patchIndexBufferVirtualAddress;
- (unsigned long long)patchStart;
- (void)setBaseInstance:(unsigned long long)arg1;
- (void)setControlPointIndexBufferVirtualAddress:(void*)arg1;
- (void)setInstanceCount:(unsigned long long)arg1;
- (void)setNumberOfPatchControlPoints:(unsigned long long)arg1;
- (void)setPatchCount:(unsigned long long)arg1;
- (void)setPatchIndexBufferVirtualAddress:(void*)arg1;
- (void)setPatchStart:(unsigned long long)arg1;

@end
