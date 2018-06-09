/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageBackgroundManager : NSObject <PDFPageDrawProgressCallback> {
    PDFPageBackgroundManagerPrivate * _private;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_drawPageImage:(unsigned long long)arg1 forQuality:(int)arg2;
- (bool)_expectedQualityIndexForPageIndex:(unsigned long long)arg1 forQuality:(int*)arg2;
- (bool)_findPageIndexNeedingUpdate:(unsigned long long*)arg1 forQuality:(int*)arg2;
- (void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(bool)arg2;
- (void)_update;
- (id)backgroundImageForPageIndex:(unsigned long long)arg1 withFoundQuality:(int*)arg2;
- (void)cancel;
- (void)dealloc;
- (void)didInsertPageAtIndex:(unsigned long long)arg1;
- (void)didRemovePageAtIndex:(unsigned long long)arg1;
- (void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (bool)drawProgressCallback;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (id)initWithDelegate:(id)arg1 andRenderingProperties:(id)arg2;
- (void)updateActivePageIndex:(unsigned long long)arg1;
- (void)willForceUpdate;

@end
