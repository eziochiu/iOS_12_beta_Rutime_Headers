/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFSegmentedCell : UITableViewCell {
    id /* block */  _handler;
    UISegmentedControl * _segmentedControl;
}

@property (copy) id /* block */ handler;
@property (nonatomic) UISegmentedControl *segmentedControl;

- (void).cxx_destruct;
- (void)_segmentedControlDidChange:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)awakeFromNib;
- (id /* block */)handler;
- (id)segmentedControl;
- (void)setHandler:(id /* block */)arg1;
- (void)setSegmentedControl:(id)arg1;

@end
