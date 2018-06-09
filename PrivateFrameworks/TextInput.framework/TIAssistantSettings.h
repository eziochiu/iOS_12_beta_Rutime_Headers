/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIAssistantSettings : NSObject

+ (void)connectForOperations:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
+ (void)dismissDialog;
+ (void)dismissEnableDictationPrompt;
+ (void)launchDictationSettings;
+ (void)launchKeyboardSettings;
+ (void)presentDialogForType:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)arg1;
+ (void)setTestBlock:(id /* block */)arg1;

@end
