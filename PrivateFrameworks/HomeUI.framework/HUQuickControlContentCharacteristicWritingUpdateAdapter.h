/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject <HUQuickControlContentCharacteristicWritingDelegate> {
    <HUQuickControlContentCharacteristicWritingDelegate> * _forwardingCharacteristicWritingDelegate;
    HFItemManager * _itemManager;
    _HUQuickControlContentCharacteristicWriteQueuedUpdate * _queuedUpdate;
    bool  _shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <HUQuickControlContentCharacteristicWritingDelegate> *forwardingCharacteristicWritingDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic, retain) _HUQuickControlContentCharacteristicWriteQueuedUpdate *queuedUpdate;
@property (nonatomic) bool shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_characteristicUpdateSuppressionReasonForContent:(id)arg1;
- (void)_executeQueuedUpdate;
- (void)dealloc;
- (id)forwardingCharacteristicWritingDelegate;
- (id)initWithItemManager:(id)arg1;
- (id)itemManager;
- (id)queuedUpdate;
- (void)quickControlContent:(id)arg1 didEndPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContent:(id)arg1 willBeginPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)arg1;
- (void)setForwardingCharacteristicWritingDelegate:(id)arg1;
- (void)setQueuedUpdate:(id)arg1;
- (void)setShouldIssueItemUpdatesOnCharacteristicOverrideValueChanges:(bool)arg1;
- (bool)shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;

@end
