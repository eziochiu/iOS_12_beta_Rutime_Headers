/* made by EzioChiu
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKMesh : NSObject {
    NSString * _name;
    NSMutableArray * _submeshes;
    NSMutableArray * _vertexBuffers;
    unsigned long long  _vertexCount;
    MDLVertexDescriptor * _vertexDescriptor;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *submeshes;
@property (nonatomic, readonly) NSArray *vertexBuffers;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) MDLVertexDescriptor *vertexDescriptor;

+ (void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 error:(id*)arg4;
+ (id)newMeshesFromAsset:(id)arg1 sourceMeshes:(id*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithMesh:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)submeshes;
- (id)vertexBuffers;
- (unsigned long long)vertexCount;
- (id)vertexDescriptor;

@end
