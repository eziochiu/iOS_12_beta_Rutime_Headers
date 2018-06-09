/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlPanelCell : UITableViewCell <HUCellProtocol> {
    HFItem * _item;
}

@property (nonatomic, readonly) NSSet *allControlViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allControlViews;
- (id)item;
- (void)setItem:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
