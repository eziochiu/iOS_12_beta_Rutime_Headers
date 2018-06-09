/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying> {
    long long  _itemDBRowID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long itemDBRowID;
@property (readonly) Class superclass;

- (id)columns;
- (id)columnsValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithItemDBRowID:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemDBRowIDIdentifier:(id)arg1;
- (long long)itemDBRowID;
- (id)jobsDescription;
- (id)matchingJobsWhereSQLClause;

@end
