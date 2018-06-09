/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDeleteButtonEditItem : EKEventEditItem {
    UITableViewCell * _cell;
    SEL  _deleteButtonAction;
    id  _deleteButtonTarget;
}

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2;
- (bool)shouldAppearWithVisibility:(int)arg1;

@end
