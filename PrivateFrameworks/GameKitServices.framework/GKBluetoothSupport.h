/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKBluetoothSupport : NSObject

+ (Class)_bluetoothManagerClass;
+ (void)_btPowerStateChanged:(id)arg1;
+ (int)_determineBluetoothStatus;
+ (int)_directBTStatus;
+ (int)bluetoothStatus;
+ (void)cleanup;
+ (void)initialize;
+ (void)turnBluetoothOn;

@end
