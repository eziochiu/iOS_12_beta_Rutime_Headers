/* made by EzioChiu.
 */

@protocol MPRTCReportingItemSessionCreating <NSObject>

@required

- (long long)rtcReportingAssetType;
- (id)rtcReportingParentHierarchyToken;
- (NSString *)rtcReportingServiceIdentifier;

@end
