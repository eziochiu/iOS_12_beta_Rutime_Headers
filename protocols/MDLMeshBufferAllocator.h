/* made by EzioChiu.
 */

@protocol MDLMeshBufferAllocator <NSObject>

@required

- (<MDLMeshBuffer> *)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (<MDLMeshBuffer> *)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 data:(NSData *)arg2 type:(unsigned long long)arg3;
- (<MDLMeshBuffer> *)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (<MDLMeshBuffer> *)newBufferWithData:(NSData *)arg1 type:(unsigned long long)arg2;
- (<MDLMeshBufferZone> *)newZone:(unsigned long long)arg1;
- (<MDLMeshBufferZone> *)newZoneForBuffersWithSize:(NSArray *)arg1 andType:(NSArray *)arg2;

@end
