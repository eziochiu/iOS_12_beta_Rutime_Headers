/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPasteboardActionActivity : NSObject <SXActionActivity> {
    NSString * _label;
    UIPasteboard * _pasteboard;
    NSString * _string;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly, copy) UIPasteboard *pasteboard;
@property (nonatomic, readonly, copy) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 pasteboard:(id)arg3 string:(id)arg4;
- (void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2;
- (id)label;
- (id)pasteboard;
- (id)string;
- (unsigned long long)type;

@end
