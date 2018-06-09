/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFootnoteLayoutController : NSObject {
    bool  _bumpedDocumentEndnotesForPageBreak;
    TPDocumentRoot * _documentRoot;
}

@property (nonatomic, readonly) <TSWPFootnoteMarkProvider> *footnoteMarkProvider;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })endnoteRangeForSectionCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isLastSection:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })footnoteLayoutRangeForPageCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)footnoteMarkProvider;
- (void)inflateFootnotesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 intoFootnoteContainer:(id)arg2;
- (id)initWithDocumentRoot:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })layoutFootnotesFromIndex:(unsigned long long)arg1 intoFootnoteContainer:(id)arg2 maxHeight:(double)arg3 pageCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 sectionCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 isLastSection:(bool)arg6;
- (id)p_footnoteReferenceStoragesInFootnoteIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)p_layoutFootnotesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 intoFootnoteContainer:(id)arg2 maxHeight:(double)arg3 measure:(bool)arg4 inflating:(bool)arg5;
- (id)p_layoutForFootnoteReferenceStorage:(id)arg1;
- (void)removeDeletedFootnoteInContainer:(id)arg1;

@end
