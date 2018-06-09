/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface FTTodayEventTrackerVideoReadingHistory : NSObject <NUVideoReadingHistory> {
    <NTTodayEventTracker> * _eventTracker;
}

@property (nonatomic, readonly) <NTTodayEventTracker> *eventTracker;

- (void).cxx_destruct;
- (id)eventTracker;
- (id)init;
- (id)initWithTodayEventTracker:(id)arg1;
- (void)markArticleAsReadWithVideoItem:(id)arg1;
- (void)markArticleAsSeenWithVideoItem:(id)arg1;

@end
