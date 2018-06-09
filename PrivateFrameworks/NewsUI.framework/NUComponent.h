/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUComponent : NSObject <NUComponent> {
    <NUNode> * _node;
    <NUSizer> * _sizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUNode> *node;
@property (nonatomic, readonly) <NUSizer> *sizer;
@property (readonly) Class superclass;

+ (id)componentWithSizer:(id)arg1 node:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSizer:(id)arg1 node:(id)arg2;
- (id)node;
- (id)sizer;

@end
