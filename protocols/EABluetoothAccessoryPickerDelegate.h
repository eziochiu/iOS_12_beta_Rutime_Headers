/* made by EzioChiu.
 */

@protocol EABluetoothAccessoryPickerDelegate <NSObject>

@optional

- (void)devicePicker:(EABluetoothAccessoryPicker *)arg1 didSelectAddress:(NSString *)arg2 errorCode:(long long)arg3;

@end
