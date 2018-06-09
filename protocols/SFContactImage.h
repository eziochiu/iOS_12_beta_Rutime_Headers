/* made by EzioChiu.
 */

@protocol SFContactImage <SFImage>

@required

- (NSString *)contactIdentifier;
- (NSArray *)contactIdentifiers;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setContactIdentifiers:(NSArray *)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)threeDTouchEnabled;

@end
