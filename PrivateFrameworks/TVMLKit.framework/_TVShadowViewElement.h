/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVShadowViewElement : NSObject {
    NSArray * _children;
    _TVShadowViewElementID * _elementID;
    _TVShadowViewElement * _parent;
}

@property (nonatomic, copy) NSArray *children;
@property (nonatomic, copy) _TVShadowViewElementID *elementID;
@property (nonatomic) _TVShadowViewElement *parent;

- (void).cxx_destruct;
- (id)children;
- (id)elementID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)parent;
- (void)setChildren:(id)arg1;
- (void)setElementID:(id)arg1;
- (void)setParent:(id)arg1;

@end
