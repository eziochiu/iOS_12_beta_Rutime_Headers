/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILayoutGuide : UIView <UILayoutSupport> {
    bool  _allowsArchivingAsSubview;
    NSString * _archivedIdentifier;
    NSArray * _constraintsToRemoveAtRuntime;
    bool  _horizontal;
}

@property (setter=_setAllowsArchivingAsSubview:, nonatomic) bool _allowsArchivingAsSubview;
@property (setter=_setArchivedIdentifier:, nonatomic, copy) NSString *_archivedIdentifier;
@property (setter=_setConstraintsToRemoveAtRuntime:, nonatomic, copy) NSArray *_constraintsToRemoveAtRuntime;
@property (getter=isHorizontal, setter=_setHorizontal:, nonatomic) bool _horizontal;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) double length;
@property (readonly) Class superclass;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;

+ (id)_horizontalLayoutGuide;
+ (id)_verticalLayoutGuide;
+ (id)classFallbacksForKeyedArchiver;

- (bool)_allowsArchivingAsSubview;
- (id)_archivedIdentifier;
- (id)_constraintsToRemoveAtRuntime;
- (bool)_isFloatingLayoutItem;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_setAllowsArchivingAsSubview:(bool)arg1;
- (void)_setArchivedIdentifier:(id)arg1;
- (void)_setConstraintsToRemoveAtRuntime:(id)arg1;
- (void)_setHorizontal:(bool)arg1;
- (void)_setUpCounterDimensionConstraint;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHorizontal;
- (double)length;

@end
