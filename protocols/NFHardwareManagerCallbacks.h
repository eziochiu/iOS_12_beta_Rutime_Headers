/* made by EzioChiu.
 */

@protocol NFHardwareManagerCallbacks <NSObject>

@required

- (void)secureElementWithIdentifier:(NSString *)arg1 didChangeRestrictedMode:(bool)arg2;

@end
