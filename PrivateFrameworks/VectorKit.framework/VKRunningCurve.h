/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRunningCurve : NSObject {
    struct { 
        double mb[4][3]; 
    }  _mb;
    bool  _mbValid;
    struct { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        bool tangentValid; 
    }  _p0;
    struct { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        bool tangentValid; 
    }  _p1;
    struct { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        bool tangentValid; 
    }  _pu;
    double  _t0;
    double  _t1;
    double  _tu;
}

- (id).cxx_construct;
- (void)appendPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 atTime:(double)arg2;
- (void)dealloc;
- (bool)hasStateAtTime:(double)arg1;
- (id)init;
- (void)reset;
- (struct { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; bool x3; })stateAtTime:(double)arg1;

@end
