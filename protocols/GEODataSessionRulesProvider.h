/* made by EzioChiu.
 */

@protocol GEODataSessionRulesProvider <NSObject>

@required

- (<GEODataSessionTaskRules> *)preferedRulesForRequest:(GEODataRequest *)arg1;

@end
