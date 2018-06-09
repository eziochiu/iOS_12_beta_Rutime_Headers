/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest> {
    NSArray * _links;
    double  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class layoutClass;
@property (nonatomic, copy) NSArray *links;
@property (readonly) Class superclass;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)layoutClass;
- (id)links;
- (void)setLinks:(id)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
