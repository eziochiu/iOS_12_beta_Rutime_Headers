/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebOverlayLayer : CALayer {
    struct ResourceUsageOverlay { int (**x1)(); struct Page {} *x2; struct RefPtr<WebCore::PageOverlay, WTF::DumbPtrTraits<WebCore::PageOverlay> > { struct PageOverlay {} *x_3_1_1; } x3; bool x4; struct IntPoint { int x_5_1_1; int x_5_1_2; } x5; struct RetainPtr<CALayer> { void *x_6_1_1; } x6; struct RetainPtr<CALayer> { void *x_7_1_1; } x7; } * m_overlay;
}

- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithResourceUsageOverlay:(struct ResourceUsageOverlay { int (**x1)(); struct Page {} *x2; struct RefPtr<WebCore::PageOverlay, WTF::DumbPtrTraits<WebCore::PageOverlay> > { struct PageOverlay {} *x_3_1_1; } x3; bool x4; struct IntPoint { int x_5_1_1; int x_5_1_2; } x5; struct RetainPtr<CALayer> { void *x_6_1_1; } x6; struct RetainPtr<CALayer> { void *x_7_1_1; } x7; }*)arg1;

@end
