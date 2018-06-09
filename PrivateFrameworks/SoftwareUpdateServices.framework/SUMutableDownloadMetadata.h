/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (nonatomic) int downloadFeeAgreementStatus;
@property (nonatomic) bool enforceWifiOnlyOverride;
@property (nonatomic) int termsAndConditionsAgreementStatus;

- (void)applyDownloadPolicy:(id)arg1;
- (id)initWithMetadata:(id)arg1;

@end