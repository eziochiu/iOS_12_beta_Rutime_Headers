/* made by EzioChiu.
 */

@protocol _SFPBContactImage <NSObject>

@required

- (void)addContactIdentifiers:(NSString *)arg1;
- (void)clearContactIdentifiers;
- (NSString *)contactIdentifier;
- (NSArray *)contactIdentifiers;
- (NSString *)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactIdentifiersCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setContactIdentifiers:(NSArray *)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)threeDTouchEnabled;

@end
