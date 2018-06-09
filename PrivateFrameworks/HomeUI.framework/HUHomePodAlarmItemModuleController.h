/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController <HUAlarmTableViewCellDelegate> {
    NSMapTable * _cellToItemMap;
    <HUHomePodAlarmItemModuleControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMapTable *cellToItemMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUHomePodAlarmItemModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1;
- (id)cellToItemMap;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setAlarmEnabled:(bool)arg1 forCell:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
