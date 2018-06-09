/* made by EzioChiu.
 */

@protocol CXSanitizedCopying <NSObject>

@required

- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)updateSanitizedCopy:(id <CXSanitizedCopying>)arg1 withZone:(struct _NSZone { }*)arg2;

@end
