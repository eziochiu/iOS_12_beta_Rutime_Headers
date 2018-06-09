/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface _IKDSEPrototypeMapping : NSObject {
    IKDOMPrototype * _prototype;
    NSMutableIndexSet * _usageIndexes;
    NSMutableDictionary * _variantMappingsBySelector;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly) IKDOMPrototype *prototype;
@property (nonatomic, readonly, copy) NSIndexSet *usageIndexes;
@property (nonatomic, readonly, copy) NSDictionary *variantMappingsBySelector;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)decrementUsageForIndex:(long long)arg1;
- (void)incrementUsageForIndex:(long long)arg1;
- (id)initWithPrototype:(id)arg1;
- (id)prototype;
- (void)setViewElement:(id)arg1;
- (id)usageIndexes;
- (id)variantMappingForDataItem:(id)arg1;
- (id)variantMappingsBySelector;
- (id)viewElement;

@end
