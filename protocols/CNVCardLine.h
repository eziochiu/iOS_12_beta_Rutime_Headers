/* made by EzioChiu.
 */

@protocol CNVCardLine <NSObject>

@required

- (void)serializeWithStrategy:(id <CNVCardLineSerialization>)arg1;

@end
