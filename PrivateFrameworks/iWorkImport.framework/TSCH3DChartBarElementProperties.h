/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartBarElementProperties : TSCH3DChartBasicElementProperties {
    TSCH3DBarChartDefaultAppearance * mAppearance;
    int  mBarShape;
    float  mBarWidth;
    bool  mBevelEdges;
    struct vector<TSCH3D::BarElementInfo, std::__1::allocator<TSCH3D::BarElementInfo> > { 
        struct BarElementInfo {} *__begin_; 
        struct BarElementInfo {} *__end_; 
        struct __compressed_pair<TSCH3D::BarElementInfo *, std::__1::allocator<TSCH3D::BarElementInfo> > { 
            struct BarElementInfo {} *__value_; 
        } __end_cap_; 
    }  mElementInfos;
    float  mElementsXOffset;
    struct array<TSCH3D::BarExtrusionDetails, 2> { 
        struct BarExtrusionDetails { 
            struct BarExtrusionCrossSectionDetails { 
                float detail; 
                float tension; 
                float adaptiveThreshold; 
                float creaseAngle; 
                int crossType; 
            } crossSection; 
            struct BarExtrusionSpineDetails { 
                float bevelHeight; 
                long long bevelSlices; 
                long long stride; 
                float creaseAngle; 
            } spine; 
        } __elems_[2]; 
    }  mExtrusionDetails;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  mMaxValues;
    struct vector<(anonymous namespace)::Range, std::__1::allocator<(anonymous namespace)::Range> >="__begin_"^{Range {}  mRangeCache;
    TSCH3DLabelResources * mSeriesLabels;
    float  mSeriesOffset;
    float  mSetWidth;
    bool  mStacked;
}

@property (nonatomic, readonly) <TSCH3DBarChartAppearance> *appearance;
@property (nonatomic, readonly) int barShape;
@property (nonatomic, readonly) bool hasBevelEdges;
@property (nonatomic, retain) TSCH3DLabelResources *seriesLabels;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)appearance;
- (bool)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; }*)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg4;
- (struct BarElementInfo { bool x1; float x2; bool x3; unsigned long long x4; })barElementInfoAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (int)barShape;
- (float)barWidth;
- (bool)beveledAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (struct GeometryResource { int x1; /* Warning: unhandled struct encoding: '{ObjcSharedPtr<TSCH3DResource>=@}{GeometryArrays=IIII}{ObjcSharedPtr<TSCH3DGeometry>=@}}' */ struct ObjcSharedPtr<TSCH3DResource> { id x_2_1_1; struct GeometryArrays { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; struct ObjcSharedPtr<TSCH3DGeometry> { id x_3_2_1; } x_2_1_3; } x2; })boundsGeometryForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (/* Warning: unhandled struct encoding: '{BarIntercept=d@}' */ struct BarIntercept { double x1; id x2; })calculateInterceptForSeries:(id)arg1;
- (void)calculateLayout;
- (float)chartInitialDepthOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createResources;
- (void)dealloc;
- (struct BarElementInfo { bool x1; float x2; bool x3; unsigned long long x4; }*)elementInfoAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg1;
- (const struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; int x_1_1_5; } x1; struct BarExtrusionSpineDetails { float x_2_1_1; long long x_2_1_2; long long x_2_1_3; float x_2_1_4; } x2; }*)extrusionDetailsForShape:(int)arg1;
- (long long)flatIndex:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (struct GeometryResource { int x1; /* Warning: unhandled struct encoding: '{ObjcSharedPtr<TSCH3DResource>=@}{GeometryArrays=IIII}{ObjcSharedPtr<TSCH3DGeometry>=@}}' */ struct ObjcSharedPtr<TSCH3DResource> { id x_2_1_1; struct GeometryArrays { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; struct ObjcSharedPtr<TSCH3DGeometry> { id x_3_2_1; } x_2_1_3; } x2; })geometryForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (bool)hasBevelEdges;
- (float)interceptValueForSeries:(id)arg1;
- (float)maxValueForSeries:(long long)arg1;
- (id)normalsForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (id)p_appearance;
- (id)p_appearanceClasses;
- (id)p_barResourceCacheItemAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (struct Range { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; bool x2; })p_calculateRangeForSeries:(id)arg1 index:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 intercept:(const /* Warning: unhandled struct encoding: '{BarIntercept=d@}' */ struct BarIntercept { double x1; id x2; }*)arg3;
- (void)p_createAppearance;
- (void)p_resetExtrusionDetails;
- (void)p_updateAppearance;
- (void)p_updateRangeCache;
- (struct Range { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; bool x2; })rangeForSeries:(id)arg1 index:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)releaseAndClearAppearance;
- (void)reset;
- (id)seriesLabels;
- (void)setBeveledAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)setElementInfo:(const struct BarElementInfo { bool x1; float x2; bool x3; unsigned long long x4; }*)arg1 atIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)setExtrusionDetails:(const struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; int x_1_1_5; } x1; struct BarExtrusionSpineDetails { float x_2_1_1; long long x_2_1_2; long long x_2_1_3; float x_2_1_4; } x2; }*)arg1 forShape:(int)arg2;
- (void)setMaxValueForSeries:(long long)arg1 value:(float)arg2;
- (void)setSeriesLabels:(id)arg1;
- (id)texcoordsForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)updateLabels;
- (void)updateMaxValuesAndBevels;

@end
