/* made by EzioChiu.
 */

@protocol SiriUIReusableView <NSObject>

@required

+ (double)defaultHeight;
+ (NSString *)elementKind;
+ (NSString *)reuseIdentifier;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)setSnippetViewController:(SiriUISnippetViewController *)arg1;
- (SiriUISnippetViewController *)snippetViewController;

@end