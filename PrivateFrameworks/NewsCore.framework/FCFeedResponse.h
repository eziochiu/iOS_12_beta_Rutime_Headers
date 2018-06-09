/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedResponse : NSObject {
    NSError * _error;
    bool  _exhaustedRequestRange;
    NSString * _feedID;
    NSArray * _feedItems;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic) bool exhaustedRequestRange;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) NSArray *feedItems;
@property (nonatomic, readonly, copy) FCFeedRange *feedRange;

- (void).cxx_destruct;
- (id)error;
- (bool)exhaustedRequestRange;
- (id)feedID;
- (id)feedItems;
- (id)feedRange;
- (id)feedResponseByMergingWithResponse:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExhaustedRequestRange:(bool)arg1;
- (void)setFeedID:(id)arg1;
- (void)setFeedItems:(id)arg1;

@end
