/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationStickyBehavior : UIDynamicBehavior {
    UICollisionBehavior * _collisionBehavior;
    double  _cornerInset;
    NSMutableArray * _fieldBehaviors;
    bool  _isEnabled;
    <UIDynamicItem> * _item;
    UIDynamicItemBehavior * _itemBehavior;
}

@property (nonatomic, retain) UICollisionBehavior *collisionBehavior;
@property double cornerInset;
@property (nonatomic, retain) NSMutableArray *fieldBehaviors;
@property (nonatomic) bool isEnabled;
@property (nonatomic, retain) <UIDynamicItem> *item;
@property (nonatomic, retain) UIDynamicItemBehavior *itemBehavior;

- (void).cxx_destruct;
- (void)addLinearVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (id)collisionBehavior;
- (double)cornerInset;
- (unsigned long long)currentCorner;
- (id)fieldBehaviors;
- (id)initWithItem:(id)arg1 cornerInset:(double)arg2;
- (bool)isEnabled;
- (id)item;
- (id)itemBehavior;
- (struct CGPoint { double x1; double x2; })positionForCorner:(unsigned long long)arg1;
- (void)setCollisionBehavior:(id)arg1;
- (void)setCornerInset:(double)arg1;
- (void)setFieldBehaviors:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setItemBehavior:(id)arg1;
- (void)updateFieldsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willMoveToAnimator:(id)arg1;

@end
