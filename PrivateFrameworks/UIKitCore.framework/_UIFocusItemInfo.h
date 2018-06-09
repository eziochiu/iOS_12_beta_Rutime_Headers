/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusItemInfo : NSObject <NSCopying> {
    NSArray * _ancestorScrollableContainers;
    UIView * _containingView;
    struct { 
        unsigned int hasResolvedFocusSound : 1; 
        unsigned int hasResolvedFocusSoundPan : 1; 
        unsigned int hasResolvedFocusTouchSensitivityStyle : 1; 
        unsigned int hasResolvedFocusMovementFlippedHorizontally : 1; 
        unsigned int hasResolvedFocusedRegion : 1; 
    }  _flags;
    bool  _focusMovementFlippedHorizontally;
    long long  _focusSound;
    double  _focusSoundPan;
    long long  _focusTouchSensitivityStyle;
    _UIFocusRegion * _focusedRegion;
    long long  _inheritedFocusMovementStyle;
    <UIFocusItem> * _item;
}

@property (nonatomic, readonly, copy) NSArray *ancestorScrollableContainers;
@property (nonatomic, readonly) UIView *containingView;
@property (getter=isFocusMovementFlippedHorizontally, nonatomic, readonly) bool focusMovementFlippedHorizontally;
@property (nonatomic, readonly) long long focusSound;
@property (nonatomic, readonly) double focusSoundPan;
@property (nonatomic, readonly) long long focusTouchSensitivityStyle;
@property (nonatomic, readonly) _UIFocusRegion *focusedRegion;
@property (nonatomic, readonly) long long inheritedFocusMovementStyle;
@property (nonatomic, readonly) <UIFocusItem> *item;
@property (nonatomic, readonly) bool itemIsKindOfView;
@property (nonatomic, readonly) UIScreen *screen;

+ (id)infoWithItem:(id)arg1;
+ (id)infoWithView:(id)arg1;

- (void).cxx_destruct;
- (id)_focusedRegionInCoordinateSpace:(id)arg1;
- (id)_initWithItem:(id)arg1 containingView:(id)arg2;
- (id)ancestorScrollableContainers;
- (id)containingView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)focusSound;
- (double)focusSoundPan;
- (long long)focusTouchSensitivityStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusedRectInCoordinateSpace:(id)arg1;
- (id)focusedRegion;
- (long long)inheritedFocusMovementStyle;
- (id)init;
- (void)invalidateFocusedRegion;
- (bool)isFocusMovementFlippedHorizontally;
- (id)item;
- (bool)itemIsKindOfView;
- (id)screen;

@end
