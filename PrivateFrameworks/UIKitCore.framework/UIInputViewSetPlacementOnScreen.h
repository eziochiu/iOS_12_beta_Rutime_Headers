/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (bool)inputViewWillAppear;
- (bool)showsInputViews;
- (bool)showsKeyboard;

@end
