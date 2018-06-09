/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAccessibilityObjectWrapperBase : NSObject {
    struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; } * m_object;
}

+ (void)accessibilitySetShouldRepostNotifications:(bool)arg1;

- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)accessibilityObject;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (void)accessibilityPostedNotification:(id)arg1;
- (void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2;
- (id)ariaLandmarkRoleDescription;
- (id)attachmentView;
- (id)baseAccessibilityDescription;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilitySpeechHint;
- (id)baseAccessibilityTitle;
- (struct CGPath { }*)convertPathToScreenSpace:(struct Path { struct CGPath {} *x1; }*)arg1;
- (struct CGPoint { double x1; double x2; })convertPointToScreenSpace:(struct FloatPoint { float x1; float x2; }*)arg1;
- (void)detach;
- (bool)fileUploadButtonReturnsValueInTitle;
- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::AccessibilityObject, WTF::DumbPtrTraits<WebCore::AccessibilityObject> > {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct AccessibilityIsIgnoredFromParentData { struct AccessibilityObject {} *x_8_1_1; bool x_8_1_2; bool x_8_1_3; bool x_8_1_4; } x8; bool x9; bool x10; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_11_1_1; } x11; }*)arg1;
- (bool)titleTagShouldBeUsedInDescriptionField;
- (bool)updateObjectBackingStore;

@end
