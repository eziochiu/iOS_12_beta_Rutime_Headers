/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {
    MFConditionLock * doneCondition;
    NSDate * earliestDateAdded;
    NSDate * latestDateToAdd;
    MFMailMessageStoreSearchResult * searchResult;
    double  timeReceivedLastResponse;
    unsigned int  totalCount;
}

@property (nonatomic, readonly, retain) NSDate *earliestDateAdded;
@property (nonatomic, retain) NSDate *latestDateToAdd;
@property (nonatomic, readonly, retain) MFMailMessageStoreSearchResult *searchResult;

- (void)dealloc;
- (id)earliestDateAdded;
- (bool)handleItems:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (id)latestDateToAdd;
- (void)resetDoneCondition;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (id)searchResult;
- (void)setLatestDateToAdd:(id)arg1;
- (void)waitUntilDone;
- (bool)waitUntilDoneBeforeDate:(id)arg1;

@end
