/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration> {
    NSURL * _URL;
    double  __timeCodesPerSecond;
    <MDLObjectContainerComponent> * _animations;
    <MDLMeshBufferAllocator> * _bufferAllocator;
    NSMapTable * _components;
    double  _endTime;
    double  _frameInterval;
    bool  _isSceneKitBridged;
    <MDLObjectContainerComponent> * _masters;
    NSMutableArray * _objects;
    <MDLAssetResolver> * _resolver;
    double  _startTime;
    NSURL * _temporaryFolderURL;
    NSUnitLength * _unitLength;
    void _upAxis;
    MDLVertexDescriptor * _vertexDescriptor;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly) struct MDLAABB { } _bounds;
@property (nonatomic, retain) NSURL *_temporaryFolderURL;
@property (nonatomic) double _timeCodesPerSecond;
@property (nonatomic, retain) <MDLObjectContainerComponent> *animations;
@property (nonatomic, readonly) struct { } boundingBox;
@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *bufferAllocator;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) double endTime;
@property (nonatomic) double frameInterval;
@property (nonatomic, retain) <MDLObjectContainerComponent> *masters;
@property (nonatomic, retain) <MDLAssetResolver> *resolver;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSUnitLength *unitLength;
@property (nonatomic) void upAxis;
@property (nonatomic, readonly, retain) MDLVertexDescriptor *vertexDescriptor;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

+ (bool)canExportFileExtension:(id)arg1;
+ (bool)canImportFileExtension:(id)arg1;
+ (id)placeLightProbesWithDensity:(float)arg1 heuristic:(long long)arg2 usingIrradianceDataSource:(id)arg3;

- (void).cxx_destruct;
- (id)URL;
- (struct MDLAABB { })_bounds;
- (void)_commonInit;
- (void)_conformVertexBuffers:(id)arg1 error:(id*)arg2;
- (id)_temporaryFolderURL;
- (double)_timeCodesPerSecond;
- (void)addObject:(id)arg1;
- (id)animations;
- (struct { })boundingBox;
- (struct { })boundingBoxAtTime:(double)arg1;
- (id)bufferAllocator;
- (id)childObjectsOfClass:(Class)arg1;
- (id)componentConformingToProtocol:(id)arg1;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (double)endTime;
- (void)enumerateChildObjectsOfClass:(Class)arg1 usingBlock:(id /* block */)arg2 stopPointer:(bool*)arg3;
- (bool)exportAssetToURL:(id)arg1;
- (bool)exportAssetToURL:(id)arg1 error:(id*)arg2;
- (double)frameInterval;
- (id)init;
- (id)initThroughSCNKitBridgeWithURL:(id)arg1 preserveTopology:(bool)arg2 error:(id)arg3;
- (id)initWithBufferAllocator:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 preserveIndexing:(bool)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(bool)arg4 error:(id*)arg5;
- (void)loadTextures;
- (id)masters;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objects;
- (void)removeObject:(id)arg1;
- (void)resolveTextures;
- (id)resolver;
- (void)setAnimations:(id)arg1;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (void)setEndTime:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setMasters:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setResolver:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUnitLength:(id)arg1;
- (void)setUpAxis;
- (void)set_temporaryFolderURL:(id)arg1;
- (void)set_timeCodesPerSecond:(double)arg1;
- (double)startTime;
- (id)unitLength;
- (void)upAxis;
- (id)vertexDescriptor;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)assetWithSCNNode:(id)arg1;
+ (id)assetWithSCNNode:(id)arg1 bufferAllocator:(id)arg2;
+ (id)assetWithSCNScene:(id)arg1;
+ (id)assetWithSCNScene:(id)arg1 bufferAllocator:(id)arg2;

@end
