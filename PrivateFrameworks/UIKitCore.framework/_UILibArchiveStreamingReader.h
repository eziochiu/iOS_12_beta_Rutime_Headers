/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILibArchiveStreamingReader : NSObject {
    long long  _appleDoubleIdentificationType;
    NSString * _archivePath;
    struct ui_archive { } * _laArchive;
    int  _laArchiveType;
    NSString * _laArchiveTypeName;
    int  _laProcessingState;
    long long  _nextLoadedItemEntrySequenceIndex;
    NSError * _readError;
    NSMutableArray * _readableLoadedItemEntryQueue;
    long long  _state;
    struct ui_archive { } * _underlyingArchive;
}

@property (nonatomic) long long appleDoubleIdentificationType;
@property (nonatomic, readonly) NSString *archivePath;
@property (nonatomic, readonly) NSString *openedArchiveUnderlyingFormatName;
@property (nonatomic, readonly) struct ui_archive { }*underlyingArchive;

- (void).cxx_destruct;
- (void)_closeArchive;
- (id)_debugLoadAndPrintAllRemainingItems;
- (id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry { }*)arg1;
- (id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
- (bool)_openArchive;
- (bool)_readItemsWithShouldVisitBlock:(id /* block */)arg1 visitorBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)_shouldReportAsAppleDoubleItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
- (bool)_shouldReportAsLogicalItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
- (long long)appleDoubleIdentificationType;
- (id)archivePath;
- (void)close;
- (id)initForReadingArchivePath:(id)arg1;
- (bool)open;
- (id)openedArchiveUnderlyingFormatName;
- (bool)readAllItemsWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)readLogicalItemsWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)setAppleDoubleIdentificationType:(long long)arg1;
- (struct ui_archive { }*)underlyingArchive;

@end
