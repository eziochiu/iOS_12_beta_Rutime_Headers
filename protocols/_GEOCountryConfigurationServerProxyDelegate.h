/* made by EzioChiu.
 */

@protocol _GEOCountryConfigurationServerProxyDelegate <NSObject>

@required

- (void)serverProxy:(id <_GEOCountryConfigurationServerProxy>)arg1 countryCodeDidChange:(NSString *)arg2;
- (void)serverProxyProvidersDidChange:(id <_GEOCountryConfigurationServerProxy>)arg1;

@end
