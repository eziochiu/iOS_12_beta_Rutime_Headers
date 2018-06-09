/* made by EzioChiu.
 */

@protocol WLKUIMediaEntityExport <JSExport>

@required

- (NSString *)identifier;
- (WLKUIMediaEntityType *)type;
- (NSDictionary *)valuesForProperties:(NSArray *)arg1;

@end
