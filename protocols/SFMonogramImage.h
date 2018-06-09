/* made by EzioChiu.
 */

@protocol SFMonogramImage <SFImage>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)monogramLetters;
- (void)setMonogramLetters:(NSString *)arg1;

@end
