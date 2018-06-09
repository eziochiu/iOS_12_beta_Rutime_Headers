/* made by EzioChiu.
 */

@protocol CKDetailsCell <NSObject>

@required

+ (NSString *)reuseIdentifier;
+ (bool)shouldHighlight;

@end
