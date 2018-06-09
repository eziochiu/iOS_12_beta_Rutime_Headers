/* made by EzioChiu.
 */

@protocol PGPersonResult <NSObject>

@required

- (long long)compareToPerson:(id <PGPersonResult>)arg1;
- (NSString *)contactIdentifier;
- (NSString *)keywordDescription;
- (NSString *)localIdentifier;

@end
