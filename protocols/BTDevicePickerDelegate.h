/* made by EzioChiu.
 */

@protocol BTDevicePickerDelegate <NSObject>

@optional

- (void)devicePicker:(BTDevicePicker *)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3;

@end
