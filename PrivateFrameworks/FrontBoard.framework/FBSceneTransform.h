/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneTransform : NSObject {
    bool  _appliesToSystemGestureView;
    NSHashTable * _targets;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) bool appliesToSystemGestureView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })concatenateTransforms:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_notifyTargetsTransformDidUpdate;
- (void)addTransformTarget:(id)arg1;
- (bool)appliesToSystemGestureView;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeTransformTarget:(id)arg1;
- (void)setAppliesToSystemGestureView:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
