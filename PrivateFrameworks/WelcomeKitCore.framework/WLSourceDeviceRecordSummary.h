/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLSourceDeviceRecordSummary : NSObject {
    WLSourceDeviceAccount * _account;
    NSString * _dataFilePath;
    unsigned long long  _downloadSegmentCount;
    NSString * _identifier;
    unsigned long long  _itemSize;
    NSDictionary * _metadata;
    NSDate * _modifiedDate;
    NSString * _relativePath;
    unsigned long long  _sqlID;
    bool  _storeDataAsFile;
}

@property (nonatomic, retain) WLSourceDeviceAccount *account;
@property (nonatomic, copy) NSString *dataFilePath;
@property (nonatomic) unsigned long long downloadSegmentCount;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSDate *modifiedDate;
@property (nonatomic, copy) NSString *relativePath;
@property (nonatomic) unsigned long long sqlID;
@property (nonatomic) bool storeDataAsFile;

+ (id)_numberFormatter;
+ (id)summaryWithInfo:(id)arg1 account:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)dataFilePath;
- (unsigned long long)downloadSegmentCount;
- (id)identifier;
- (id)initWithInfo:(id)arg1 account:(id)arg2;
- (unsigned long long)itemSize;
- (id)metadata;
- (id)modifiedDate;
- (id)relativePath;
- (void)setAccount:(id)arg1;
- (void)setDataFilePath:(id)arg1;
- (void)setDownloadSegmentCount:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemSize:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModifiedDate:(id)arg1;
- (void)setRelativePath:(id)arg1;
- (void)setSqlID:(unsigned long long)arg1;
- (void)setStoreDataAsFile:(bool)arg1;
- (unsigned long long)sqlID;
- (bool)storeDataAsFile;

@end
