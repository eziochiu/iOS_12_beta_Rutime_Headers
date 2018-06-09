/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic) bool ascending;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *fromDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *limit;
@property (nonatomic, copy) NSArray *matchingMetadataKeys;
@property (nonatomic, copy) NSDictionary *matchingMetadataKeysAndStringValues;
@property (nonatomic, copy) NSString *sortBy;
@property (nonatomic, copy) NSArray *streamTypes;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *taskType;
@property (nonatomic, copy) NSDate *toDate;
@property (nonatomic, copy) NSString *visibility;

+ (id)fetchActivityStream;
+ (id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2;

- (id)activityType;
- (bool)ascending;
- (id)encodedClassName;
- (id)fromDate;
- (id)groupIdentifier;
- (id)limit;
- (id)matchingMetadataKeys;
- (id)matchingMetadataKeysAndStringValues;
- (bool)requiresResponse;
- (void)setActivityType:(id)arg1;
- (void)setAscending:(bool)arg1;
- (void)setFromDate:(id)arg1;
- (void)setLimit:(id)arg1;
- (void)setMatchingMetadataKeys:(id)arg1;
- (void)setMatchingMetadataKeysAndStringValues:(id)arg1;
- (void)setSortBy:(id)arg1;
- (void)setStreamTypes:(id)arg1;
- (void)setTaskType:(id)arg1;
- (void)setToDate:(id)arg1;
- (void)setVisibility:(id)arg1;
- (id)sortBy;
- (id)streamTypes;
- (id)taskType;
- (id)toDate;
- (id)visibility;

@end
