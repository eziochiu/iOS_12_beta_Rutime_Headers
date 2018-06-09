/* made by EzioChiu.
 */

@protocol PKBrowserClientProtocol <NSObject>

@required

- (void)btlePrinterFound:(PKPrinter *)arg1;
- (void)btleRssiUpdated:(NSUUID *)arg1 rssi:(NSNumber *)arg2;
- (void)printerAdded:(PKPrinter *)arg1 more:(bool)arg2;
- (void)printerRemoved:(PKPrinter *)arg1 more:(bool)arg2;

@end
