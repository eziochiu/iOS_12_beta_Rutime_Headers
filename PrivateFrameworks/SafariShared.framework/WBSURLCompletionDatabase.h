/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSURLCompletionDatabase : NSObject {
    <WBSURLCompletionDataSource> * _dataSource;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> { 
        m_capacity **m_buffer; 
    }  _fullTextBookmarkMatchesCache;
    NSString * _fullTextBookmarkMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> { 
        m_capacity **m_buffer; 
    }  _fullTextHistoryMatchesCache;
    NSString * _fullTextHistoryMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> { 
        m_capacity **m_buffer; 
    }  _prefixBookmarkMatchesCache;
    NSString * _prefixBookmarkMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> { 
        m_capacity **m_buffer; 
    }  _prefixHistoryMatchesCache;
    NSString * _prefixHistoryMatchesCacheString;
}

@property (nonatomic) <WBSURLCompletionDataSource> *dataSource;

+ (bool)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const struct BookmarkAndHistoryCompletionMatch { unsigned int x1; long long x2; long long x3; unsigned long long x4; unsigned long long x5; id x6; }*)arg1;
+ (void)initializeURLCompletionOnMainThread;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getSortedFullTextMatchesForTypedString:(id)arg1 topHits:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg2 historyMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)_getSortedMatchesForTypedString:(id)arg1 topHits:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg2 historyMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg5 bookmarkLimit:(unsigned long long)arg6 prefixMatchesOnly:(bool)arg7;
- (void)_getSortedPrefixMatchesForTypedString:(id)arg1 topHits:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg2 historyMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 historyMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg2 bookmarkMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg3 dataTypes:(unsigned int)arg4;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 historyMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg2 bookmarkMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg3;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {} *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(bool)arg1;
- (void)clearHistoryMatchesCache;
- (void)clearMatchesCaches;
- (id)dataSource;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned long long)arg4;
- (id)init;
- (void)setDataSource:(id)arg1;

@end
