/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebElementDictionary : NSDictionary {
    NSMutableDictionary * _cache;
    bool  _cacheComplete;
    NSMutableSet * _nilValues;
    struct HitTestResult { struct HitTestLocation { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_1_1_1; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_2_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_2_2_2; } x_1_1_2; struct FloatPoint { float x_3_2_1; float x_3_2_2; } x_1_1_3; struct FloatQuad { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_4_2_1; struct FloatPoint { float x_2_3_1; float x_2_3_2; } x_4_2_2; struct FloatPoint { float x_3_3_1; float x_3_3_2; } x_4_2_3; struct FloatPoint { float x_4_3_1; float x_4_3_2; } x_4_2_4; } x_1_1_4; bool x_1_1_5; bool x_1_1_6; } x1; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_2_1_1; } x2; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_3_1_1; } x3; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_4_1_1; struct LayoutUnit { int x_2_2_1; } x_4_1_2; } x4; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_5_1_1; struct LayoutUnit { int x_2_2_1; } x_5_1_2; } x5; } * _result;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (id)_absoluteImageURL;
- (id)_absoluteLinkURL;
- (id)_absoluteMediaURL;
- (id)_altDisplayString;
- (id)_domNode;
- (void)_fillCache;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (id)_isLiveLink;
- (id)_isSelected;
- (id)_spellingToolTip;
- (id)_targetWebFrame;
- (id)_textContent;
- (id)_title;
- (id)_titleDisplayString;
- (id)_webFrame;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithHitTestResult:(const struct HitTestResult { struct HitTestLocation { struct LayoutPoint { struct LayoutUnit { int x_1_3_1; } x_1_2_1; struct LayoutUnit { int x_2_3_1; } x_1_2_2; } x_1_1_1; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_2_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_2_2_2; } x_1_1_2; struct FloatPoint { float x_3_2_1; float x_3_2_2; } x_1_1_3; struct FloatQuad { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_4_2_1; struct FloatPoint { float x_2_3_1; float x_2_3_2; } x_4_2_2; struct FloatPoint { float x_3_3_1; float x_3_3_2; } x_4_2_3; struct FloatPoint { float x_4_3_1; float x_4_3_2; } x_4_2_4; } x_1_1_4; bool x_1_1_5; bool x_1_1_6; } x1; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_2_1_1; } x2; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_3_1_1; } x3; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_4_1_1; struct LayoutUnit { int x_2_2_1; } x_4_1_2; } x4; struct LayoutPoint { struct LayoutUnit { int x_1_2_1; } x_5_1_1; struct LayoutUnit { int x_2_2_1; } x_5_1_2; } x5; }*)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
