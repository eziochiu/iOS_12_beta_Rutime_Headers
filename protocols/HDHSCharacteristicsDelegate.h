/* made by EzioChiu.
 */

@protocol HDHSCharacteristicsDelegate

@required

- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristic:(CBCharacteristic *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristics:(NSArray *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2 updateTime:(NSDate *)arg3 error:(NSError *)arg4;
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;

@end
