/* made by EzioChiu.
 */

@protocol CNContactsLoggerProvider <NSObject>

@required

- (<CNContactsLogger> *)contactsLogger;
- (<CNRegulatoryLogger> *)regulatoryLogger;
- (<CNSpotlightIndexingLogger> *)spotlightIndexingLogger;

@end
