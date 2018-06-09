/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {
    EKUIEventInviteesViewController * _controller;
    EKEvent * _event;
}

@property (nonatomic, readonly) NSDate *selectedEndDate;
@property (nonatomic, readonly) NSDate *selectedStartDate;

- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (void)loadView;
- (id)selectedEndDate;
- (id)selectedStartDate;

@end
