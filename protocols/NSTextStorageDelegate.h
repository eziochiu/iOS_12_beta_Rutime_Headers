/* made by EzioChiu.
 */

@protocol NSTextStorageDelegate <NSObject>

@optional

- (void)textStorage:(NSTextStorage *)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)textStorage:(NSTextStorage *)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;

@end
