/* made by EzioChiu.
 */

@protocol MDLMeshBufferZone <NSObject>

@required

- (<MDLMeshBufferAllocator> *)allocator;
- (unsigned long long)capacity;

@end
