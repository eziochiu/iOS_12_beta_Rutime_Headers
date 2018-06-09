/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {
    id  _delegate;
}

+ (Class)_mutableStringClass;

- (void)beginEditing;
- (id)delegate;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)setDelegate:(id)arg1;

@end
