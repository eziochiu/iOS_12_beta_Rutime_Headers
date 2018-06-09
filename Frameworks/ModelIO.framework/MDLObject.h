/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLObject : NSObject <MDLNamed> {
    <MDLObjectContainerComponent> * _children;
    NSMapTable * _components;
    bool  _hidden;
    MDLObject * _instance;
    MDLObject * _parent;
    NSString * name;
}

@property (nonatomic, retain) <MDLObjectContainerComponent> *children;
@property (nonatomic, readonly, copy) NSArray *components;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) MDLObject *instance;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) MDLObject *parent;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, retain) <MDLTransformComponent> *transform;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (struct { })boundingBoxAtTime:(double)arg1;
- (id)children;
- (id)componentConformingToProtocol:(id)arg1;
- (id)components;
- (id)description;
- (void)enumerateChildObjectsOfClass:(Class)arg1 root:(id)arg2 usingBlock:(id /* block */)arg3 stopPointer:(bool*)arg4;
- (bool)hidden;
- (id)init;
- (id)instance;
- (id)name;
- (id)objectAtPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parent;
- (id)path;
- (id)recursiveDescription;
- (void)setChildren:(id)arg1;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (void)setHidden:(bool)arg1;
- (void)setInstance:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)transform;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)objectWithSCNNode:(id)arg1;
+ (id)objectWithSCNNode:(id)arg1 bufferAllocator:(id)arg2;

- (id)_associatedSCNNode;
- (void)_updateAssociatedSCNNodeWithGeometrySetter:(id /* block */)arg1 texturePathProvider:(id /* block */)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4;

@end
