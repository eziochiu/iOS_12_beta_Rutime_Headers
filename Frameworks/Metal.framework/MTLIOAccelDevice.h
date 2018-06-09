/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDevice : _MTLDevice {
    unsigned int  _accelID;
    unsigned int  _acceleratorPort;
    struct MTLIOAccelBufferHeap { 
        MTLIOAccelBuffer *buffers[64]; 
        struct MTLRangeAllocator { 
            struct MTLRangeAllocatorElement {} *elements; 
            unsigned int numElements; 
            unsigned long long capacity; 
            unsigned long long capacityIncrement; 
            unsigned long long defaultAlignmentMask; 
        } allocators[64]; 
        unsigned int count; 
    }  _bufferHeaps;
    /* Warning: unhandled struct encoding: '{MTLIOAccelCommandBufferStoragePool={storageQueue=^{MTLIOAccelCommandBufferStorage}^^{MTLIOAccelCommandBufferStorage}}{os_unfair_lock_s=I}ii@}' */ struct MTLIOAccelCommandBufferStoragePool { struct storageQueue { struct MTLIOAccelCommandBufferStorage {} *x_1_1_1; struct MTLIOAccelCommandBufferStorage {} **x_1_1_2; } x1; struct os_unfair_lock_s { unsigned int x_2_1_1; } x2; int x3; int x4; id x5; } * _commandBufferStoragePool;
    unsigned int  _configBits;
    unsigned int  _deviceBits;
    struct __IOAccelDevice { } * _deviceRef;
    NSObject<OS_dispatch_queue> * _device_dispatch_queue;
    unsigned int  _fenceAllocatedCount;
    unsigned long long * _fenceAllocationBitmap;
    unsigned int  _fenceBitmapCount;
    unsigned int  _fenceBitmapSearchStart;
    unsigned int  _fenceMaximumCount;
    int  _numCommandBuffers;
    unsigned long long  _registryID;
    unsigned long long  _resourceMemoryAllocated;
    unsigned long long  _segmentByteThreshold;
    unsigned long long  _sharedMemorySize;
    struct __IOAccelShared { } * _sharedRef;
    /* Warning: unhandled struct encoding: '{?="segmentListShmemPool"@"MTLIOAccelDeviceShmemPool""kernelCommandShmemPool"@"MTLIOAccelDeviceShmemPool""hwResourcePools"^@"hwResourcePoolCount"I"akResourceListPool"@"MTLResourceListPool""akPrivateResourceListPool"@"MTLResourceListPool"}' */ struct { 
        MTLIOAccelDeviceShmemPool *segmentListShmemPool; 
        MTLIOAccelDeviceShmemPool *kernelCommandShmemPool; 
        hwResourcePoolCount **hwResourcePools; 
    }  _storageCreateParams;
    unsigned long long  _textureRam;
    unsigned long long  _videoRam;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) id*hwResourcePools;
@property (readonly) int numCommandBuffers;
@property (getter=areProgrammableSamplePositionsSupported, readonly) bool programmableSamplePositionsSupported;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long registryID;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) bool supportPriorityBand;

+ (void)registerDevices;
+ (void)registerService:(unsigned int)arg1;

- (void)_addResource:(id)arg1;
- (void)_purgeDevice;
- (void)_removeResource:(id)arg1;
- (unsigned int)acceleratorPort;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(unsigned long long)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(unsigned long long*)arg6;
- (bool)areProgrammableSamplePositionsSupported;
- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5;
- (unsigned long long)dedicatedMemorySize;
- (struct __IOAccelDevice { }*)deviceRef;
- (short)heapIndexWithOptions:(unsigned long long)arg1;
- (unsigned int)hwResourcePoolCount;
- (id*)hwResourcePools;
- (id)indirectArgumentBufferDecodingData;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (unsigned int)initialKernelCommandShmemSize;
- (unsigned int)initialSegmentListShmemSize;
- (unsigned long long)maxBufferLength;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newEvent;
- (id)newFence;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (int)numCommandBuffers;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (unsigned long long)registryID;
- (void)releaseFenceIndex:(unsigned int)arg1;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setHwResourcePool:(id*)arg1 count:(int)arg2;
- (void)setIndirectArgumentBufferDecodingData:(id)arg1;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (unsigned long long)sharedMemorySize;
- (struct __IOAccelShared { }*)sharedRef;
- (bool)supportPriorityBand;

@end
