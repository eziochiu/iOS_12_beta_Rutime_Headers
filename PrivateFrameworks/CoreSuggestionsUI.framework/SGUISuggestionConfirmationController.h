/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUISuggestionConfirmationController : NSObject

+ (Class)_controllerClassForSuggestion:(id)arg1;
+ (void)confirmSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)confirmSuggestion:(id)arg1 withPresentationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (void)rejectSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;

@end
