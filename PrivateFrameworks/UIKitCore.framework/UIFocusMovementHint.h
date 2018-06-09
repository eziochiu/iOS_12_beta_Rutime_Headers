/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFocusMovementHint : NSObject <NSCopying> {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _movementDirection;
}

@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } interactionTransform;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } movementDirection;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } perspectiveTransform;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } rotation;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } translation;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMovementDirection:(struct CGVector { double x1; double x2; })arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })interactionTransform;
- (struct CGVector { double x1; double x2; })movementDirection;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveTransform;
- (struct CGVector { double x1; double x2; })rotation;
- (struct CGVector { double x1; double x2; })translation;

@end
