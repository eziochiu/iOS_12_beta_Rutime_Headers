/* made by EzioChiu.
 */

@protocol MPRTCReportingItemSessionContaining <NSObject>

@required

- (NSString *)rtcReportingPlayQueueSourceIdentifier;

@optional

- (NSDictionary *)rtcReportingSessionAdditionalUserInfo;

@end
