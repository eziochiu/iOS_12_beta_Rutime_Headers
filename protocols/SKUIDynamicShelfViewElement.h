/* made by EzioChiu.
 */

@protocol SKUIDynamicShelfViewElement <NSObject>

@required

- (SKUIViewElement *)cellTemplateViewElement;
- (<SKUIEntityProviding> *)entityProvider;

@end
