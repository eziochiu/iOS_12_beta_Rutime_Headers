/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKMessageView : TLKView {
    unsigned long long  _messageServiceType;
    unsigned long long  _messageStatus;
    NSString * _messageText;
    CKTextBalloonView * _textBalloonView;
}

@property (nonatomic) unsigned long long messageServiceType;
@property (nonatomic) unsigned long long messageStatus;
@property (nonatomic, retain) NSString *messageText;
@property (retain) CKTextBalloonView *textBalloonView;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)messageServiceType;
- (unsigned long long)messageStatus;
- (id)messageText;
- (void)observedPropertiesChanged;
- (void)setMessageServiceType:(unsigned long long)arg1;
- (void)setMessageStatus:(unsigned long long)arg1;
- (void)setMessageText:(id)arg1;
- (void)setTextBalloonView:(id)arg1;
- (id)textBalloonView;

@end
