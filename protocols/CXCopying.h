/* made by EzioChiu.
 */

@protocol CXCopying <NSCopying, CXSanitizedCopying>

@required

- (void)updateCopy:(id <NSCopying>)arg1 withZone:(struct _NSZone { }*)arg2;

@end
