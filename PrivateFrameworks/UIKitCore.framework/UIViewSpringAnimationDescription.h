/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewSpringAnimationDescription : NSObject {
    double  _friction;
    struct { 
        double dampingRatio; 
        double response; 
        bool initialDampingRatioSpecified; 
        bool initialResponseSpecified; 
        double initialDampingRatio; 
        double initialResponse; 
        double dampingRatioSmoothing; 
        double responseSmoothing; 
        double targetSmoothing; 
        double projectionDeceleration; 
        double impulse; 
    }  _parameters;
    double  _tension;
    bool  _usesDampingRatioAndResponse;
}

@property (nonatomic) double friction;
@property (nonatomic) struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; } parameters;
@property (nonatomic) double tension;
@property (nonatomic) bool usesDampingRatioAndResponse;

+ (id)descriptionWithSpringAnimationParameters:(struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })arg1;
+ (id)descriptionWithTension:(double)arg1 friction:(double)arg2;

- (double)friction;
- (struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })parameters;
- (void)setFriction:(double)arg1;
- (void)setParameters:(struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })arg1;
- (void)setTension:(double)arg1;
- (void)setUsesDampingRatioAndResponse:(bool)arg1;
- (double)tension;
- (bool)usesDampingRatioAndResponse;

@end
