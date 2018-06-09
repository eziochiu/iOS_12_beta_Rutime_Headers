/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUReadingHistoryVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker> {
    <NUVideoReadingHistory> * _readingHistory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUVideoReadingHistory> *readingHistory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithReadingHistory:(id)arg1;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)readingHistory;

@end
