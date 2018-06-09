/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol> {
    <BCApplePayManagerDelegate> * _delegate;
}

@property (nonatomic) <BCApplePayManagerDelegate> *delegate;

- (void).cxx_destruct;
- (long long)applePayStatus;
- (id)delegate;
- (id)initWithMessage:(id)arg1 delegate:(id)arg2;
- (id)message;
- (void)presentApplePay;
- (void)setDelegate:(id)arg1;

@end
