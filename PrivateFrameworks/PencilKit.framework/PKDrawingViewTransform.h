/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKDrawingViewTransform : NSObject {
    double  _duration;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _final;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _from;
    NSDate * _startTime;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _to;
}

@property (nonatomic) double duration;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } final;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } from;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } to;

- (void).cxx_destruct;
- (double)duration;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })final;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })from;
- (void)setDuration:(double)arg1;
- (void)setFinal:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setFrom:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setStartTime:(id)arg1;
- (void)setTo:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)startTime;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })to;

@end
