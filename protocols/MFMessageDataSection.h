/* made by EzioChiu.
 */

@protocol MFMessageDataSection

@required

- (MFDataHolder *)dataHolder;
- (bool)isComplete;
- (bool)isPartial;
- (NSString *)partName;

@end
