/* made by EzioChiu.
 */

@protocol HDCoreMotionDatum <NSObject>

@required

- (NSDate *)hd_datestamp;
- (NSDate *)hd_epochDatestamp;
- (long long)hd_recordID;
- (NSUUID *)hd_sourceID;
- (HKUnit *)hd_unitForType:(HKQuantityType *)arg1;

@end
