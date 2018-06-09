/* made by EzioChiu.
 */

@protocol CNContactViewHostProtocol <NSObject>

@required

- (void)didChangePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didCompleteWithContact:(CNContact *)arg1;
- (void)didDeleteContact:(CNContact *)arg1;
- (void)isPresentingEditingController:(bool)arg1;
- (void)isPresentingFullscreen:(bool)arg1;
- (bool)shouldPerformDefaultActionForContact:(CNContact *)arg1 propertyKey:(NSString *)arg2 propertyIdentifier:(NSString *)arg3;
- (void)updateEditing:(bool)arg1 doneButtonEnabled:(bool)arg2 doneButtonText:(NSString *)arg3;
- (void)viewDidAppear;

@end
