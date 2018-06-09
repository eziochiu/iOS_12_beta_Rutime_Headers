/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextRangeImpl : UITextRange {
    long long  _affinityIfCollapsed;
    DOMRange * _domRange;
}

@property (nonatomic) long long affinity;
@property (nonatomic, retain) DOMRange *domRange;

+ (id)wrapDOMRange:(id)arg1;
+ (id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2;

- (void)adjustAffinityOfPosition:(id)arg1 isStart:(bool)arg2;
- (long long)affinity;
- (void)dealloc;
- (id)description;
- (id)domRange;
- (id)end;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)setAffinity:(long long)arg1;
- (void)setDomRange:(id)arg1;
- (id)start;

@end
