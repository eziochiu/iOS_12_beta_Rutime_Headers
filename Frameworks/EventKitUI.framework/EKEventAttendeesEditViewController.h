/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeesEditViewController : EKEditItemViewController {
    bool  _appendOnly;
    bool  _cancelTapped;
    bool  _disableShowingButtons;
    EKEvent * _event;
    EKEventAttendeePicker * _picker;
}

@property (nonatomic) bool appendOnly;
@property (nonatomic, copy) NSArray *attendees;
@property (nonatomic) bool disableShowingButtons;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_attendeeFromRecipient:(id)arg1;
- (void)_cancelTapped:(id)arg1;
- (id)_createAttendeeFromRecipient:(id)arg1;
- (id)_createRecipientFromAttendee:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (id)_firstInvalidRecipientAddress;
- (id)_recipientFromAttendee:(id)arg1;
- (bool)appendOnly;
- (id)attendees;
- (bool)disableShowingButtons;
- (bool)editItemShouldBeAskedForInjectableViewController;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (bool)prefersToBePresentedFromUINavigationController;
- (bool)presentModally;
- (void)setAppendOnly:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setDisableShowingButtons:(bool)arg1;
- (void)setSearchAccountID:(id)arg1;
- (bool)validateAllowingAlert:(bool)arg1;
- (void)viewDidLoad;

@end
