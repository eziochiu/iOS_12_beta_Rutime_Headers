/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPersonalRequestsDescriptionFooterItem : HFItem {
    HULocationDeviceManager * _locationDeviceManager;
}

@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;

- (void).cxx_destruct;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_locationDeviceTextForDeviceNameString:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithLocationDeviceManager:(id)arg1;
- (id)locationDeviceManager;

@end
