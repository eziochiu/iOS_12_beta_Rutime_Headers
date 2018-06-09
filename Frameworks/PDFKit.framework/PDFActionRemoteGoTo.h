/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFActionRemoteGoTo : PDFAction <NSCopying> {
    PDFActionRemoteGoToPrivateVars * _private2;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;

- (void).cxx_destruct;
- (id)URL;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct __CFDictionary { }*)createDictionaryRef;
- (id)description;
- (id)initWithActionDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)initWithPageIndex:(unsigned long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 fileURL:(id)arg3;
- (unsigned long long)pageIndex;
- (struct CGPoint { double x1; double x2; })point;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setURL:(id)arg1;
- (id)toolTip;
- (id)toolTipNoLabel;

@end
