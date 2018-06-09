/* made by EzioChiu.
 */

@protocol CKChatControllerDelegate <NSObject, CKCoreChatControllerDelegate>

@required

- (void)chatController:(CKChatController *)arg1 forwardComposition:(CKComposition *)arg2;
- (void)prewarmCameraIfNecessaryForChatController:(CKChatController *)arg1;

@end
