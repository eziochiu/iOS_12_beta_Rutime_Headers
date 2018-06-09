/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarDeleteButtonEditItem : EKCalendarEditItem {
    UITableViewCell * _cell;
    SEL  _deleteButtonAction;
    id  _deleteButtonTarget;
}

- (void).cxx_destruct;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2;

@end
