/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource {
    TSCH3DDataBuffer * mMesh;
}

@property (nonatomic, retain) TSCH3DDataBuffer *mesh;

- (void)dealloc;
- (void)flushMemory;
- (id)get;
- (id)mesh;
- (void)setChildRegenerated:(bool)arg1;
- (void)setMesh:(id)arg1;

@end
