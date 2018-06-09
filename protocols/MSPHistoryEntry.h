/* made by EzioChiu.
 */

@protocol MSPHistoryEntry <MSPImmutableObject>

@required

- (void)ifSearch:(void *)arg1 ifRoute:(void *)arg2 ifPlaceDisplay:(void *)arg3 ifTransitLineItem:(void *)arg4; // needs 4 arg types, found 24: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MSPHistoryEntrySearch> *, void*, id /* block */, void*, void, id /* block */, <MSPHistoryEntryRoute> *, void*, id /* block */, void*, void, id /* block */, <MSPHistoryEntryPlaceDisplay> *, void*, id /* block */, void*, void, id /* block */, <MSPHistoryEntryTransitLineItem> *, void*
- (bool)isFailed;
- (bool)isUserVisibleDuplicateOfEntry:(id <MSPHistoryEntry>)arg1;
- (bool)tracksRAPReportingOnly;
- (NSDate *)usageDate;

@end
