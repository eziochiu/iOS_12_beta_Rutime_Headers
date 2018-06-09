/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTexcoordSharedResource : TSCH3DChartMeshSharedResource {
    TSCH3DTexCoordGeneration * mGenerator;
    TSCH3Dvec3DataBuffer * mNormal;
    TSCH3Dvec3DataBuffer * mVertex;
}

@property (nonatomic, retain) TSCH3DTexCoordGeneration *generator;
@property (nonatomic, retain) TSCH3Dvec3DataBuffer *normal;
@property (nonatomic, retain) TSCH3Dvec3DataBuffer *vertex;

- (void)dealloc;
- (void)flushMemory;
- (id)generator;
- (id)get;
- (id)normal;
- (void)setChildRegenerated:(bool)arg1;
- (void)setGenerator:(id)arg1;
- (void)setNormal:(id)arg1;
- (void)setVertex:(id)arg1;
- (void)setVertex:(id)arg1 normal:(id)arg2 generator:(id)arg3;
- (id)vertex;

@end
