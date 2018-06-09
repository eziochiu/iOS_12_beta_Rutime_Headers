/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshResources : NSObject <TSCHUnretainedParent> {
    struct GeometryArrays { 
        unsigned int offset; 
        unsigned int count; 
        unsigned int capoffset; 
        unsigned int capcount; 
    }  mArrays;
    TSCH3DChartMeshSharedResource * mBounds;
    TSCH3DResource * mCachedBounds;
    TSUOnce * mCachedBoundsOnce;
    NSObject<TSCH3DChartMeshCreator> * mCreator;
    TSCH3DGeometry * mGeometry;
    TSCH3DChartMeshSharedResource * mNormal;
    TSCHChartSeries * mSeries;
    TSCH3DChartTexcoordSharedResource * mTexcoord;
    TSCH3DChartMeshSharedResource * mVertex;
}

@property (nonatomic, readonly) TSCH3DResource *bounds;
@property (nonatomic, readonly) TSCH3DResource *normal;
@property (nonatomic, readonly) TSCH3DResource *texcoord;
@property (nonatomic, readonly) TSCH3DResource *vertex;

+ (id)nullBuffer;
+ (id)resourcesWithSeries:(id)arg1 creator:(id)arg2;

- (id).cxx_construct;
- (id)bounds;
- (void)clearParent;
- (void)dealloc;
- (struct GeometryResource { int x1; /* Warning: unhandled struct encoding: '{ObjcSharedPtr<TSCH3DResource>=@}{GeometryArrays=IIII}{ObjcSharedPtr<TSCH3DGeometry>=@}}' */ struct ObjcSharedPtr<TSCH3DResource> { id x_2_1_1; struct GeometryArrays { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; struct ObjcSharedPtr<TSCH3DGeometry> { id x_3_2_1; } x_2_1_3; } x2; })geometryResourceWithPrimitiveType:(int)arg1;
- (id)initWithSeries:(id)arg1 creator:(id)arg2;
- (id)normal;
- (void)regenerate;
- (void)regenerateBounds;
- (void)regenerateForChild:(id)arg1;
- (id)texcoord;
- (id)vertex;

@end
