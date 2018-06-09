/* made by EzioChiu.
 */

@protocol CNVCardParsedResultBuilder <NSObject>

@required

- (id)build;
- (bool)canSetValueForProperty:(NSString *)arg1;
- (bool)setImageData:(NSData *)arg1 forReference:(NSString *)arg2 clipRects:(NSArray *)arg3;
- (void)setUnknownProperties:(NSArray *)arg1;
- (bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (bool)setValues:(NSArray *)arg1 labels:(NSArray *)arg2 isPrimaries:(NSArray *)arg3 forProperty:(NSString *)arg4;
- (NSSet *)validCountryCodes;
- (id)valueForProperty:(NSString *)arg1;

@end
