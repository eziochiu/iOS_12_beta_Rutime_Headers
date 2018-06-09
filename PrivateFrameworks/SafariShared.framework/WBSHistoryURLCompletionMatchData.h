/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {
    struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > { 
        struct HistoryURLCompletionItem {} *m_ptr; 
    }  _item;
}

@property (nonatomic, readonly) bool containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool lastVisitWasFailure;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) NSString *originalURLString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long visitCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsBookmark;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCompletionItem:(struct HistoryURLCompletionItem { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; long long x2; long long x3; long long x4; struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > { struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > {} *x_5_1_1; struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > {} *x_5_1_2; struct __compressed_pair<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > *, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > { struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > {} *x_3_2_1; } x_5_1_3; } x5; }*)arg1;
- (bool)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (bool)matchesAutocompleteTrigger:(id)arg1;
- (id)originalURLString;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (long long)visitCount;

@end
