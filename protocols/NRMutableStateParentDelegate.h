/* made by EzioChiu.
 */

@protocol NRMutableStateParentDelegate

@required

- (void)child:(id <NRMutableStateProtocol>)arg1 didApplyDiff:(id <NRDiffProtocol>)arg2;

@end
