/* made by EzioChiu.
 */

@protocol MFMessageBodyElement_Private <MFMessageBodyElement>

@required

- (bool)isExternallyRetained;
- (void)releaseExternally;
- (<MFMessageBodyElement_Private> *)retainExternally;

@end
