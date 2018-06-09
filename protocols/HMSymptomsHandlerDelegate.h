/* made by EzioChiu.
 */

@protocol HMSymptomsHandlerDelegate <NSObject>

@optional

- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateCanInitiateFix:(bool)arg2;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateFixState:(long long)arg2;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateSymptoms:(NSSet *)arg2;

@end
