/* made by EzioChiu.
 */

@protocol VCRedundancyControllerDelegate

@required

- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyPercentageDidChange:(unsigned int)arg2;

@end
