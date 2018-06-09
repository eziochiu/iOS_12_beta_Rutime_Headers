/* made by EzioChiu
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {
    <EABluetoothAccessoryPickerDelegate> * _delegate;
    BTDevicePicker * _picker;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EABluetoothAccessoryPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)wakeSelectedBluetoothAccessories:(id)arg1;

- (void)dealloc;
- (id)delegate;
- (void)devicePicker:(id)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3;
- (void)dismissPicker;
- (id)initWithPredicate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;

@end
