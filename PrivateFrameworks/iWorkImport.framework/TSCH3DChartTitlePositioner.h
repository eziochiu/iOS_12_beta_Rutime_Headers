/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTitlePositioner : NSObject {
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
    }  mCachedCategoryAxisLabelsSize;
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
    }  mCachedSeriesLabelsSize;
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
    }  mCachedValueAxisLabelsSize;
    TSCHChartInfo * mInfo;
    TSUWeakReference * mWeakScene;
}

@property (nonatomic, readonly, retain) TSCHChartInfo *info;
@property (nonatomic, readonly) TSCH3DScene *scene;

+ (id)positionerWithInfo:(id)arg1 scene:(id)arg2;

- (id).cxx_construct;
- (void)applyParagraphStyle:(id)arg1 onLabelTransform:(struct LabelTransform { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; unsigned int x3; float x4; bool x5; }*)arg2 alignmentDimension:(int)arg3;
- (void)dealloc;
- (bool)hasScene:(id)arg1;
- (id)info;
- (id)initWithInfo:(id)arg1 scene:(id)arg2;
- (id)scene;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfCategoryAxisLabels;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfSeriesLabels;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfValueAxisLabels;
- (double)wrapWidthForSize:(struct CGSize { double x1; double x2; })arg1 labelTransform:(const struct LabelTransform { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; unsigned int x3; float x4; bool x5; }*)arg2;

@end
