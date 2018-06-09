/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDataFileHistoryHelpers : NSObject

+ (bool)archiveDeviceHistory:(id)arg1;
+ (bool)archiveSecureProperties:(id)arg1;
+ (bool)createMissingDates:(id)arg1;
+ (id)findPairedDateForDeviceID:(id)arg1 inHistory:(id)arg2;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(id /* block */)arg3;
+ (id)unarchiveDeviceHistory;
+ (id)unarchiveSecureProperties;

@end
