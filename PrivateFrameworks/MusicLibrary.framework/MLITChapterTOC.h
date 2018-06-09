/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLITChapterTOC : MLChapterTOC {
    struct ChapterData { } * _chapterDataRef;
    unsigned int * _nameCookieIndexMap;
    unsigned int * _picCookieIndexMap;
    unsigned int  _totalTimeInMS;
    unsigned int * _urlCookieIndexMap;
}

+ (unsigned int**)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2;
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)enumerateChapterTimesInFlattenedChapterData:(id)arg1 usingBlock:(id /* block */)arg2;

- (unsigned int*)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(bool)arg2;
- (struct ChapterData { }*)chapterDataRef;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfChapters;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (void)dealloc;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (id)initWithChapterDataRef:(struct ChapterData { }*)arg1 totalTimeInMS:(unsigned int)arg2;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)totalTimeInMS;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitleTrimmingCharacterSet;

@end