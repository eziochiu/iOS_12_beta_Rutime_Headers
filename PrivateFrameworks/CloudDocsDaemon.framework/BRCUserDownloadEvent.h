/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserDownloadEvent : BRCEventMetric {
    bool  _didSucceed;
    NSMutableSet * _docIDs;
    bool  _isDownloadingForBackup;
    bool  _isRecursiveDownload;
    unsigned long long  _itemCount;
    NSUUID * _operationID;
    unsigned long long  _totalContentSize;
}

@property (nonatomic) bool didSucceed;
@property (nonatomic, retain) NSMutableSet *docIDs;
@property (nonatomic) bool isDownloadingForBackup;
@property (nonatomic) bool isRecursiveDownload;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic, retain) NSUUID *operationID;
@property (nonatomic) unsigned long long totalContentSize;

- (void).cxx_destruct;
- (id)additionalPayload;
- (bool)didSucceed;
- (id)docIDs;
- (id)init;
- (bool)isDownloadingForBackup;
- (bool)isRecursiveDownload;
- (unsigned long long)itemCount;
- (id)operationID;
- (void)setDidSucceed:(bool)arg1;
- (void)setDocIDs:(id)arg1;
- (void)setIsDownloadingForBackup:(bool)arg1;
- (void)setIsRecursiveDownload:(bool)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setOperationID:(id)arg1;
- (void)setTotalContentSize:(unsigned long long)arg1;
- (id)subDescription;
- (unsigned long long)totalContentSize;

@end
