/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHDrawing : NSObject <NSCopying> {
    struct CJKChar { 
        struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
            struct vector<double, std::__1::allocator<double> > {} *__begin_; 
            struct vector<double, std::__1::allocator<double> > {} *__end_; 
            struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
                struct vector<double, std::__1::allocator<double> > {} *__value_; 
            } __end_cap_; 
        } strokeBounds; 
        struct vector<bool, std::__1::allocator<bool> > { 
            unsigned long long *__begin_; 
            unsigned long long __size_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { 
                unsigned long long __value_; 
            } __cap_alloc_; 
        } strokeBoundsValidity; 
        struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
            struct vector<double, std::__1::allocator<double> > {} *__begin_; 
            struct vector<double, std::__1::allocator<double> > {} *__end_; 
            struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
                struct vector<double, std::__1::allocator<double> > {} *__value_; 
            } __end_cap_; 
        } strokes; 
        unsigned long long currentStrokeIndex; 
        unsigned int mSize; 
        struct Matrix<double> { 
            int (**_vptr$Matrix)(); 
            double *_data; 
            unsigned int _w; 
            unsigned int _h; 
        } bitmap; 
        double lineHeight; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__value_; 
            } __end_cap_; 
        } sparseBitmap; 
    }  _drawing;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{CJKChar={vector<std::__1::vector<double' */ struct  drawing; /* unknown property attribute:  std::__1::allocator<int> >=^i}}} */

+ (id)sortedArrayForPointIndices:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)appendSegment:(id)arg1 fromDrawing:(id)arg2;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })bitmapRepresentationForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })bitmapRepresentationForSize:(struct CGSize { double x1; double x2; })arg1 drawingAlgorithm:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxForDrawingSegmentFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clear;
- (struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })computeDelayedStrokesUsingMinimumDrawingSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)containsStrokeLessThanSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CJKChar { struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_1_1_1; struct vector<double, std::__1::allocator<double> > {} *x_1_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_1_1_3; } x1; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_1_1; struct vector<double, std::__1::allocator<double> > {} *x_3_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_3_1_3; } x3; })drawing;
- (void)endStroke;
- (id)filterPointsWithProximity:(double)arg1 fixedPoints:(id)arg2 points:(id)arg3;
- (id)findLocalYMaximaWithWindowSize:(unsigned long long)arg1 excludingStrokes:(struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg2;
- (id)findSubStrokeSegmentationPointsExcludingStrokes:(struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initialSegmentationPointIndicesForDrawing;
- (bool)isPrefixForDrawing:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchingStrokePrefixRangeForDrawing:(id)arg1;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2;
- (unsigned long long)pointCount;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)setDrawing:(struct CJKChar { struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_1_1_1; struct vector<double, std::__1::allocator<double> > {} *x_1_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_1_1_3; } x1; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_1_1; struct vector<double, std::__1::allocator<double> > {} *x_3_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_3_1_3; } x3; })arg1;
- (void)setLineHeight:(double)arg1;
- (id)sortedDrawingUsingMinXCoordinate;
- (id)spatiallyResampledWithDistance:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeBoundsAtIndex:(unsigned long long)arg1;
- (unsigned long long)strokeCount;
- (struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })strokeIndicesSortedByMinXCoordinate;
- (id)xyRepresentation;

@end
