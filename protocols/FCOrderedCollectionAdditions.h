/* made by EzioChiu.
 */

@protocol FCOrderedCollectionAdditions

@required

- (NSDictionary *)fc_diffAgainstSortedOrderedCollection:(void *)arg1 usingComparator:(void *)arg2; // needs 2 arg types, found 7: <FCOrderedCollection> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, id, void*
- (void)fc_enumerateObjectsPairwiseUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, unsigned long long, bool*, void*
- (bool)fc_isSortedUsingComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, id, void*

@end
