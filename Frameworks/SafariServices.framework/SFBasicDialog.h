/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBasicDialog : _SFDialog {
    NSArray * _actions;
    NSArray * _additionalCancellationExemptions;
    bool  _alertControllerPresentsAsActionSheet;
    bool  _canceledOnCommittedNavigation;
    bool  _canceledOnProvisionalNavigation;
    id /* block */  _completionHandler;
    bool  _completionHandlerBlocksWebProcess;
    NSString * _defaultPassword;
    NSString * _defaultText;
    NSString * _message;
    NSString * _passwordPlaceholder;
    long long  _presentationStyle;
    bool  _shouldHideWebContent;
    NSString * _textPlaceholder;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSArray *additionalCancellationExemptions;
@property (nonatomic) bool alertControllerPresentsAsActionSheet;
@property (nonatomic) bool canceledOnCommittedNavigation;
@property (nonatomic) bool canceledOnProvisionalNavigation;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) bool completionHandlerBlocksWebProcess;
@property (nonatomic, copy) NSString *defaultPassword;
@property (nonatomic, copy) NSString *defaultText;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *passwordPlaceholder;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) bool shouldHideWebContent;
@property (nonatomic, copy) NSString *textPlaceholder;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actions;
- (id)additionalCancellationExemptions;
- (bool)alertControllerPresentsAsActionSheet;
- (bool)canceledOnCommittedNavigation;
- (bool)canceledOnProvisionalNavigation;
- (id /* block */)completionHandler;
- (bool)completionHandlerBlocksWebProcess;
- (id)defaultPassword;
- (id)defaultText;
- (void)didCompleteWithResponse:(id)arg1;
- (id)init;
- (id)message;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)arg1;
- (id)passwordPlaceholder;
- (long long)presentationStyle;
- (void)setActions:(id)arg1;
- (void)setAdditionalCancellationExemptions:(id)arg1;
- (void)setAlertControllerPresentsAsActionSheet:(bool)arg1;
- (void)setCanceledOnCommittedNavigation:(bool)arg1;
- (void)setCanceledOnProvisionalNavigation:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlerBlocksWebProcess:(bool)arg1;
- (void)setDefaultPassword:(id)arg1;
- (void)setDefaultText:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPasswordPlaceholder:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setShouldHideWebContent:(bool)arg1;
- (void)setTextPlaceholder:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldHideWebContent;
- (id)textPlaceholder;
- (id)title;

@end
