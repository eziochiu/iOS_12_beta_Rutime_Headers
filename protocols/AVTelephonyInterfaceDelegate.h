/* made by EzioChiu.
 */

@protocol AVTelephonyInterfaceDelegate <NSObject>

@required

- (void)avTelephonyInterface:(AVTelephonyInterface *)arg1 vocoderInfoChangedToType:(NSString *)arg2 sampleRate:(NSNumber *)arg3;

@end
