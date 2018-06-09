/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSlideLayout : PDSlideChild {
    int  mSlideLayoutType;
    PDSlideMaster * mSlideMaster;
}

- (id)background;
- (void)dealloc;
- (id)defaultTheme;
- (id)description;
- (void)doneWithContent;
- (id)initWithSlideMaster:(id)arg1;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4;
- (id)parentTextStyleForTables;
- (void)setSlideLayoutType:(int)arg1;
- (void)setSlideMaster:(id)arg1;
- (int)slideLayoutType;
- (id)slideMaster;
- (id)transition;

@end
