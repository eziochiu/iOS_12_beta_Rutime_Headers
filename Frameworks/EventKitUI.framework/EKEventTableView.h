/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventTableView : UITableView {
    EKEventViewController * _controller;
}

@property (nonatomic) EKEventViewController *controller;

- (void).cxx_destruct;
- (id)controller;
- (void)reloadData;
- (void)setController:(id)arg1;

@end
