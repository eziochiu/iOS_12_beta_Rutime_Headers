/* made by EzioChiu.
 */

@protocol CKInlineAudioReplyButtonDelegate <NSObject>

@required

- (void)audioReplyButtonCancel:(CKInlineAudioReplyButtonController *)arg1;
- (void)audioReplyButtonStart:(CKInlineAudioReplyButtonController *)arg1;
- (void)audioReplyButtonStop:(CKInlineAudioReplyButtonController *)arg1;

@end