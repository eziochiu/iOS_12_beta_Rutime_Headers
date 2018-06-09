/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKAlertDialog : NSObject {
    NSString * _acceptButtonTitle;
    NSString * _cancelButtonTitle;
    id /* block */  _completionHandler;
    NSString * _message;
    NSString * _title;
}

@property (copy) NSString *acceptButtonTitle;
@property (copy) NSString *cancelButtonTitle;
@property (copy) id /* block */ completionHandler;
@property (copy) NSString *message;
@property (copy) NSString *title;

- (void).cxx_destruct;
- (void)_runAsCFUserNotificationDisplayAlert;
- (bool)_runAsUIAlertView;
- (id)acceptButtonTitle;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)cancelButtonTitle;
- (id /* block */)completionHandler;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4;
- (id)message;
- (void)setAcceptButtonTitle:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;
- (id)title;

@end
