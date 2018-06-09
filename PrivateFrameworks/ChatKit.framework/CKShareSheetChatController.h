/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKShareSheetChatController : CKComposeChatController {
    bool  _alreadySetUp;
    unsigned long long  _interactionSignPost;
}

@property (nonatomic) bool alreadySetUp;

- (void)_beginInteractionSignPost;
- (void)_endInteractionSignPost;
- (bool)alreadySetUp;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)sendComposition:(id)arg1;
- (void)setAlreadySetUp:(bool)arg1;
- (bool)shouldDismissAfterSend;
- (void)viewDidAppear:(bool)arg1;

@end
