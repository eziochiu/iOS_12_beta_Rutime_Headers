/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentStyle : SXJSONObject

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXFill *fill;
@property (nonatomic, readonly) UIColor *topBackgroundColor;
@property (nonatomic, readonly) SXJSONLinearGradient *topBackgroundGradient;

- (id)fillWithValue:(id)arg1 withType:(int)arg2;

@end