/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {
    NSArray * _links;
    struct CGSize { double x1; double x2; } * _sizes;
    struct CGSize { 
        double width; 
        double height; 
    }  _totalSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *links;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } totalSize;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateLinesUsingBlock:(id /* block */)arg1;
- (id)initWithLayoutRequest:(id)arg1;
- (id)links;
- (struct CGSize { double x1; double x2; })sizeForLinkAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })totalSize;

@end
