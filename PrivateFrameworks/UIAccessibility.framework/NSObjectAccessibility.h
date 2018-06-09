/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (bool)accessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityLocalizedStringTableName;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserDefinedActivationPoint;
- (id)accessibilityUserDefinedContainer;
- (id)accessibilityUserDefinedDragSourceDescriptors;
- (id)accessibilityUserDefinedDropPointDescriptors;
- (id)accessibilityUserDefinedFrame;
- (id)accessibilityUserDefinedHint;
- (id)accessibilityUserDefinedIdentifier;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedLanguage;
- (id)accessibilityUserDefinedShouldGroupChildren;
- (id)accessibilityUserDefinedTraits;
- (id)accessibilityUserDefinedValue;
- (id)accessibilityValue;
- (bool)accessibilityViewIsModal;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (bool)isAccessibilityElement;
- (id)isAccessibilityUserDefinedElement;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (bool)shouldGroupAccessibilityChildren;
- (id)storedAccessibilityElementsHidden;
- (id)storedAccessibilityViewIsModal;
- (id)storedShouldGroupAccessibilityChildren;

@end
