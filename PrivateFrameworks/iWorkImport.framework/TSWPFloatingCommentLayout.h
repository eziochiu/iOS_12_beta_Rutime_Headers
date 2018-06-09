/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFloatingCommentLayout : TSWPShapeLayout <TSWPStyleProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBoldItalicUnderlineShortcuts;

- (bool)allowsConnections;
- (bool)canBeIntersected;
- (bool)canResetTextAndObjectHandles;
- (id)commentInfo;
- (id)fill;
- (struct CGSize { double x1; double x2; })minimumSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (Class)repClassOverride;
- (bool)shouldBeDisplayedInShowMode;
- (bool)shouldDisplayGuides;
- (id)styleProvider;
- (bool)supportsRotation;
- (int)wrapType;

@end
