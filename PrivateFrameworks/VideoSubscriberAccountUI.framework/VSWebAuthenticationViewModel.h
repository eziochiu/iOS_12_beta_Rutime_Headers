/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSWebAuthenticationViewModel : VSViewModel {
    VSMessageQueue * _messagesFromWeb;
    VSMessageQueue * _messagesToWeb;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) VSMessageQueue *messagesFromWeb;
@property (nonatomic, readonly) VSMessageQueue *messagesToWeb;
@property (nonatomic, copy) NSURL *sourceURL;

- (void).cxx_destruct;
- (id)init;
- (id)messagesFromWeb;
- (id)messagesToWeb;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
