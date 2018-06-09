/* made by EzioChiu.
 */

@protocol LPMetadataProviderSpecializationDelegate <NSObject>

@required

- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didCompleteWithMetadata:(LPLinkMetadata *)arg2;
- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didFailWithError:(NSError *)arg2;

@end
