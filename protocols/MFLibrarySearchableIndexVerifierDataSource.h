/* made by EzioChiu.
 */

@protocol MFLibrarySearchableIndexVerifierDataSource <NSObject>

@required

- (NSDictionary *)dataSamplesForSearchableIndexVerifier:(MFLibrarySearchableIndexVerifier *)arg1 searchableIndex:(MFLibrarySearchableIndex *)arg2;
- (MFLibrarySearchableIndex *)librarySearchableIndexForSearchableIndexVerifier:(MFLibrarySearchableIndexVerifier *)arg1;

@end
