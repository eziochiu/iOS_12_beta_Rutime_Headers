/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKFeedResponse : NSObject {
    NSData * _cursor;
    unsigned long long  _extent;
    NSString * _feedID;
    NSArray * _feedItemAndArticleRecords;
    bool  _reachedEnd;
    bool  _reachedOrderLimit;
    bool  _wasDropped;
}

@property (nonatomic, copy) NSData *cursor;
@property (nonatomic) unsigned long long extent;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) NSArray *feedItemAndArticleRecords;
@property (nonatomic) bool reachedEnd;
@property (nonatomic) bool reachedOrderLimit;
@property (nonatomic) bool wasDropped;

- (void).cxx_destruct;
- (id)cursor;
- (id)description;
- (unsigned long long)extent;
- (id)feedID;
- (id)feedItemAndArticleRecords;
- (bool)reachedEnd;
- (bool)reachedOrderLimit;
- (void)setCursor:(id)arg1;
- (void)setExtent:(unsigned long long)arg1;
- (void)setFeedID:(id)arg1;
- (void)setFeedItemAndArticleRecords:(id)arg1;
- (void)setReachedEnd:(bool)arg1;
- (void)setReachedOrderLimit:(bool)arg1;
- (void)setWasDropped:(bool)arg1;
- (bool)wasDropped;

@end
