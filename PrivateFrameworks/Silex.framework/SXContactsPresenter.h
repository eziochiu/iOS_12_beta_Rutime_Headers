/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXContactsPresenter : NSObject <CNContactViewControllerDelegate, SXContactsPresenter> {
    CNContactStore * _contactStore;
    UIViewController * _presentedViewController;
    <SXViewControllerPresenting> * _viewControllerPresenting;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXViewControllerPresenting> *viewControllerPresenting;

- (void).cxx_destruct;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)dismissPresentedViewController;
- (id)initWithViewControllerPresenting:(id)arg1 contactStore:(id)arg2;
- (void)presentContact:(id)arg1;
- (id)presentedViewController;
- (void)setPresentedViewController:(id)arg1;
- (id)viewControllerPresenting;

@end
