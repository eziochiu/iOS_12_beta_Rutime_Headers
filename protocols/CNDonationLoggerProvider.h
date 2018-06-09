/* made by EzioChiu.
 */

@protocol CNDonationLoggerProvider <NSObject>

@required

- (<CNDonationAccountLogger> *)accountLogger;
- (<CNDonationAgentLogger> *)agentLogger;
- (<CNDonationAnalyticsLogger> *)analyticsLogger;
- (<CNDonationExtensionLogger> *)extensionLogger;
- (<CNDonationPreferencesLogger> *)preferencesLogger;
- (<CNDonationToolLogger> *)toolLogger;

@end
