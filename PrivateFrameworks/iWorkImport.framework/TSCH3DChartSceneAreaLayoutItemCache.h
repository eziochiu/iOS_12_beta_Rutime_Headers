/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {
    TSCH3DVector * _containingViewportVector;
    struct TSCH3DChartSceneAreaLayoutItemCacheValues { 
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
        } infoChartScale; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } containingViewport; 
        struct tvec2<float> { 
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
        } chartBodyLayoutOffsetInChartAreaLayoutSpace; 
        struct CGSize { 
            double width; 
            double height; 
        } layoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } requestLayoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } chartBodyLayoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } requestChartBodyLayoutSize; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } modelSize; 
        struct { 
            bool forceOmitLegend; 
            bool forceOmitTitle; 
            bool forceOmitAxisTitle; 
            bool forceOmitLabelPlacement; 
            bool forceTitleAtTop; 
            bool enable3DTightBounds; 
            bool enable3DScaledDepthBounds; 
            long long maxDepthRatioType; 
            unsigned long long max3DLimitingSeries; 
        } layoutSettings; 
        bool forcedValid; 
    }  mValues;
}

@property (nonatomic, readonly) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } chartBodyLayoutSize;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } containingViewport;
@property (nonatomic, readonly) TSCH3DVector *containingViewportVector;
@property (nonatomic, readonly) bool forcedValid;
@property (nonatomic, readonly) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } infoChartScale;
@property (nonatomic, readonly) struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; } layoutSettings;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } layoutSize;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } modelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } requestChartBodyLayoutSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } requestLayoutSize;

+ (id)cacheWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { bool x_9_1_1; bool x_9_1_2; bool x_9_1_3; bool x_9_1_4; bool x_9_1_5; bool x_9_1_6; bool x_9_1_7; long long x_9_1_8; unsigned long long x_9_1_9; } x9; }*)arg1;

- (id).cxx_construct;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })chartBodyLayoutOffsetInChartAreaLayoutSpace;
- (struct CGSize { double x1; double x2; })chartBodyLayoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })containingViewport;
- (id)containingViewportVector;
- (bool)forcedValid;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })infoChartScale;
- (id)init;
- (id)initWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { bool x_9_1_1; bool x_9_1_2; bool x_9_1_3; bool x_9_1_4; bool x_9_1_5; bool x_9_1_6; bool x_9_1_7; long long x_9_1_8; unsigned long long x_9_1_9; } x9; }*)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })layoutSettings;
- (struct CGSize { double x1; double x2; })layoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })modelSize;
- (void)printDebug;
- (struct CGSize { double x1; double x2; })requestChartBodyLayoutSize;
- (struct CGSize { double x1; double x2; })requestLayoutSize;
- (const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { bool x_9_1_1; bool x_9_1_2; bool x_9_1_3; bool x_9_1_4; bool x_9_1_5; bool x_9_1_6; bool x_9_1_7; long long x_9_1_8; unsigned long long x_9_1_9; } x9; }*)values;

@end