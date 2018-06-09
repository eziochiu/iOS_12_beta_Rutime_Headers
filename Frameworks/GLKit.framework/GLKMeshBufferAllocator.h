/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator> {
    EAGLSharegroup * _sharegroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)newZone:(unsigned long long)arg1;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;

@end
