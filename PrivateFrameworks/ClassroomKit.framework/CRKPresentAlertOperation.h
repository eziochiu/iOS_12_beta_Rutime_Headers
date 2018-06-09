/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKPresentAlertOperation : CATOperation {
    NSString * _acknowledgeOptionTitle;
    NSString * _message;
    UIViewController * _presentingViewController;
    NSString * _title;
    UIAlertController * mAlertController;
}

@property (nonatomic, readonly) NSString *acknowledgeOptionTitle;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)acknowledgeOptionTitle;
- (void)cancel;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 title:(id)arg2 message:(id)arg3 acknowledgeOptionTitle:(id)arg4;
- (bool)isAsynchronous;
- (void)main;
- (id)message;
- (id)presentingViewController;
- (id)title;

@end
