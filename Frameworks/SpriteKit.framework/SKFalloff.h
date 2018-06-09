/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFalloff : SKAction {
    struct SKCFalloff { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; bool x24; bool x25; } * _mycaction;
}

+ (id)falloffBy:(double)arg1 duration:(double)arg2;
+ (id)falloffTo:(double)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
