/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayoutState : NSObject {
    bool  _allowParagraphMetrics;
    unsigned long long  _bodyCharIndex;
    void * _bodyLayoutState;
    TSWPStorage * _bodyStorage;
    unsigned long long  _documentPageIndex;
    bool  _doingLayout;
    unsigned long long  _footnoteIndex;
    unsigned long long  _lastLaidOutSectionIndex;
    TPPageIndexPath * _pageIndexPath;
}

@property (nonatomic) bool allowParagraphMetrics;
@property (nonatomic) unsigned long long bodyCharIndex;
@property (nonatomic) void*bodyLayoutState;
@property (nonatomic, readonly) unsigned long long documentPageIndex;
@property (nonatomic) bool doingLayout;
@property (nonatomic) unsigned long long footnoteIndex;
@property (nonatomic, readonly) bool isLayoutComplete;
@property (nonatomic, readonly) unsigned long long lastLaidOutDocumentPageIndex;
@property (nonatomic, readonly) unsigned long long lastLaidOutSectionIndex;
@property (nonatomic, readonly) bool onLastSection;
@property (nonatomic, readonly) unsigned long long pageIndex;
@property (nonatomic, readonly) TPPageIndexPath *pageIndexPath;
@property (nonatomic, readonly) TPSection *section;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } sectionCharRange;
@property (nonatomic, readonly) unsigned long long sectionIndex;

- (void).cxx_destruct;
- (void)advancePageIndex;
- (void)advanceSectionIndex;
- (bool)allowParagraphMetrics;
- (void)backUpToPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2;
- (unsigned long long)bodyCharIndex;
- (void*)bodyLayoutState;
- (unsigned long long)documentPageIndex;
- (bool)doingLayout;
- (unsigned long long)footnoteIndex;
- (id)initWithBodyStorage:(id)arg1;
- (bool)isLayoutComplete;
- (bool)isLayoutCompleteThroughDocumentPageIndex:(unsigned long long)arg1;
- (bool)isLayoutCompleteUpToDocumentPageIndex:(unsigned long long)arg1;
- (unsigned long long)lastLaidOutDocumentPageIndex;
- (unsigned long long)lastLaidOutSectionIndex;
- (bool)onLastSection;
- (unsigned long long)pageIndex;
- (id)pageIndexPath;
- (void)restartLayoutFromFirstPage;
- (void)restartLayoutFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2;
- (id)section;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionCharRange;
- (unsigned long long)sectionIndex;
- (void)setAllowParagraphMetrics:(bool)arg1;
- (void)setBodyCharIndex:(unsigned long long)arg1;
- (void)setBodyLayoutState:(void*)arg1;
- (void)setDocumentPageIndex:(unsigned long long)arg1;
- (void)setDoingLayout:(bool)arg1;
- (void)setFootnoteIndex:(unsigned long long)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;

@end
