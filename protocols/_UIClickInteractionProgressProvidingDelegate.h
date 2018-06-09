/* made by EzioChiu.
 */

@protocol _UIClickInteractionProgressProvidingDelegate <NSObject>

@required

- (void)clickProgressProvider:(id <_UIClickInteractionProgressProviding>)arg1 didUpdateWithOverallProgress:(double)arg2 currentState:(long long)arg3 ended:(bool)arg4;
- (void)clickProgressProviderDidBegin:(id <_UIClickInteractionProgressProviding>)arg1;
- (void)clickProgressProviderDidEnd:(id <_UIClickInteractionProgressProviding>)arg1;

@end
