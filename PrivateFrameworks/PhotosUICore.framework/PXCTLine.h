/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCTLine : NSObject {
    double  _ascent;
    struct CGContext { } * _context;
    double  _descent;
    bool  _endOfString;
    PXCTFrame * _frame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageBounds;
    const struct __CTLine { } * _line;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    bool  _prepared;
    NSAttributedString * _referenceAttributedString;
    NSShadow * _shadow;
    NSString * _string;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _stringRange;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    bool  _truncated;
    double  _width;
}

@property (nonatomic, readonly) double ascent;
@property (nonatomic, readonly) double ascentPosition;
@property (nonatomic, readonly) double baselinePosition;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) struct CGContext { }*context;
@property (nonatomic, readonly) double descent;
@property (nonatomic, readonly) double descentPosition;
@property (getter=isEndOfString, nonatomic, readonly) bool endOfString;
@property (nonatomic, readonly) PXCTFrame *frame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageBounds;
@property (nonatomic, readonly) const struct __CTLine { }*line;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic, readonly) NSAttributedString *referenceAttributedString;
@property (nonatomic, readonly) NSShadow *shadow;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } stringRange;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } textPosition;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (getter=isTruncated, nonatomic, readonly) bool truncated;
@property (nonatomic, readonly) double width;

- (void).cxx_destruct;
- (void)_transformBy:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (double)ascent;
- (double)ascentPosition;
- (double)baselinePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGContext { }*)context;
- (const struct CGPath { }*)createPath;
- (void)dealloc;
- (double)descent;
- (double)descentPosition;
- (id)description;
- (void)draw;
- (id)frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageBounds;
- (id)init;
- (id)initWithLine:(struct __CTLine { }*)arg1 origin:(struct CGPoint { double x1; double x2; })arg2 frame:(id)arg3 referenceAttributedString:(id)arg4 truncated:(bool)arg5;
- (bool)isEndOfString;
- (bool)isTruncated;
- (const struct __CTLine { }*)line;
- (struct CGPoint { double x1; double x2; })origin;
- (void)prepare;
- (id)referenceAttributedString;
- (void)scaleBy:(double)arg1;
- (void)scaleVerticallyBy:(double)arg1;
- (id)shadow;
- (id)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stringRange;
- (struct CGPoint { double x1; double x2; })textPosition;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void)translateHorizontallyBy:(double)arg1;
- (void)translateVerticallyBy:(double)arg1;
- (double)width;

@end
