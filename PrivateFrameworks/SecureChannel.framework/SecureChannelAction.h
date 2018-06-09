/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
 */

@interface SecureChannelAction : NSObject {
    NSString * _message;
    NSString * _title;
    NSURL * _url;
    SecureChannelController * controller;
}

@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 callToAction:(id)arg2;
- (id)message;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (id)title;
- (id)url;

@end
