/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport> {
    bool  _compatibilityGuideAllowsArchivingAsSubview;
    NSArray * _constraintsToRemoveAtRuntime;
    bool  _horizontal;
}

@property (setter=_setArchivedIdentifier:, nonatomic, copy) NSString *_archivedIdentifier;
@property (setter=_setCompatibilityGuideAllowsArchivingAsSubview:, nonatomic) bool _compatibilityGuideAllowsArchivingAsSubview;
@property (setter=_setConstraintsToRemoveAtRuntime:, nonatomic, copy) NSArray *_constraintsToRemoveAtRuntime;
@property (getter=_isHorizontal, setter=_setHorizontal:, nonatomic) bool _horizontal;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) double length;
@property (readonly) Class superclass;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;

+ (id)_horizontalLayoutSpacer;
+ (id)_verticalLayoutSpacer;

- (id)_archivedIdentifier;
- (bool)_compatibilityGuideAllowsArchivingAsSubview;
- (id)_constraintsToRemoveAtRuntime;
- (bool)_isHorizontal;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_setArchivedIdentifier:(id)arg1;
- (void)_setCompatibilityGuideAllowsArchivingAsSubview:(bool)arg1;
- (void)_setConstraintsToRemoveAtRuntime:(id)arg1;
- (void)_setHorizontal:(bool)arg1;
- (void)_setUpCounterDimensionConstraint;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)length;

@end
