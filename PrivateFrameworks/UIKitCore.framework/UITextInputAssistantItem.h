/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextInputAssistantItem : NSObject {
    bool  _allowsHidingShortcuts;
    NSArray * _centerBarButtonGroups;
    UIColor * _detachedBackgroundColor;
    UIBlurEffect * _detachedBackgroundEffect;
    UIColor * _detachedTintColor;
    bool  _independentGroupSizes;
    NSArray * _leadingBarButtonGroups;
    double  _marginOverride;
    UIKeyboardAssistantBar * _owner;
    NSArray * _trailingBarButtonGroups;
}

@property (nonatomic) bool allowsHidingShortcuts;
@property (getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:, nonatomic, copy) NSArray *centerBarButtonGroups;
@property (getter=_detachedBackgroundColor, setter=_setDetachedBackgroundColor:, nonatomic, retain) UIColor *detachedBackgroundColor;
@property (getter=_detachedBackgroundEffect, setter=_setDetachedBackgroundEffect:, nonatomic, copy) UIBlurEffect *detachedBackgroundEffect;
@property (getter=_detachedTintColor, setter=_setDetachedTintColor:, nonatomic, retain) UIColor *detachedTintColor;
@property (getter=_hasItemsToDisplay, nonatomic, readonly) bool hasItemsToDisplay;
@property (getter=_independentGroupSizes, setter=_setIndependentGroupSizes:, nonatomic) bool independentGroupSizes;
@property (nonatomic, copy) NSArray *leadingBarButtonGroups;
@property (getter=_marginOverride, setter=_setMarginOverride:, nonatomic) double marginOverride;
@property (getter=_owner, setter=_setOwner:, nonatomic) UIKeyboardAssistantBar *owner;
@property (getter=_requiresPredictionDisabled, nonatomic, readonly) bool requiresPredictionDisabled;
@property (nonatomic, copy) NSArray *trailingBarButtonGroups;

+ (id)_keyboardDeleteItem;

- (id)_centerBarButtonGroups;
- (id)_detachedBackgroundColor;
- (id)_detachedBackgroundEffect;
- (id)_detachedTintColor;
- (bool)_hasItemsToDisplay;
- (bool)_independentGroupSizes;
- (double)_marginOverride;
- (id)_owner;
- (bool)_requiresPredictionDisabled;
- (void)_setCenterBarButtonGroups:(id)arg1;
- (void)_setDetachedBackgroundColor:(id)arg1;
- (void)_setDetachedBackgroundEffect:(id)arg1;
- (void)_setDetachedTintColor:(id)arg1;
- (void)_setIndependentGroupSizes:(bool)arg1;
- (void)_setMarginOverride:(double)arg1;
- (void)_setOwner:(id)arg1;
- (bool)allowsHidingShortcuts;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)leadingBarButtonGroups;
- (void)setAllowsHidingShortcuts:(bool)arg1;
- (void)setLeadingBarButtonGroups:(id)arg1;
- (void)setTrailingBarButtonGroups:(id)arg1;
- (id)trailingBarButtonGroups;

@end
