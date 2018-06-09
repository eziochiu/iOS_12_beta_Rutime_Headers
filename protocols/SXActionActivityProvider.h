/* made by EzioChiu.
 */

@protocol SXActionActivityProvider <NSObject>

@required

- (<SXActionActivityGroup> *)activityGroupForAction:(SXAction *)arg1;

@optional

- (<SXActionPreviewActivity> *)previewActivityForAction:(SXAction *)arg1;

@end
