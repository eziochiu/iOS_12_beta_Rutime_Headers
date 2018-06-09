/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface NSObject_QSSupport : __NSObject_QSSupport_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (bool)_accessibilityIsTextInput;
- (id)_accessibilityQuickSpeakContent;
- (id)_accessibilityQuickSpeakEnclosingSentence:(id*)arg1;
- (id)_accessibilityQuickSpeakTokenizer;
- (id)_accessibilityTextRectsForRange:(id)arg1 singleTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;

@end
