/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject {
    TSCH3Dvec3DataBuffer * edgeVertices;
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    }  mColor;
    TSCH3Dvec3DataBuffer * mEdgeVertices;
    TSCH3DPrefilteredLineRenderer * mRenderer;
    unsigned long long  mSelectedSeriesIndex;
}

@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } color;
@property (nonatomic, retain) TSCH3Dvec3DataBuffer *edgeVertices;
@property (nonatomic, readonly) TSCH3DPrefilteredLineRenderer *renderer;
@property (nonatomic) unsigned long long selectedSeriesIndex;

- (id).cxx_construct;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })color;
- (void)dealloc;
- (id)edgeVertices;
- (id)init;
- (id)renderer;
- (unsigned long long)selectedSeriesIndex;
- (void)setColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setEdgeVertices:(id)arg1;
- (void)setSelectedSeriesIndex:(unsigned long long)arg1;

@end
