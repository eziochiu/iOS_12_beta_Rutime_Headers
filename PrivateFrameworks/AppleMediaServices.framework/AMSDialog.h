/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDialog : NSObject {
    NSArray * _buttons;
    id /* block */  _completionHandler;
    NSString * _message;
    long long  _selectedButtonIndex;
    long long  _style;
    NSObject<OS_dispatch_queue> * _systemDialogQueue;
    NSArray * _textFields;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) long long selectedButtonIndex;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSArray *textFields;
@property (nonatomic, copy) NSString *title;

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;
+ (id)dialogWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;

- (void).cxx_destruct;
- (id)_createWindowAndMakeVisible;
- (bool)_currentProcessLinksAppKit;
- (bool)_currentProcessLinksUIKit;
- (void)_finishWithButtonIndex:(long long)arg1;
- (void)_presentMacDialogFromWindow:(id)arg1;
- (bool)_presentiOSDialogFromViewController:(id)arg1;
- (void)_removeKeyWindow:(id)arg1;
- (void)addButton:(id)arg1;
- (void)addTextField:(id)arg1;
- (id)buttons;
- (id /* block */)completionHandler;
- (id)initWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;
- (id)message;
- (void)present;
- (void)presentFromViewController:(id)arg1;
- (void)presentSheetFromWindow:(id)arg1;
- (void)presentSystemDialog;
- (long long)selectedButtonIndex;
- (void)setButtons:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setSelectedButtonIndex:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTextFields:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)textFields;
- (id)title;

@end
