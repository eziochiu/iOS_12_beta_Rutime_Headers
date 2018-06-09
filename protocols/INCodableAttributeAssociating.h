/* made by EzioChiu.
 */

@protocol INCodableAttributeAssociating <NSObject>

@required

- (INCodableAttribute *)associatedCodableAttribute;
- (void)setAssociatedCodableAttribute:(INCodableAttribute *)arg1;

@end
