/* made by EzioChiu.
 */

@protocol CDPLocalSecretFollowUpProvider <NSObject>

@required

- (void)deleteLocalSecretChangeFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)postRepairFollowUp;

@end
