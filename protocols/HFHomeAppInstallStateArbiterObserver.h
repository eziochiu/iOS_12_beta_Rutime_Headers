/* made by EzioChiu.
 */

@protocol HFHomeAppInstallStateArbiterObserver <NSObject>

@required

- (void)installStateArbiter:(HFHomeAppInstallStateArbiter *)arg1 installStateDidChange:(bool)arg2;

@end
