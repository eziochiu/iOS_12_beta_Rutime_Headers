/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference> {
    <TSKAnnotation> * mAnnotation;
    bool  mAutohideHighlight;
    <TSDCanvasSelection> * mCanvasSelection;
    TSKDocumentRoot * mDocumentRoot;
    TSDDrawableInfo * mDrawableInfo;
    NSArray * mFindHighlights;
    bool  mPulseHighlight;
    struct CGPoint { 
        double x; 
        double y; 
    }  mSearchReferencePoint;
}

@property (nonatomic, retain) <TSKAnnotation> *annotation;
@property (nonatomic) bool autohideHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *findHighlights;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pulseHighlight;
@property (nonatomic) struct CGPoint { double x1; double x2; } searchReferencePoint;
@property (readonly) Class superclass;

+ (id)searchReferenceWithDrawableInfo:(id)arg1;

- (id)annotation;
- (bool)autohideHighlight;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)drawableInfo;
- (id)findHighlights;
- (id)initWithDrawableInfo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReplaceable;
- (id)model;
- (bool)pulseHighlight;
- (id)searchReferenceEnd;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3;
- (struct CGPoint { double x1; double x2; })searchReferencePoint;
- (id)searchReferenceStart;
- (id)selection;
- (void)setAnnotation:(id)arg1;
- (void)setAutohideHighlight:(bool)arg1;
- (void)setFindHighlights:(id)arg1;
- (void)setPulseHighlight:(bool)arg1;
- (void)setSearchReferencePoint:(struct CGPoint { double x1; double x2; })arg1;

@end
