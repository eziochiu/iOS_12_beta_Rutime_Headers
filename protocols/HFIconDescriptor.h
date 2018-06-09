/* made by EzioChiu.
 */

@protocol HFIconDescriptor <NSObject, NAEquatable>

@required

- (NSString *)identifier;

@optional

- (id)iconDescriptorByMergingWithIconDescriptor:(id <HFIconDescriptor>)arg1;

@end
