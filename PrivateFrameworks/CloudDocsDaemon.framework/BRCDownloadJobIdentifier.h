/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying> {
    NSString * _etag;
    unsigned long long  _itemDBRowID;
    int  _kind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *etag;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemDBRowID;
@property (nonatomic, readonly) int kind;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)columns;
- (id)columnsValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)etag;
- (unsigned long long)hash;
- (id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDownloadJobIdentifier:(id)arg1;
- (unsigned long long)itemDBRowID;
- (id)jobsDescription;
- (int)kind;
- (id)matchingJobsWhereSQLClause;

@end
