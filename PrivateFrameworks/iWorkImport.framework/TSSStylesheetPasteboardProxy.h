/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStylesheetPasteboardProxy : TSPObject {
    TSUMutableRetainedPointerSet * mReferencedStyles;
    NSObject<OS_dispatch_queue> * mReferencedStylesQueue;
    bool  mSelfArchiving;
    TSSStylesheet * mStylesheet;
}

- (void)addStyleReference:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
