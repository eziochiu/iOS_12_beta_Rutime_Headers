/* made by EzioChiu.
 */

@protocol ABVCardActivityAlertAbstractSerializationStrategy <NSObject>

@required

+ (NSString *)serializeString:(NSString *)arg1;
+ (bool)strategyWouldAlterString:(NSString *)arg1;

@end
