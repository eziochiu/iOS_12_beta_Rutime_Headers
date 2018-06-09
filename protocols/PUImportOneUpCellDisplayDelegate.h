/* made by EzioChiu.
 */

@protocol PUImportOneUpCellDisplayDelegate

@required

- (void)importOneUpCell:(PUImportOneUpCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (void)importOneUpCell:(PUImportOneUpCell *)arg1 requestedBadgeUpdateForImportItem:(PUImportItemViewModel *)arg2;
- (long long)importOneUpCell:(void *)arg1 requestedThumbnailForImportItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PUImportOneUpCell *, PUImportItemViewModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, bool, void*

@end
