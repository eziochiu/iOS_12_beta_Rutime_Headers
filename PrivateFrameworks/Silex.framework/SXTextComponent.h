/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextComponent : SXComponent

@property (nonatomic, readonly) SXJSONArray *inlineTextStyles;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textStyle;

+ (id)typeString;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (unsigned long long)traits;

@end
