/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDWrapSegments : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBounds;
    struct vector<TSDWrapSegment, std::__1::allocator<TSDWrapSegment> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSDWrapSegment *, std::__1::allocator<TSDWrapSegment> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  mSegments;
}

+ (id)wrapSegmentsWithPath:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPath:(id)arg1;
- (void)p_buildSegmentsForPath:(id)arg1;
- (long long)segmentCount;
- (const struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; }*)segments;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
