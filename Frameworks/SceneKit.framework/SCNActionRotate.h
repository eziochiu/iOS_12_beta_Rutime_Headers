/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionRotate : SCNAction {
    struct SCNCActionRotate { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; float x19; bool x20; bool x21; bool x22; bool x23; bool x24; } * _mycaction;
}

+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 duration:(double)arg3;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(bool)arg5;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isRelative;
- (id)parameters;
- (id)reversedAction;

@end
