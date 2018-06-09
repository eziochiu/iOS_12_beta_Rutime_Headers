/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoObjectTracker : NSObject {
    float  _confidence;
    VCPCtrTracker * _correlationTracker;
    int  _lostCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _objectBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _objectBoundsInitial;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _start;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) int lostCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } objectBounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } objectBoundsInitial;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } start;

- (void).cxx_destruct;
- (float)confidence;
- (id)initWithObjectBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inFrame:(struct __CVBuffer { }*)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)lostCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })objectBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })objectBoundsInitial;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })start;
- (int)trackObjectInFrame:(struct __CVBuffer { }*)arg1;

@end
