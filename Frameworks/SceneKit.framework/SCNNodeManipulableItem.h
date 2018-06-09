/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNNodeManipulableItem : SCNManipulableItem

+ (void)addItems:(id)arg1 toScene:(id)arg2;
+ (id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2;
+ (void)removeItemsFromScene:(id)arg1;

- (id)cloneForManipulators;
- (bool)isNodeManipulator;
- (id)parentItem;
- (struct SCNVector3 { float x1; float x2; float x3; })scale;
- (void)setPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setWorldTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (void)validateClone;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })worldTransform;

@end
