/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying> {
    bool  _attemptedCachedOnly;
    NSDictionary * _feedContextByFeedID;
    NSObject * _fetchedRecordsInterestToken;
}

@property (nonatomic, readonly) bool attemptedCachedOnly;
@property (nonatomic, readonly, copy) NSDictionary *feedContextByFeedID;
@property (nonatomic, readonly, copy) NSObject *fetchedRecordsInterestToken;

- (void).cxx_destruct;
- (bool)attemptedCachedOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedContextByFeedID;
- (id)fetchedRecordsInterestToken;
- (id)init;
- (id)initWithAttemptedCachedOnly:(bool)arg1 feedContextByFeedID:(id)arg2 fetchedRecordsInterestToken:(id)arg3;

@end
