/* made by EzioChiu.
 */

@protocol MPSectionedIdentifierListEnumerationResult <NSObject>

@required

- (long long)branchDepth;
- (long long)entryType;
- (<MPSectionedIdentifierListEnumerationItem> *)itemResult;
- (<MPSectionedIdentifierListEnumerationTrackingEntry> *)trackingEntryResult;

@end
