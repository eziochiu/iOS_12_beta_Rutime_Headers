/* made by EzioChiu.
 */

@protocol MPSectionedIdentifierListIdentifierPair <NSObject, NSCoding, NSCopying>

@required

- (NSString *)itemIdentifier;
- (NSString *)sectionIdentifier;

@end
