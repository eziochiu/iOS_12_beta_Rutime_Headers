/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIContactConfirmationController : SGUISuggestionConfirmationController <CNContactViewControllerDelegate> {
    id /* block */  _finished;
    SGRealtimeContact * _realtimeContact;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_contactsSuggestionsService;
+ (void)confirmSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)rejectSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)confirmSuggestion:(id)arg1 withPresentationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;

@end