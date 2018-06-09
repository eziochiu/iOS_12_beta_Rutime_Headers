/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKOrderFeedResponse : NSObject {
    unsigned long long  _extent;
    NSString * _feedID;
    NSArray * _feedItemAndArticleRecords;
    bool  _reachedEnd;
    bool  _reachedMinOrder;
    bool  _wasDropped;
}

@property (nonatomic) unsigned long long extent;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) NSArray *feedItemAndArticleRecords;
@property (nonatomic) bool reachedEnd;
@property (nonatomic) bool reachedMinOrder;
@property (nonatomic) bool wasDropped;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)extent;
- (id)feedID;
- (id)feedItemAndArticleRecords;
- (bool)reachedEnd;
- (bool)reachedMinOrder;
- (void)setExtent:(unsigned long long)arg1;
- (void)setFeedID:(id)arg1;
- (void)setFeedItemAndArticleRecords:(id)arg1;
- (void)setReachedEnd:(bool)arg1;
- (void)setReachedMinOrder:(bool)arg1;
- (void)setWasDropped:(bool)arg1;
- (bool)wasDropped;

@end
