/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
}

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)layoutCellsForWidth:(double)arg1 position:(int)arg2;
- (void)reset;

@end
