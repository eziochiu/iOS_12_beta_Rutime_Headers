/* made by EzioChiu.
 */

@protocol HMDAccessorySymptomsDelegate <NSObject>

@required

- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeBroadcastedSymptoms:(NSSet *)arg2;
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeCanInitiateFix:(bool)arg2;
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeLocalSymptoms:(NSSet *)arg2;

@end
