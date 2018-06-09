/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor {
    struct EdgeDetectionParameters { 
        bool detectSilhouetteEdges; 
        bool detectSharpEdges; 
        float sharpEdgeThreshold; 
    }  mEdgeDetectionParameters;
    TSCH3Dvec3DataBuffer * mEdges;
    TSCH3DResource * mVertices;
}

@property (nonatomic, readonly) TSCH3Dvec3DataBuffer *edges;
@property (nonatomic, retain) TSCH3DResource *vertices;

- (id).cxx_construct;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg3;
- (void)dealloc;
- (id)edges;
- (id)initWithEdgeDetectionParameters:(const struct EdgeDetectionParameters { bool x1; bool x2; float x3; }*)arg1;
- (id)matrix;
- (void)setVertices:(id)arg1;
- (void)submit:(const /* Warning: unhandled struct encoding: '{PrimitiveInfo=iii@}' */ struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;
- (id)vertices;

@end
