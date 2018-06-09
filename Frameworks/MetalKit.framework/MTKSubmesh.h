/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKSubmesh : NSObject {
    MTKMeshBuffer * _indexBuffer;
    unsigned long long  _indexCount;
    unsigned long long  _indexType;
    MTKMesh * _mesh;
    NSString * _name;
    unsigned long long  _primitiveType;
}

@property (nonatomic, readonly) MTKMeshBuffer *indexBuffer;
@property (nonatomic, readonly) unsigned long long indexCount;
@property (nonatomic, readonly) unsigned long long indexType;
@property (nonatomic, readonly) MTKMesh *mesh;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long primitiveType;

- (void).cxx_destruct;
- (id)indexBuffer;
- (unsigned long long)indexCount;
- (unsigned long long)indexType;
- (id)initWithMesh:(id)arg1 submesh:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)mesh;
- (id)name;
- (unsigned long long)primitiveType;
- (void)setName:(id)arg1;

@end
