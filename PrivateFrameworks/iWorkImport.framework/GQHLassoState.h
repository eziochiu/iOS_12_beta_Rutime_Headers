/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHLassoState : GQHState {
    struct __CFString { } * mCssUri;
    unsigned int  mCurrentDrawableZOrder;
    struct __CFString { } * mCurrentSheetFilename;
    struct __CFString { } * mCurrentSheetUri;
    struct __CFDictionary { } * mDrawableUidToCssZOrderClassMap;
    char * mFirstWorkspaceName;
    GQHXML * mIndex;
    bool  mIsProgressiveMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  mMaxCanvasPoint;
    GQHXML * mNavigation;
    int  mSheetCount;
    struct __CFString { } * mSheetCssFilename;
    struct __CFString { } * mSheetCssLastFilename;
    struct __CFArray { } * mSheetCssLastUriList;
    struct __CFArray { } * mSheetCssUriList;
    struct __CFArray { } * mSheetFilenameList;
    struct __CFString { } * mSheetOneCss;
    struct __CFString { } * mSheetOneLastCSS;
    struct __CFArray { } * mSheetUriList;
    int  mTableCount;
    unsigned int  mZOrderedDrawableCount;
}

- (void)addCachedStyle:(struct __CFString { }*)arg1;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (void)addedDrawableWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)beginNewSheet:(const char *)arg1 processorState:(id)arg2;
- (void)cacheAnchorForIndexPage:(char *)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawableUid:(const char *)arg1;
- (unsigned int)currentDrawableZOrder;
- (void)dealloc;
- (bool)drawablesNeedCssZOrdering;
- (int)endSheet;
- (bool)finishMainHtml;
- (bool)inProgressiveMode;
- (id)initWithState:(id)arg1;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1;
- (struct CGPoint { double x1; double x2; })maxCanvasPoint;
- (void)writeAnchorInNavigationPage:(char *)arg1;
- (void)writeIndexPageWithDocumentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)writeIndexPageWithIFrame:(id)arg1;
- (void)writeNavigationPage:(id)arg1;
- (struct __CFString { }*)writeTabsJS;

@end
