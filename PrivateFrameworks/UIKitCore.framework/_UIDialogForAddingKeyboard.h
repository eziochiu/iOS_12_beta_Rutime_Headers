/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDialogForAddingKeyboard : NSObject {
    UIWindow * _presenterWindow;
    UINavigationController * _privacySheetController;
}

+ (void)presentDialogForAddingKeyboard;

- (void)dismiss;
- (void)presentDialogForAddingKeyboard;
- (void)presentPrivacySheet;

@end
