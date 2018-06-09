/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMeshBufferZoneDefault : NSObject <MDLMeshBufferZone> {
    <MDLMeshBufferAllocator> * _allocator;
    unsigned long long  _capacity;
    unsigned long long  _usedCapacity;
}

@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allocator;
- (void)cancelMemory:(unsigned long long)arg1;
- (unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;
- (bool)reserveMemory:(unsigned long long)arg1 allocator:(id)arg2;

@end
