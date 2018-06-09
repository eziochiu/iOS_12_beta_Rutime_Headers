/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateInfoTableViewCell : UITableViewCell <HUCellProtocol, HUSoftwareUpdateInternalResizingDelegate> {
    HUSoftwareUpdateInfoView * _infoView;
    <HUResizableCellDelegate> * _resizingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUSoftwareUpdateInfoView *infoView;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1;
- (id)infoView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)resizingDelegate;
- (void)setInfoView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setResizingDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(bool)arg1;

@end