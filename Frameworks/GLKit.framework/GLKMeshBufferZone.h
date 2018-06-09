/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {
    GLKMeshBufferAllocator * _allocator;
    NSMutableOrderedSet * _buffers;
    unsigned long long  _capacity;
    bool  _destroyInvoked;
    unsigned int  _glBufferName;
}

@property (nonatomic, readonly) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int glBufferName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allocator;
- (unsigned long long)capacity;
- (void)dealloc;
- (void)destroyBuffer:(id)arg1;
- (unsigned int)glBufferName;
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;

@end
