/* made by EzioChiu.
 */

@protocol _SFQuickLookDocumentViewDelegate <NSObject>

@required

- (long long)dataOwnerForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;

@optional

- (NSItemProvider *)itemProviderForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;
- (void)quickLookDocumentView:(_SFQuickLookDocumentView *)arg1 didSelectActionAtIndex:(long long)arg2;

@end
