/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSingleTopicFeedGroupEmittingOperation : FCSingleTagFeedGroupEmittingOperation

- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1;
- (void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(id /* block */)arg3;

@end
