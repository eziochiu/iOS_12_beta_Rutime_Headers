/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFStringAccumulator : NSObject {
    NSString * _immutable;
    NSMutableString * _mutable;
}

- (void)appendString:(id)arg1;
- (void)dealloc;
- (id)string;

@end
