/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {
    UITextView * _textView;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool useCustomBackButton;

- (void).cxx_destruct;
- (id)_textView;
- (id)init;
- (void)loadView;
- (id)notes;
- (void)setNotes:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
